# VisualStudioROS
Trying to run ROS inside Visual Studio

# Installation

Follow the instructions on https://index.ros.org/doc/ros2/Installation/Foxy/Windows-Development-Setup/.
I created the workspace under C:\dev\ros2_foxy so if you choose to use a different path you will probably need to change:
 
- C/C++ > Additional Include Directories = [PATH_TO_ROS]\include
- Linker > Additional Library Directories = [PATH_TO_ROS]\Lib

Additionally you need to add [PATH_TO_ROS]\install\bin to your environment variable path
