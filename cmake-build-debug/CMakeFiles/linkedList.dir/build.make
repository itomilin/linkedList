# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /home/dell/Downloads/clion-2020.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/dell/Downloads/clion-2020.3.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dell/CLionProjects/linkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dell/CLionProjects/linkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/linkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/linkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkedList.dir/flags.make

CMakeFiles/linkedList.dir/main.cpp.o: CMakeFiles/linkedList.dir/flags.make
CMakeFiles/linkedList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dell/CLionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkedList.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/linkedList.dir/main.cpp.o -c /home/dell/CLionProjects/linkedList/main.cpp

CMakeFiles/linkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkedList.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dell/CLionProjects/linkedList/main.cpp > CMakeFiles/linkedList.dir/main.cpp.i

CMakeFiles/linkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkedList.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dell/CLionProjects/linkedList/main.cpp -o CMakeFiles/linkedList.dir/main.cpp.s

# Object files for target linkedList
linkedList_OBJECTS = \
"CMakeFiles/linkedList.dir/main.cpp.o"

# External object files for target linkedList
linkedList_EXTERNAL_OBJECTS =

linkedList: CMakeFiles/linkedList.dir/main.cpp.o
linkedList: CMakeFiles/linkedList.dir/build.make
linkedList: CMakeFiles/linkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dell/CLionProjects/linkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable linkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkedList.dir/build: linkedList

.PHONY : CMakeFiles/linkedList.dir/build

CMakeFiles/linkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkedList.dir/clean

CMakeFiles/linkedList.dir/depend:
	cd /home/dell/CLionProjects/linkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dell/CLionProjects/linkedList /home/dell/CLionProjects/linkedList /home/dell/CLionProjects/linkedList/cmake-build-debug /home/dell/CLionProjects/linkedList/cmake-build-debug /home/dell/CLionProjects/linkedList/cmake-build-debug/CMakeFiles/linkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkedList.dir/depend

