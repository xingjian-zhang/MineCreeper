# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\10907\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6603.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\10907\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6603.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\10907\CLionProjects\MineSweeper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MineSweeper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MineSweeper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MineSweeper.dir/flags.make

CMakeFiles/MineSweeper.dir/main.cpp.obj: CMakeFiles/MineSweeper.dir/flags.make
CMakeFiles/MineSweeper.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MineSweeper.dir/main.cpp.obj"
	D:\x86_64-8.1\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MineSweeper.dir\main.cpp.obj -c C:\Users\10907\CLionProjects\MineSweeper\main.cpp

CMakeFiles/MineSweeper.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MineSweeper.dir/main.cpp.i"
	D:\x86_64-8.1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\10907\CLionProjects\MineSweeper\main.cpp > CMakeFiles\MineSweeper.dir\main.cpp.i

CMakeFiles/MineSweeper.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MineSweeper.dir/main.cpp.s"
	D:\x86_64-8.1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\10907\CLionProjects\MineSweeper\main.cpp -o CMakeFiles\MineSweeper.dir\main.cpp.s

CMakeFiles/MineSweeper.dir/coordinate.cpp.obj: CMakeFiles/MineSweeper.dir/flags.make
CMakeFiles/MineSweeper.dir/coordinate.cpp.obj: coordinate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MineSweeper.dir/coordinate.cpp.obj"
	D:\x86_64-8.1\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MineSweeper.dir\coordinate.cpp.obj -c C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\coordinate.cpp

CMakeFiles/MineSweeper.dir/coordinate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MineSweeper.dir/coordinate.cpp.i"
	D:\x86_64-8.1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\coordinate.cpp > CMakeFiles\MineSweeper.dir\coordinate.cpp.i

CMakeFiles/MineSweeper.dir/coordinate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MineSweeper.dir/coordinate.cpp.s"
	D:\x86_64-8.1\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\coordinate.cpp -o CMakeFiles\MineSweeper.dir\coordinate.cpp.s

# Object files for target MineSweeper
MineSweeper_OBJECTS = \
"CMakeFiles/MineSweeper.dir/main.cpp.obj" \
"CMakeFiles/MineSweeper.dir/coordinate.cpp.obj"

# External object files for target MineSweeper
MineSweeper_EXTERNAL_OBJECTS =

MineSweeper.exe: CMakeFiles/MineSweeper.dir/main.cpp.obj
MineSweeper.exe: CMakeFiles/MineSweeper.dir/coordinate.cpp.obj
MineSweeper.exe: CMakeFiles/MineSweeper.dir/build.make
MineSweeper.exe: CMakeFiles/MineSweeper.dir/linklibs.rsp
MineSweeper.exe: CMakeFiles/MineSweeper.dir/objects1.rsp
MineSweeper.exe: CMakeFiles/MineSweeper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MineSweeper.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MineSweeper.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MineSweeper.dir/build: MineSweeper.exe

.PHONY : CMakeFiles/MineSweeper.dir/build

CMakeFiles/MineSweeper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MineSweeper.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MineSweeper.dir/clean

CMakeFiles/MineSweeper.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\10907\CLionProjects\MineSweeper C:\Users\10907\CLionProjects\MineSweeper C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug C:\Users\10907\CLionProjects\MineSweeper\cmake-build-debug\CMakeFiles\MineSweeper.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MineSweeper.dir/depend

