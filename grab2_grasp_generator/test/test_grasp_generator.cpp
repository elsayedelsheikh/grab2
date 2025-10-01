// Copyright (c) 2025, ElSayed ElSheikh

#include <gtest/gtest.h>
#include <memory>
#include <string>
#include <fstream>
#include <filesystem>

#include "rclcpp/rclcpp.hpp"
#include "grab2_grasp_generator/grasp_generator.hpp"
#include "grab2_msgs/action/get_isaac_grasp.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "moveit_msgs/msg/grasp.hpp"

class GraspGeneratorTestFixture : public ::testing::Test
{
protected:
  void SetUp() override
  {
    rclcpp::init(0, nullptr);
    node_ = std::make_shared<grab2_grasp_generator::GraspGenerator>(rclcpp::NodeOptions());

    // Create temporary test directory
    test_dir_ = std::filesystem::temp_directory_path() / "grasp_generator_test";
    std::filesystem::create_directories(test_dir_);
  }

  void TearDown() override
  {
    node_.reset();

    // Clean up test files
    if (std::filesystem::exists(test_dir_)) {
      std::filesystem::remove_all(test_dir_);
    }

    rclcpp::shutdown();
  }

  // Helper method to create a test YAML file
  void createTestYAMLFile(const std::string & filename, const std::string & content)
  {
    std::ofstream file(test_dir_ / filename);
    file << content;
    file.close();
  }

  // Helper method to create a valid grasp YAML
  std::string createValidGraspYAML()
  {
    return
      R"(
    format: isaac_grasp
    format_version: 1.0

    object_frame_link: /World/mug
    gripper_frame_link: /World/panda_hand

    grasps:
      grasp_0:
        confidence: 0.95
        position: [0.1, 0.2, 0.3]
        orientation:
          w: 1.0
          xyz: [0.0, 0.0, 0.0]
        cspace_position:
          panda_finger_joint1: 0.001
        pregrasp_cspace_position:
          panda_finger_joint1: 0.04
      grasp_1:
        confidence: 0.85
        position: [0.15, 0.25, 0.35]
        orientation:
          w: 0.00332
          xyz: [0.98453, 0.16837, 0.04837]
        cspace_position:
          panda_finger_joint1: 0.01
        pregrasp_cspace_position:
          panda_finger_joint1: 0.035
    )";
  }

  std::shared_ptr<grab2_grasp_generator::GraspGenerator> node_;
  std::filesystem::path test_dir_;
};

TEST_F(GraspGeneratorTestFixture, testNodeCreation)
{
  ASSERT_NE(node_, nullptr);
  EXPECT_STREQ(node_->get_name(), "grasp_generator");
}

TEST_F(GraspGeneratorTestFixture, testParseValidYAML)
{
  std::string yaml_content = createValidGraspYAML();
  std::string filename = "test_grasps.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  ASSERT_TRUE(grasps_opt.has_value());
  auto grasps = grasps_opt.value();

  ASSERT_EQ(grasps.size(), 2u);

  // Check first grasp
  EXPECT_EQ(grasps[0].id, "grasp_0");
  EXPECT_DOUBLE_EQ(grasps[0].grasp_quality, 0.95);
  EXPECT_DOUBLE_EQ(grasps[0].grasp_pose.pose.position.x, 0.1);
  EXPECT_DOUBLE_EQ(grasps[0].grasp_pose.pose.position.y, 0.2);
  EXPECT_DOUBLE_EQ(grasps[0].grasp_pose.pose.position.z, 0.3);
  EXPECT_DOUBLE_EQ(grasps[0].grasp_pose.pose.orientation.w, 1.0);

  // Check second grasp
  EXPECT_EQ(grasps[1].id, "grasp_1");
  EXPECT_DOUBLE_EQ(grasps[1].grasp_quality, 0.85);
  EXPECT_DOUBLE_EQ(grasps[1].grasp_pose.pose.position.x, 0.15);
}

TEST_F(GraspGeneratorTestFixture, testParseYAMLMissingGraspsField)
{
  std::string yaml_content = R"(
gripper_frame_link: "/World/panda_hand"
)";
  std::string filename = "missing_grasps.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  EXPECT_FALSE(grasps_opt.has_value());
}

