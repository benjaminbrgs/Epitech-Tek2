# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/111/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/111/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cross_platform.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cross_platform.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cross_platform.dir/flags.make

CMakeFiles/cross_platform.dir/src/main.cpp.o: CMakeFiles/cross_platform.dir/flags.make
CMakeFiles/cross_platform.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cross_platform.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cross_platform.dir/src/main.cpp.o -c "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/src/main.cpp"

CMakeFiles/cross_platform.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cross_platform.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/src/main.cpp" > CMakeFiles/cross_platform.dir/src/main.cpp.i

CMakeFiles/cross_platform.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cross_platform.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/src/main.cpp" -o CMakeFiles/cross_platform.dir/src/main.cpp.s

# Object files for target cross_platform
cross_platform_OBJECTS = \
"CMakeFiles/cross_platform.dir/src/main.cpp.o"

# External object files for target cross_platform
cross_platform_EXTERNAL_OBJECTS =

cross_platform: CMakeFiles/cross_platform.dir/src/main.cpp.o
cross_platform: CMakeFiles/cross_platform.dir/build.make
cross_platform: CMakeFiles/cross_platform.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cross_platform"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cross_platform.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cross_platform.dir/build: cross_platform

.PHONY : CMakeFiles/cross_platform.dir/build

CMakeFiles/cross_platform.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cross_platform.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cross_platform.dir/clean

CMakeFiles/cross_platform.dir/depend:
	cd "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform" "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform" "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Year-End-Project - Indie Studio/bootstrap/cross_platform/cmake-build-debug/CMakeFiles/cross_platform.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cross_platform.dir/depend

