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
CMAKE_SOURCE_DIR = D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proj04CompressingSoftware.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Proj04CompressingSoftware.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proj04CompressingSoftware.dir/flags.make

CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj: CMakeFiles/Proj04CompressingSoftware.dir/flags.make
CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj: CMakeFiles/Proj04CompressingSoftware.dir/includes_CXX.rsp
CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj"
	D:\CODE\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Proj04CompressingSoftware.dir\main.cpp.obj -c D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\main.cpp

CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.i"
	D:\CODE\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\main.cpp > CMakeFiles\Proj04CompressingSoftware.dir\main.cpp.i

CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.s"
	D:\CODE\Qt\Tools\mingw810_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\main.cpp -o CMakeFiles\Proj04CompressingSoftware.dir\main.cpp.s

# Object files for target Proj04CompressingSoftware
Proj04CompressingSoftware_OBJECTS = \
"CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj"

# External object files for target Proj04CompressingSoftware
Proj04CompressingSoftware_EXTERNAL_OBJECTS =

Proj04CompressingSoftware.exe: CMakeFiles/Proj04CompressingSoftware.dir/main.cpp.obj
Proj04CompressingSoftware.exe: CMakeFiles/Proj04CompressingSoftware.dir/build.make
Proj04CompressingSoftware.exe: CMakeFiles/Proj04CompressingSoftware.dir/linklibs.rsp
Proj04CompressingSoftware.exe: CMakeFiles/Proj04CompressingSoftware.dir/objects1.rsp
Proj04CompressingSoftware.exe: CMakeFiles/Proj04CompressingSoftware.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Proj04CompressingSoftware.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Proj04CompressingSoftware.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proj04CompressingSoftware.dir/build: Proj04CompressingSoftware.exe
.PHONY : CMakeFiles/Proj04CompressingSoftware.dir/build

CMakeFiles/Proj04CompressingSoftware.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Proj04CompressingSoftware.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Proj04CompressingSoftware.dir/clean

CMakeFiles/Proj04CompressingSoftware.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug D:\CodeWorkplace\C++_By_Clion\Proj04CompressingSoftware\Proj04CompressingSoftware\cmake-build-debug\CMakeFiles\Proj04CompressingSoftware.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proj04CompressingSoftware.dir/depend

