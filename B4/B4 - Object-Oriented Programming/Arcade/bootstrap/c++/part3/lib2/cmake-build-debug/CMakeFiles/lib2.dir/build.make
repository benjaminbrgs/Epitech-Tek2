# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lib2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lib2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lib2.dir/flags.make

CMakeFiles/lib2.dir/library.cpp.o: CMakeFiles/lib2.dir/flags.make
CMakeFiles/lib2.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lib2.dir/library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lib2.dir/library.cpp.o -c "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/library.cpp"

CMakeFiles/lib2.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lib2.dir/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/library.cpp" > CMakeFiles/lib2.dir/library.cpp.i

CMakeFiles/lib2.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lib2.dir/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/library.cpp" -o CMakeFiles/lib2.dir/library.cpp.s

# Object files for target lib2
lib2_OBJECTS = \
"CMakeFiles/lib2.dir/library.cpp.o"

# External object files for target lib2
lib2_EXTERNAL_OBJECTS =

liblib2.so: CMakeFiles/lib2.dir/library.cpp.o
liblib2.so: CMakeFiles/lib2.dir/build.make
liblib2.so: CMakeFiles/lib2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library liblib2.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lib2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lib2.dir/build: liblib2.so

.PHONY : CMakeFiles/lib2.dir/build

CMakeFiles/lib2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lib2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lib2.dir/clean

CMakeFiles/lib2.dir/depend:
	cd "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2" "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2" "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Object-Oriented Programming/Arcade/bootstrap/c++/part3/lib2/cmake-build-debug/CMakeFiles/lib2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lib2.dir/depend

