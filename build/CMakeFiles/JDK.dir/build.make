# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /snap/cmake/549/bin/cmake

# The command to remove a file.
RM = /snap/cmake/549/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Repository/Train-Simulator-2D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Repository/Train-Simulator-2D/build

# Include any dependencies generated for this target.
include CMakeFiles/JDK.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/JDK.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/JDK.dir/flags.make

CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o: CMakeFiles/JDK.dir/flags.make
CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o: ../src/JoseDK/number.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Repository/Train-Simulator-2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o -c /home/jose/Repository/Train-Simulator-2D/src/JoseDK/number.cpp

CMakeFiles/JDK.dir/src/JoseDK/number.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JDK.dir/src/JoseDK/number.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Repository/Train-Simulator-2D/src/JoseDK/number.cpp > CMakeFiles/JDK.dir/src/JoseDK/number.cpp.i

CMakeFiles/JDK.dir/src/JoseDK/number.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JDK.dir/src/JoseDK/number.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Repository/Train-Simulator-2D/src/JoseDK/number.cpp -o CMakeFiles/JDK.dir/src/JoseDK/number.cpp.s

CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o: CMakeFiles/JDK.dir/flags.make
CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o: ../src/JoseDK/text.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Repository/Train-Simulator-2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o -c /home/jose/Repository/Train-Simulator-2D/src/JoseDK/text.cpp

CMakeFiles/JDK.dir/src/JoseDK/text.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JDK.dir/src/JoseDK/text.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Repository/Train-Simulator-2D/src/JoseDK/text.cpp > CMakeFiles/JDK.dir/src/JoseDK/text.cpp.i

CMakeFiles/JDK.dir/src/JoseDK/text.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JDK.dir/src/JoseDK/text.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Repository/Train-Simulator-2D/src/JoseDK/text.cpp -o CMakeFiles/JDK.dir/src/JoseDK/text.cpp.s

CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o: CMakeFiles/JDK.dir/flags.make
CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o: ../src/JoseDK/throttle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Repository/Train-Simulator-2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o -c /home/jose/Repository/Train-Simulator-2D/src/JoseDK/throttle.cpp

CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Repository/Train-Simulator-2D/src/JoseDK/throttle.cpp > CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.i

CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Repository/Train-Simulator-2D/src/JoseDK/throttle.cpp -o CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.s

CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o: CMakeFiles/JDK.dir/flags.make
CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o: ../src/JoseDK/window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Repository/Train-Simulator-2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o -c /home/jose/Repository/Train-Simulator-2D/src/JoseDK/window.cpp

CMakeFiles/JDK.dir/src/JoseDK/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/JDK.dir/src/JoseDK/window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Repository/Train-Simulator-2D/src/JoseDK/window.cpp > CMakeFiles/JDK.dir/src/JoseDK/window.cpp.i

CMakeFiles/JDK.dir/src/JoseDK/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/JDK.dir/src/JoseDK/window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Repository/Train-Simulator-2D/src/JoseDK/window.cpp -o CMakeFiles/JDK.dir/src/JoseDK/window.cpp.s

# Object files for target JDK
JDK_OBJECTS = \
"CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o" \
"CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o" \
"CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o" \
"CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o"

# External object files for target JDK
JDK_EXTERNAL_OBJECTS =

libJDK.a: CMakeFiles/JDK.dir/src/JoseDK/number.cpp.o
libJDK.a: CMakeFiles/JDK.dir/src/JoseDK/text.cpp.o
libJDK.a: CMakeFiles/JDK.dir/src/JoseDK/throttle.cpp.o
libJDK.a: CMakeFiles/JDK.dir/src/JoseDK/window.cpp.o
libJDK.a: CMakeFiles/JDK.dir/build.make
libJDK.a: CMakeFiles/JDK.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Repository/Train-Simulator-2D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libJDK.a"
	$(CMAKE_COMMAND) -P CMakeFiles/JDK.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/JDK.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/JDK.dir/build: libJDK.a

.PHONY : CMakeFiles/JDK.dir/build

CMakeFiles/JDK.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/JDK.dir/cmake_clean.cmake
.PHONY : CMakeFiles/JDK.dir/clean

CMakeFiles/JDK.dir/depend:
	cd /home/jose/Repository/Train-Simulator-2D/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Repository/Train-Simulator-2D /home/jose/Repository/Train-Simulator-2D /home/jose/Repository/Train-Simulator-2D/build /home/jose/Repository/Train-Simulator-2D/build /home/jose/Repository/Train-Simulator-2D/build/CMakeFiles/JDK.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/JDK.dir/depend
