# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "D:\CLion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Game Project\GameProject\Game"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Game Project\GameProject\Game\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Game.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Game.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Game.dir/flags.make

CMakeFiles/Game.dir/src/main.cpp.obj: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/main.cpp.obj: CMakeFiles/Game.dir/includes_CXX.rsp
CMakeFiles/Game.dir/src/main.cpp.obj: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Game.dir/src/main.cpp.obj"
	D:\CLion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game.dir\src\main.cpp.obj -c "D:\Game Project\GameProject\Game\src\main.cpp"

CMakeFiles/Game.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/main.cpp.i"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Game Project\GameProject\Game\src\main.cpp" > CMakeFiles\Game.dir\src\main.cpp.i

CMakeFiles/Game.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/main.cpp.s"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Game Project\GameProject\Game\src\main.cpp" -o CMakeFiles\Game.dir\src\main.cpp.s

CMakeFiles/Game.dir/src/Graphics.cpp.obj: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Graphics.cpp.obj: CMakeFiles/Game.dir/includes_CXX.rsp
CMakeFiles/Game.dir/src/Graphics.cpp.obj: ../src/Graphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Game.dir/src/Graphics.cpp.obj"
	D:\CLion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game.dir\src\Graphics.cpp.obj -c "D:\Game Project\GameProject\Game\src\Graphics.cpp"

CMakeFiles/Game.dir/src/Graphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Graphics.cpp.i"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Game Project\GameProject\Game\src\Graphics.cpp" > CMakeFiles\Game.dir\src\Graphics.cpp.i

CMakeFiles/Game.dir/src/Graphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Graphics.cpp.s"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Game Project\GameProject\Game\src\Graphics.cpp" -o CMakeFiles\Game.dir\src\Graphics.cpp.s

CMakeFiles/Game.dir/src/Game.cpp.obj: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Game.cpp.obj: CMakeFiles/Game.dir/includes_CXX.rsp
CMakeFiles/Game.dir/src/Game.cpp.obj: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Game.dir/src/Game.cpp.obj"
	D:\CLion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game.dir\src\Game.cpp.obj -c "D:\Game Project\GameProject\Game\src\Game.cpp"

CMakeFiles/Game.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Game.cpp.i"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Game Project\GameProject\Game\src\Game.cpp" > CMakeFiles\Game.dir\src\Game.cpp.i

CMakeFiles/Game.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Game.cpp.s"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Game Project\GameProject\Game\src\Game.cpp" -o CMakeFiles\Game.dir\src\Game.cpp.s

CMakeFiles/Game.dir/src/Level.cpp.obj: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Level.cpp.obj: CMakeFiles/Game.dir/includes_CXX.rsp
CMakeFiles/Game.dir/src/Level.cpp.obj: ../src/Level.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Game.dir/src/Level.cpp.obj"
	D:\CLion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game.dir\src\Level.cpp.obj -c "D:\Game Project\GameProject\Game\src\Level.cpp"

CMakeFiles/Game.dir/src/Level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Level.cpp.i"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Game Project\GameProject\Game\src\Level.cpp" > CMakeFiles\Game.dir\src\Level.cpp.i

CMakeFiles/Game.dir/src/Level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Level.cpp.s"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Game Project\GameProject\Game\src\Level.cpp" -o CMakeFiles\Game.dir\src\Level.cpp.s

CMakeFiles/Game.dir/src/Sprite.cpp.obj: CMakeFiles/Game.dir/flags.make
CMakeFiles/Game.dir/src/Sprite.cpp.obj: CMakeFiles/Game.dir/includes_CXX.rsp
CMakeFiles/Game.dir/src/Sprite.cpp.obj: ../src/Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Game.dir/src/Sprite.cpp.obj"
	D:\CLion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Game.dir\src\Sprite.cpp.obj -c "D:\Game Project\GameProject\Game\src\Sprite.cpp"

CMakeFiles/Game.dir/src/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Game.dir/src/Sprite.cpp.i"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Game Project\GameProject\Game\src\Sprite.cpp" > CMakeFiles\Game.dir\src\Sprite.cpp.i

CMakeFiles/Game.dir/src/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Game.dir/src/Sprite.cpp.s"
	D:\CLion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Game Project\GameProject\Game\src\Sprite.cpp" -o CMakeFiles\Game.dir\src\Sprite.cpp.s

# Object files for target Game
Game_OBJECTS = \
"CMakeFiles/Game.dir/src/main.cpp.obj" \
"CMakeFiles/Game.dir/src/Graphics.cpp.obj" \
"CMakeFiles/Game.dir/src/Game.cpp.obj" \
"CMakeFiles/Game.dir/src/Level.cpp.obj" \
"CMakeFiles/Game.dir/src/Sprite.cpp.obj"

# External object files for target Game
Game_EXTERNAL_OBJECTS =

Game.exe: CMakeFiles/Game.dir/src/main.cpp.obj
Game.exe: CMakeFiles/Game.dir/src/Graphics.cpp.obj
Game.exe: CMakeFiles/Game.dir/src/Game.cpp.obj
Game.exe: CMakeFiles/Game.dir/src/Level.cpp.obj
Game.exe: CMakeFiles/Game.dir/src/Sprite.cpp.obj
Game.exe: CMakeFiles/Game.dir/build.make
Game.exe: SDL2.dll
Game.exe: SDL2_image.dll
Game.exe: CMakeFiles/Game.dir/linklibs.rsp
Game.exe: CMakeFiles/Game.dir/objects1.rsp
Game.exe: CMakeFiles/Game.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Game.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Game.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Game.dir/build: Game.exe

.PHONY : CMakeFiles/Game.dir/build

CMakeFiles/Game.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Game.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Game.dir/clean

CMakeFiles/Game.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Game Project\GameProject\Game" "D:\Game Project\GameProject\Game" "D:\Game Project\GameProject\Game\cmake-build-debug" "D:\Game Project\GameProject\Game\cmake-build-debug" "D:\Game Project\GameProject\Game\cmake-build-debug\CMakeFiles\Game.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Game.dir/depend

