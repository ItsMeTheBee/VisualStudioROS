# VisualStudioROS
This projects runs ROS2 (Foxy) in Visual Studio 2019 - Tested as dll and exe

# Installation

Follow the instructions on https://index.ros.org/doc/ros2/Installation/Foxy/Windows-Development-Setup/ or for a faster installation: https://docs.ros.org/en/foxy/Installation/Windows-Install-Binary.html#alternative-ros-2-build-installation-from-aka-ms-ros.

Then create an environment variable called "Ros" which points to your ROS2 install directory (in my case C:\dev\ros2_foxy) OR manually change these values:
 
- C/C++ > Additional Include Directories = [PATH_TO_ROS]\include
- Linker > Additional Library Directories = [PATH_TO_ROS]\Lib

Additionally you need to add [PATH_TO_ROS]\install\bin to your Path environment variable

# Compiling in anything other than Realease x64

## Other architecture: 
- Build ROS2 with the desired architecture
- Set the "Ros" environment variable to you custom build
- Set the architecture in Visual Studio
- It should compile now

## Debug mode
- Build ROS2 in Debug mode with flags to build the PDB (otherwise you won't be able to debug into ROS2): ``` --cmake-args -DCMAKE_BUILD_TYPE=RelWithDebInfo ``` according to https://github.com/ms-iot/ROSOnWindows/issues/310
- Set the "Ros" environment variable to you custom build
- Set the architecture in Visual Studio
- It should compile now

# Linker errors

This could be due to using another version or another way of installing ROS2.  
Go to the project properties > Linker > Input > Additional Dependencies and change the .lib files with the ones in the Lib directory of your ROS2 installation - if the list is too long you can drop the ones you don't need (such as gazebo libs)
