# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robot/dd2419_ws/build/crazyflie_gazebo

# Utility rule file for cfHandler_sf.

# Include the progress variables for this target.
include CMakeFiles/cfHandler_sf.dir/progress.make

CMakeFiles/cfHandler_sf: /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf


/home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf: /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/cfHandler_base.xacro
/home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf: /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/component_snippets.xacro
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/robot/dd2419_ws/build/crazyflie_gazebo/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf"
	cd /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo && rm -f /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf
	cd /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo && /usr/bin/python /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/scripts/xacro.py -o /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/cfHandler_base.urdf /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/cfHandler_base.xacro nbQuads:=1 cfPrefix:=cf enable_parameters:=true enable_logging:=true udpPort:=19950 firstIndex:=1 rotors_description_dir:=/home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description use_ros_time:=true enable_logging_battery:=false enable_logging_pressure:=false enable_logging_temperature:=false enable_logging_imu:=true enable_logging_packets:=false enable_logging_magnetic_field:=false
	cd /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo && gz sdf -p /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/cfHandler_base.urdf >> /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf
	cd /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo && rm -f /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/rotors_description/urdf/cfHandler_base.urdf

cfHandler_sf: CMakeFiles/cfHandler_sf
cfHandler_sf: /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo/models/cfHandler/cfHandler.sdf
cfHandler_sf: CMakeFiles/cfHandler_sf.dir/build.make

.PHONY : cfHandler_sf

# Rule to build all files generated by this target.
CMakeFiles/cfHandler_sf.dir/build: cfHandler_sf

.PHONY : CMakeFiles/cfHandler_sf.dir/build

CMakeFiles/cfHandler_sf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cfHandler_sf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cfHandler_sf.dir/clean

CMakeFiles/cfHandler_sf.dir/depend:
	cd /home/robot/dd2419_ws/build/crazyflie_gazebo && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo /home/robot/dd2419_ws/src/course_packages/sim_cf/crazyflie_gazebo /home/robot/dd2419_ws/build/crazyflie_gazebo /home/robot/dd2419_ws/build/crazyflie_gazebo /home/robot/dd2419_ws/build/crazyflie_gazebo/CMakeFiles/cfHandler_sf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cfHandler_sf.dir/depend

