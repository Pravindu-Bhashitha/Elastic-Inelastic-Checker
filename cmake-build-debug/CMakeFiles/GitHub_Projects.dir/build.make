# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\CRepeat\GitHub Projects"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\CRepeat\GitHub Projects\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/GitHub_Projects.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/GitHub_Projects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GitHub_Projects.dir/flags.make

CMakeFiles/GitHub_Projects.dir/main.c.obj: CMakeFiles/GitHub_Projects.dir/flags.make
CMakeFiles/GitHub_Projects.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\CRepeat\GitHub Projects\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GitHub_Projects.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\GitHub_Projects.dir\main.c.obj -c "D:\CRepeat\GitHub Projects\main.c"

CMakeFiles/GitHub_Projects.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/GitHub_Projects.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\CRepeat\GitHub Projects\main.c" > CMakeFiles\GitHub_Projects.dir\main.c.i

CMakeFiles/GitHub_Projects.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/GitHub_Projects.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\CRepeat\GitHub Projects\main.c" -o CMakeFiles\GitHub_Projects.dir\main.c.s

# Object files for target GitHub_Projects
GitHub_Projects_OBJECTS = \
"CMakeFiles/GitHub_Projects.dir/main.c.obj"

# External object files for target GitHub_Projects
GitHub_Projects_EXTERNAL_OBJECTS =

GitHub_Projects.exe: CMakeFiles/GitHub_Projects.dir/main.c.obj
GitHub_Projects.exe: CMakeFiles/GitHub_Projects.dir/build.make
GitHub_Projects.exe: CMakeFiles/GitHub_Projects.dir/linklibs.rsp
GitHub_Projects.exe: CMakeFiles/GitHub_Projects.dir/objects1.rsp
GitHub_Projects.exe: CMakeFiles/GitHub_Projects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\CRepeat\GitHub Projects\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable GitHub_Projects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GitHub_Projects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GitHub_Projects.dir/build: GitHub_Projects.exe
.PHONY : CMakeFiles/GitHub_Projects.dir/build

CMakeFiles/GitHub_Projects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GitHub_Projects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GitHub_Projects.dir/clean

CMakeFiles/GitHub_Projects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\CRepeat\GitHub Projects" "D:\CRepeat\GitHub Projects" "D:\CRepeat\GitHub Projects\cmake-build-debug" "D:\CRepeat\GitHub Projects\cmake-build-debug" "D:\CRepeat\GitHub Projects\cmake-build-debug\CMakeFiles\GitHub_Projects.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/GitHub_Projects.dir/depend

