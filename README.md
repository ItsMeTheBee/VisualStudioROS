# VisualStudioROS
This projects runs ROS2 (Foxy) in Visual Studio 2019 - Tested as dll and exe

# Installation

Follow the instructions on https://index.ros.org/doc/ros2/Installation/Foxy/Windows-Development-Setup/ or for a faster installation: https://docs.ros.org/en/foxy/Installation/Windows-Install-Binary.html#alternative-ros-2-build-installation-from-aka-ms-ros.

Then create an environment variable called "Ros" which points to your ROS2 install directory (in my case C:\dev\ros2_foxy) OR manually change these values:
 
- C/C++ > Additional Include Directories = [PATH_TO_ROS]\include
- Linker > Additional Library Directories = [PATH_TO_ROS]\Lib

Additionally you need to add [PATH_TO_ROS]\install\bin to your Path environment variable


