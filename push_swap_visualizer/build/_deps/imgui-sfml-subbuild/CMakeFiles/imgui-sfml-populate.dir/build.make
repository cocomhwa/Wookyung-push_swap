# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake

# The command to remove a file.
RM = /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild

# Utility rule file for imgui-sfml-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/imgui-sfml-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/imgui-sfml-populate.dir/progress.make

CMakeFiles/imgui-sfml-populate: CMakeFiles/imgui-sfml-populate-complete

CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-mkdir
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-patch
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-build
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install
CMakeFiles/imgui-sfml-populate-complete: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'imgui-sfml-populate'"
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E make_directory /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles/imgui-sfml-populate-complete
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-done

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update:
.PHONY : imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-build: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E echo_append
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-build

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure: imgui-sfml-populate-prefix/tmp/imgui-sfml-populate-cfgcmd.txt
imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E echo_append
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-gitinfo.txt
imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -P /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/tmp/imgui-sfml-populate-gitclone.cmake
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E echo_append
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'imgui-sfml-populate'"
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -Dcfgdir= -P /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/tmp/imgui-sfml-populate-mkdirs.cmake
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-mkdir

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-patch: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'imgui-sfml-populate'"
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E echo_append
	/Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-patch

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update:
.PHONY : imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-test: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E echo_append
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-build && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -E touch /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-test

imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'imgui-sfml-populate'"
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-src && /Users/wooshin/.brew/Cellar/cmake/3.25.1/bin/cmake -P /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/imgui-sfml-populate-prefix/tmp/imgui-sfml-populate-gitupdate.cmake

imgui-sfml-populate: CMakeFiles/imgui-sfml-populate
imgui-sfml-populate: CMakeFiles/imgui-sfml-populate-complete
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-build
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-configure
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-download
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-install
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-mkdir
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-patch
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-test
imgui-sfml-populate: imgui-sfml-populate-prefix/src/imgui-sfml-populate-stamp/imgui-sfml-populate-update
imgui-sfml-populate: CMakeFiles/imgui-sfml-populate.dir/build.make
.PHONY : imgui-sfml-populate

# Rule to build all files generated by this target.
CMakeFiles/imgui-sfml-populate.dir/build: imgui-sfml-populate
.PHONY : CMakeFiles/imgui-sfml-populate.dir/build

CMakeFiles/imgui-sfml-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/imgui-sfml-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/imgui-sfml-populate.dir/clean

CMakeFiles/imgui-sfml-populate.dir/depend:
	cd /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild /Users/wooshin/saveworks/push_swap/push_swap_visualizer/build/_deps/imgui-sfml-subbuild/CMakeFiles/imgui-sfml-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/imgui-sfml-populate.dir/depend

