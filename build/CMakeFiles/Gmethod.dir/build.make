# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/makus/code/globaltk/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/makus/code/globaltk/build

# Include any dependencies generated for this target.
include CMakeFiles/Gmethod.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Gmethod.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Gmethod.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Gmethod.dir/flags.make

CMakeFiles/Gmethod.dir/Gmethod.cc.o: CMakeFiles/Gmethod.dir/flags.make
CMakeFiles/Gmethod.dir/Gmethod.cc.o: /home/makus/code/globaltk/src/Gmethod.cc
CMakeFiles/Gmethod.dir/Gmethod.cc.o: CMakeFiles/Gmethod.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/makus/code/globaltk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Gmethod.dir/Gmethod.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Gmethod.dir/Gmethod.cc.o -MF CMakeFiles/Gmethod.dir/Gmethod.cc.o.d -o CMakeFiles/Gmethod.dir/Gmethod.cc.o -c /home/makus/code/globaltk/src/Gmethod.cc

CMakeFiles/Gmethod.dir/Gmethod.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Gmethod.dir/Gmethod.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/makus/code/globaltk/src/Gmethod.cc > CMakeFiles/Gmethod.dir/Gmethod.cc.i

CMakeFiles/Gmethod.dir/Gmethod.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Gmethod.dir/Gmethod.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/makus/code/globaltk/src/Gmethod.cc -o CMakeFiles/Gmethod.dir/Gmethod.cc.s

# Object files for target Gmethod
Gmethod_OBJECTS = \
"CMakeFiles/Gmethod.dir/Gmethod.cc.o"

# External object files for target Gmethod
Gmethod_EXTERNAL_OBJECTS =

libGmethod.a: CMakeFiles/Gmethod.dir/Gmethod.cc.o
libGmethod.a: CMakeFiles/Gmethod.dir/build.make
libGmethod.a: CMakeFiles/Gmethod.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/makus/code/globaltk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libGmethod.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Gmethod.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Gmethod.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Gmethod.dir/build: libGmethod.a
.PHONY : CMakeFiles/Gmethod.dir/build

CMakeFiles/Gmethod.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Gmethod.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Gmethod.dir/clean

CMakeFiles/Gmethod.dir/depend:
	cd /home/makus/code/globaltk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/makus/code/globaltk/src /home/makus/code/globaltk/src /home/makus/code/globaltk/build /home/makus/code/globaltk/build /home/makus/code/globaltk/build/CMakeFiles/Gmethod.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Gmethod.dir/depend

