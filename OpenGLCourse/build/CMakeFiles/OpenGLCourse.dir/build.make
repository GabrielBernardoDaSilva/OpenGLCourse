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
CMAKE_SOURCE_DIR = /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenGLCourse.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGLCourse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGLCourse.dir/flags.make

CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o: ../src/Camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Camera.cpp

CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Camera.cpp > CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Camera.cpp -o CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.s

CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o: ../src/DirectionalLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/DirectionalLight.cpp

CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/DirectionalLight.cpp > CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.i

CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/DirectionalLight.cpp -o CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o: ../src/Light.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Light.cpp

CMakeFiles/OpenGLCourse.dir/src/Light.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Light.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Light.cpp > CMakeFiles/OpenGLCourse.dir/src/Light.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Light.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Light.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Light.cpp -o CMakeFiles/OpenGLCourse.dir/src/Light.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o: ../src/Material.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Material.cpp

CMakeFiles/OpenGLCourse.dir/src/Material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Material.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Material.cpp > CMakeFiles/OpenGLCourse.dir/src/Material.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Material.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Material.cpp -o CMakeFiles/OpenGLCourse.dir/src/Material.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o: ../src/Mesh.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Mesh.cpp

CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Mesh.cpp > CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Mesh.cpp -o CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.s

CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o: ../src/PointLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/PointLight.cpp

CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/PointLight.cpp > CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.i

CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/PointLight.cpp -o CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o: ../src/Shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Shader.cpp

CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Shader.cpp > CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Shader.cpp -o CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.s

CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o: ../src/SpotLight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/SpotLight.cpp

CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/SpotLight.cpp > CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.i

CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/SpotLight.cpp -o CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o: ../src/Texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Texture.cpp

CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Texture.cpp > CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Texture.cpp -o CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.s

CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o: ../src/Window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Window.cpp

CMakeFiles/OpenGLCourse.dir/src/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/Window.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Window.cpp > CMakeFiles/OpenGLCourse.dir/src/Window.cpp.i

CMakeFiles/OpenGLCourse.dir/src/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/Window.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/Window.cpp -o CMakeFiles/OpenGLCourse.dir/src/Window.cpp.s

CMakeFiles/OpenGLCourse.dir/src/main.cpp.o: CMakeFiles/OpenGLCourse.dir/flags.make
CMakeFiles/OpenGLCourse.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/OpenGLCourse.dir/src/main.cpp.o"
	/bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLCourse.dir/src/main.cpp.o -c /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/main.cpp

CMakeFiles/OpenGLCourse.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLCourse.dir/src/main.cpp.i"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/main.cpp > CMakeFiles/OpenGLCourse.dir/src/main.cpp.i

CMakeFiles/OpenGLCourse.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLCourse.dir/src/main.cpp.s"
	/bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/src/main.cpp -o CMakeFiles/OpenGLCourse.dir/src/main.cpp.s

# Object files for target OpenGLCourse
OpenGLCourse_OBJECTS = \
"CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o" \
"CMakeFiles/OpenGLCourse.dir/src/main.cpp.o"

# External object files for target OpenGLCourse
OpenGLCourse_EXTERNAL_OBJECTS =

OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Camera.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/DirectionalLight.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Light.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Material.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Mesh.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/PointLight.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Shader.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/SpotLight.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Texture.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/Window.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/src/main.cpp.o
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/build.make
OpenGLCourse: /usr/lib/x86_64-linux-gnu/libGLEW.so
OpenGLCourse: /usr/lib/x86_64-linux-gnu/libGL.so
OpenGLCourse: /usr/lib/x86_64-linux-gnu/libGLU.so
OpenGLCourse: CMakeFiles/OpenGLCourse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable OpenGLCourse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLCourse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGLCourse.dir/build: OpenGLCourse

.PHONY : CMakeFiles/OpenGLCourse.dir/build

CMakeFiles/OpenGLCourse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLCourse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLCourse.dir/clean

CMakeFiles/OpenGLCourse.dir/depend:
	cd /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build /home/gabriel/programs/cpp/OpenGLCourse/OpenGLCourse/build/CMakeFiles/OpenGLCourse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLCourse.dir/depend