TEST_F(GraspGeneratorTestFixture, testParseYAMLEmptyGrasps)
{
  std::string yaml_content = R"(
gripper_frame_link: "/World/robotiq_2f_140"
grasps: {}
)";
  std::string filename = "empty_grasps.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  EXPECT_FALSE(grasps_opt.has_value());
}

TEST_F(GraspGeneratorTestFixture, testParseInvalidYAML)
{
  std::string yaml_content = "invalid: yaml: content: [[[";  // Malformed YAML
  std::string filename = "invalid.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  EXPECT_FALSE(grasps_opt.has_value());
}

TEST_F(GraspGeneratorTestFixture, testParseNonExistentFile)
{
  auto grasps_opt = node_->parseYAML("/nonexistent/path/to/file.yaml");

  EXPECT_FALSE(grasps_opt.has_value());
}

TEST_F(GraspGeneratorTestFixture, testTransformGraspFrameIdentity)
{
  moveit_msgs::msg::Grasp grasp;
  grasp.id = "test_grasp";
  grasp.grasp_pose.pose.position.x = 1.0;
  grasp.grasp_pose.pose.position.y = 2.0;
  grasp.grasp_pose.pose.position.z = 3.0;
  grasp.grasp_pose.pose.orientation.w = 1.0;
  grasp.grasp_pose.pose.orientation.x = 0.0;
  grasp.grasp_pose.pose.orientation.y = 0.0;
  grasp.grasp_pose.pose.orientation.z = 0.0;

  geometry_msgs::msg::PoseStamped world_to_object;
  world_to_object.header.frame_id = "world";
  world_to_object.pose.position.x = 0.0;
  world_to_object.pose.position.y = 0.0;
  world_to_object.pose.position.z = 0.0;
  world_to_object.pose.orientation.w = 1.0;
  world_to_object.pose.orientation.x = 0.0;
  world_to_object.pose.orientation.y = 0.0;
  world_to_object.pose.orientation.z = 0.0;

  node_->transfromGraspFrame(grasp, world_to_object);

  EXPECT_EQ(grasp.grasp_pose.header.frame_id, "world");
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.x, 1.0);
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.y, 2.0);
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.z, 3.0);
}

TEST_F(GraspGeneratorTestFixture, testTransformGraspFrameTranslation)
{
  moveit_msgs::msg::Grasp grasp;
  grasp.id = "test_grasp";
  grasp.grasp_pose.pose.position.x = 1.0;
  grasp.grasp_pose.pose.position.y = 0.0;
  grasp.grasp_pose.pose.position.z = 0.0;
  grasp.grasp_pose.pose.orientation.w = 1.0;
  grasp.grasp_pose.pose.orientation.x = 0.0;
  grasp.grasp_pose.pose.orientation.y = 0.0;
  grasp.grasp_pose.pose.orientation.z = 0.0;

  geometry_msgs::msg::PoseStamped world_to_object;
  world_to_object.header.frame_id = "world";
  world_to_object.pose.position.x = 5.0;
  world_to_object.pose.position.y = 3.0;
  world_to_object.pose.position.z = 2.0;
  world_to_object.pose.orientation.w = 1.0;
  world_to_object.pose.orientation.x = 0.0;
  world_to_object.pose.orientation.y = 0.0;
  world_to_object.pose.orientation.z = 0.0;

  node_->transfromGraspFrame(grasp, world_to_object);

  EXPECT_EQ(grasp.grasp_pose.header.frame_id, "world");
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.x, 6.0);
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.y, 3.0);
  EXPECT_DOUBLE_EQ(grasp.grasp_pose.pose.position.z, 2.0);
}

