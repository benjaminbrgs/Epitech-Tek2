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
CMAKE_SOURCE_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Bootstrap.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bootstrap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bootstrap.dir/flags.make

CMakeFiles/Bootstrap.dir/server/main.c.o: CMakeFiles/Bootstrap.dir/flags.make
CMakeFiles/Bootstrap.dir/server/main.c.o: ../server/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Bootstrap.dir/server/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bootstrap.dir/server/main.c.o   -c "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main.c"

CMakeFiles/Bootstrap.dir/server/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bootstrap.dir/server/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main.c" > CMakeFiles/Bootstrap.dir/server/main.c.i

CMakeFiles/Bootstrap.dir/server/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bootstrap.dir/server/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main.c" -o CMakeFiles/Bootstrap.dir/server/main.c.s

CMakeFiles/Bootstrap.dir/server/main2.c.o: CMakeFiles/Bootstrap.dir/flags.make
CMakeFiles/Bootstrap.dir/server/main2.c.o: ../server/main2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Bootstrap.dir/server/main2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bootstrap.dir/server/main2.c.o   -c "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main2.c"

CMakeFiles/Bootstrap.dir/server/main2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bootstrap.dir/server/main2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main2.c" > CMakeFiles/Bootstrap.dir/server/main2.c.i

CMakeFiles/Bootstrap.dir/server/main2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bootstrap.dir/server/main2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/server/main2.c" -o CMakeFiles/Bootstrap.dir/server/main2.c.s

CMakeFiles/Bootstrap.dir/client/main.c.o: CMakeFiles/Bootstrap.dir/flags.make
CMakeFiles/Bootstrap.dir/client/main.c.o: ../client/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Bootstrap.dir/client/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Bootstrap.dir/client/main.c.o   -c "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/client/main.c"

CMakeFiles/Bootstrap.dir/client/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Bootstrap.dir/client/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/client/main.c" > CMakeFiles/Bootstrap.dir/client/main.c.i

CMakeFiles/Bootstrap.dir/client/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Bootstrap.dir/client/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/client/main.c" -o CMakeFiles/Bootstrap.dir/client/main.c.s

# Object files for target Bootstrap
Bootstrap_OBJECTS = \
"CMakeFiles/Bootstrap.dir/server/main.c.o" \
"CMakeFiles/Bootstrap.dir/server/main2.c.o" \
"CMakeFiles/Bootstrap.dir/client/main.c.o"

# External object files for target Bootstrap
Bootstrap_EXTERNAL_OBJECTS =

Bootstrap: CMakeFiles/Bootstrap.dir/server/main.c.o
Bootstrap: CMakeFiles/Bootstrap.dir/server/main2.c.o
Bootstrap: CMakeFiles/Bootstrap.dir/client/main.c.o
Bootstrap: CMakeFiles/Bootstrap.dir/build.make
Bootstrap: CMakeFiles/Bootstrap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable Bootstrap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bootstrap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bootstrap.dir/build: Bootstrap

.PHONY : CMakeFiles/Bootstrap.dir/build

CMakeFiles/Bootstrap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bootstrap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bootstrap.dir/clean

CMakeFiles/Bootstrap.dir/depend:
	cd "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap" "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap" "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug" "/home/bourgeois/Epitech/delivery/B4/B4 - Network Programming/My_FTP/Bootstrap/cmake-build-debug/CMakeFiles/Bootstrap.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Bootstrap.dir/depend

