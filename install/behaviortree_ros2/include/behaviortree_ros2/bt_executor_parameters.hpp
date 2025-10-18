// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace bt_server {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string action_name = "bt_execution";
        int64_t tick_frequency = 100;
        int64_t groot2_port = 1667;
        std::vector<std::string> plugins = {};
        int64_t ros_plugins_timeout = 1000;
        std::vector<std::string> behavior_trees = {};
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        int64_t tick_frequency = 100;
        int64_t groot2_port = 1667;
        int64_t ros_plugins_timeout = 1000;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("bt_server"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.tick_frequency = params.tick_frequency;
      output.groot2_port = params.groot2_port;
      output.ros_plugins_timeout = params.ros_plugins_timeout;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "action_name")) {
            updated_params.action_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tick_frequency")) {
            if(auto validation_result = bounds<int64_t>(param, 1, 1000);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.tick_frequency = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "groot2_port")) {
            if(auto validation_result = bounds<int64_t>(param, 1, 49151);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.groot2_port = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "plugins")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.plugins = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ros_plugins_timeout")) {
            if(auto validation_result = bounds<int64_t>(param, 1, 10000);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.ros_plugins_timeout = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "behavior_trees")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.behavior_trees = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "action_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The name the Action Server takes requests from";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.action_name);
          parameters_interface_->declare_parameter(prefix_ + "action_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tick_frequency")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Frequency in Hz to tick() the Behavior tree at";
          descriptor.read_only = true;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = 1000;
          auto parameter = to_parameter_value(updated_params.tick_frequency);
          parameters_interface_->declare_parameter(prefix_ + "tick_frequency", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "groot2_port")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Server port value to publish Groot2 messages on";
          descriptor.read_only = true;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = 49151;
          auto parameter = to_parameter_value(updated_params.groot2_port);
          parameters_interface_->declare_parameter(prefix_ + "groot2_port", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "plugins")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "List of 'package_name/subfolder' containing BehaviorTree plugins to load into the factory";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.plugins);
          parameters_interface_->declare_parameter(prefix_ + "plugins", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ros_plugins_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timeout (ms) used in BT::RosNodeParams";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1;
          descriptor.integer_range.at(0).to_value = 10000;
          auto parameter = to_parameter_value(updated_params.ros_plugins_timeout);
          parameters_interface_->declare_parameter(prefix_ + "ros_plugins_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "behavior_trees")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "List of 'package_name/subfolder' containing SubTrees to load into the BehaviorTree factory";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.behavior_trees);
          parameters_interface_->declare_parameter(prefix_ + "behavior_trees", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "action_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.action_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "tick_frequency");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<int64_t>(param, 1, 1000);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'tick_frequency': {}", validation_result.error()));
      }
      updated_params.tick_frequency = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "groot2_port");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<int64_t>(param, 1, 49151);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'groot2_port': {}", validation_result.error()));
      }
      updated_params.groot2_port = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "plugins");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'plugins': {}", validation_result.error()));
      }
      updated_params.plugins = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "ros_plugins_timeout");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<int64_t>(param, 1, 10000);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'ros_plugins_timeout': {}", validation_result.error()));
      }
      updated_params.ros_plugins_timeout = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "behavior_trees");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'behavior_trees': {}", validation_result.error()));
      }
      updated_params.behavior_trees = param.as_string_array();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace bt_server
