from setuptools import find_packages
from setuptools import setup

setup(
    name='btcpp_ros2_interfaces',
    version='0.2.0',
    packages=find_packages(
        include=('btcpp_ros2_interfaces', 'btcpp_ros2_interfaces.*')),
)
