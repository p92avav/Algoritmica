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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build

# Include any dependencies generated for this target.
include CMakeFiles/programa.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/programa.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/programa.exe.dir/flags.make

CMakeFiles/programa.exe.dir/main.cpp.o: CMakeFiles/programa.exe.dir/flags.make
CMakeFiles/programa.exe.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/programa.exe.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/programa.exe.dir/main.cpp.o -c /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/main.cpp

CMakeFiles/programa.exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/programa.exe.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/main.cpp > CMakeFiles/programa.exe.dir/main.cpp.i

CMakeFiles/programa.exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/programa.exe.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/main.cpp -o CMakeFiles/programa.exe.dir/main.cpp.s

CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o: CMakeFiles/programa.exe.dir/flags.make
CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o: ../funcionesObligatorias.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o -c /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/funcionesObligatorias.cpp

CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/funcionesObligatorias.cpp > CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.i

CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/funcionesObligatorias.cpp -o CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.s

# Object files for target programa.exe
programa_exe_OBJECTS = \
"CMakeFiles/programa.exe.dir/main.cpp.o" \
"CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o"

# External object files for target programa.exe
programa_exe_EXTERNAL_OBJECTS =

programa.exe: CMakeFiles/programa.exe.dir/main.cpp.o
programa.exe: CMakeFiles/programa.exe.dir/funcionesObligatorias.cpp.o
programa.exe: CMakeFiles/programa.exe.dir/build.make
programa.exe: CMakeFiles/programa.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable programa.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/programa.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/programa.exe.dir/build: programa.exe

.PHONY : CMakeFiles/programa.exe.dir/build

CMakeFiles/programa.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/programa.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/programa.exe.dir/clean

CMakeFiles/programa.exe.dir/depend:
	cd /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5 /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5 /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build /mnt/d/Descargas/Algoritmica-main/Algoritmica-main/Practica5/build/CMakeFiles/programa.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/programa.exe.dir/depend