TEST_F(GraspGeneratorTestFixture, testTransformGraspFrameRotation)
{
  moveit_msgs::msg::Grasp grasp;
  grasp.id = "test_grasp";
  grasp.grasp_pose.pose.position.x = 1.0;
  grasp.grasp_pose.pose.position.y = 0.0;
  grasp.grasp_pose.pose.position.z = 0.0;
  grasp.grasp_pose.pose.orientation.w = 1.0;
  grasp.grasp_pose.pose.orientation.x = 0.0;
  grasp.grasp_pose.pose.orientation.y = 0.0;
  grasp.grasp_pose.pose.orientation.z = 0.0;

  geometry_msgs::msg::PoseStamped world_to_object;
  world_to_object.header.frame_id = "world";
  world_to_object.pose.position.x = 0.0;
  world_to_object.pose.position.y = 0.0;
  world_to_object.pose.position.z = 0.0;
  // 90 degrees around Z axis
  world_to_object.pose.orientation.w = 0.707107;
  world_to_object.pose.orientation.x = 0.0;
  world_to_object.pose.orientation.y = 0.0;
  world_to_object.pose.orientation.z = 0.707107;

  node_->transfromGraspFrame(grasp, world_to_object);

  EXPECT_EQ(grasp.grasp_pose.header.frame_id, "world");
  EXPECT_NEAR(grasp.grasp_pose.pose.position.x, 0.0, 1e-5);
  EXPECT_NEAR(grasp.grasp_pose.pose.position.y, 1.0, 1e-5);
  EXPECT_NEAR(grasp.grasp_pose.pose.position.z, 0.0, 1e-5);
}

TEST_F(GraspGeneratorTestFixture, testParseYAMLJointTrajectories)
{
  std::string yaml_content = createValidGraspYAML();
  std::string filename = "test_joints.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  ASSERT_TRUE(grasps_opt.has_value());
  auto grasps = grasps_opt.value();

  ASSERT_EQ(grasps.size(), 2u);

  // Check grasp posture
  ASSERT_EQ(grasps[0].grasp_posture.joint_names.size(), 1u);
  EXPECT_EQ(grasps[0].grasp_posture.joint_names[0], "panda_finger_joint1");
  ASSERT_EQ(grasps[0].grasp_posture.points.size(), 1u);
  EXPECT_DOUBLE_EQ(grasps[0].grasp_posture.points[0].positions[0], 0.001);

  // Check pre-grasp posture
  ASSERT_EQ(grasps[0].pre_grasp_posture.joint_names.size(), 1u);
  EXPECT_EQ(grasps[0].pre_grasp_posture.joint_names[0], "panda_finger_joint1");
  ASSERT_EQ(grasps[0].pre_grasp_posture.points.size(), 1u);
  EXPECT_DOUBLE_EQ(grasps[0].pre_grasp_posture.points[0].positions[0], 0.04);
}

TEST_F(GraspGeneratorTestFixture, testParseMultipleGraspsWithQualities)
{
  std::string yaml_content =
    R"(
object_frame_link: /World/toy
gripper_frame_link: "/World/robotiq_2f_140"
grasps:
  high_quality:
    confidence: 0.99
    position: [0.0, 0.0, 0.0]
    orientation:
      w: 1.0
      xyz: [0.0, 0.0, 0.0]
    cspace_position:
      joint1: 0.5
    pregrasp_cspace_position:
      joint1: 0.0
  low_quality:
    confidence: 0.50
    position: [1.0, 1.0, 1.0]
    orientation:
      w: 1.0
      xyz: [0.0, 0.0, 0.0]
    cspace_position:
      joint1: 0.3
    pregrasp_cspace_position:
      joint1: 0.0
)";
  std::string filename = "quality_test.yaml";
  createTestYAMLFile(filename, yaml_content);

  auto grasps_opt = node_->parseYAML((test_dir_ / filename).string());

  ASSERT_TRUE(grasps_opt.has_value());
  auto grasps = grasps_opt.value();

  ASSERT_EQ(grasps.size(), 2u);

  // Find grasps by ID
  moveit_msgs::msg::Grasp high_quality_grasp, low_quality_grasp;
  for (const auto & grasp : grasps) {
    if (grasp.id == "high_quality") {
      high_quality_grasp = grasp;
    } else if (grasp.id == "low_quality") {
      low_quality_grasp = grasp;
    }
  }

  EXPECT_DOUBLE_EQ(high_quality_grasp.grasp_quality, 0.99);
  EXPECT_DOUBLE_EQ(low_quality_grasp.grasp_quality, 0.50);
}

int main(int argc, char ** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
