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
CMAKE_COMMAND = "D:\CODE\JetBrains\Clion\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CODE\JetBrains\Clion\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm\cmake-build-debug

# Utility rule file for Calc_algorithm_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/Calc_algorithm_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Calc_algorithm_autogen.dir/progress.make

CMakeFiles/Calc_algorithm_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target Calc_algorithm"
	"D:\CODE\JetBrains\Clion\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E cmake_autogen D:/CodeWorkplace/C++_By_Clion/Proj02Calculator/Calc_algorithm/cmake-build-debug/CMakeFiles/Calc_algorithm_autogen.dir/AutogenInfo.json Debug

Calc_algorithm_autogen: CMakeFiles/Calc_algorithm_autogen
Calc_algorithm_autogen: CMakeFiles/Calc_algorithm_autogen.dir/build.make
.PHONY : Calc_algorithm_autogen

# Rule to build all files generated by this target.
CMakeFiles/Calc_algorithm_autogen.dir/build: Calc_algorithm_autogen
.PHONY : CMakeFiles/Calc_algorithm_autogen.dir/build

CMakeFiles/Calc_algorithm_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Calc_algorithm_autogen.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Calc_algorithm_autogen.dir/clean

CMakeFiles/Calc_algorithm_autogen.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm\cmake-build-debug D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm\cmake-build-debug D:\CodeWorkplace\C++_By_Clion\Proj02Calculator\Calc_algorithm\cmake-build-debug\CMakeFiles\Calc_algorithm_autogen.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Calc_algorithm_autogen.dir/depend

