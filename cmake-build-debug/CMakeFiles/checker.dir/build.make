# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ycameron/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ycameron/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/checker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/checker.dir/flags.make

CMakeFiles/checker.dir/sources/checker.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/checker.c.o: ../sources/checker.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/checker.dir/sources/checker.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/checker.c.o   -c /Users/ycameron/push_swap/sources/checker.c

CMakeFiles/checker.dir/sources/checker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/checker.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/checker.c > CMakeFiles/checker.dir/sources/checker.c.i

CMakeFiles/checker.dir/sources/checker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/checker.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/checker.c -o CMakeFiles/checker.dir/sources/checker.c.s

CMakeFiles/checker.dir/sources/parser.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/parser.c.o: ../sources/parser.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/checker.dir/sources/parser.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/parser.c.o   -c /Users/ycameron/push_swap/sources/parser.c

CMakeFiles/checker.dir/sources/parser.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/parser.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/parser.c > CMakeFiles/checker.dir/sources/parser.c.i

CMakeFiles/checker.dir/sources/parser.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/parser.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/parser.c -o CMakeFiles/checker.dir/sources/parser.c.s

CMakeFiles/checker.dir/sources/operators.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/operators.c.o: ../sources/operators.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/checker.dir/sources/operators.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/operators.c.o   -c /Users/ycameron/push_swap/sources/operators.c

CMakeFiles/checker.dir/sources/operators.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/operators.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/operators.c > CMakeFiles/checker.dir/sources/operators.c.i

CMakeFiles/checker.dir/sources/operators.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/operators.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/operators.c -o CMakeFiles/checker.dir/sources/operators.c.s

CMakeFiles/checker.dir/sources/handle_errors.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/handle_errors.c.o: ../sources/handle_errors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/checker.dir/sources/handle_errors.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/handle_errors.c.o   -c /Users/ycameron/push_swap/sources/handle_errors.c

CMakeFiles/checker.dir/sources/handle_errors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/handle_errors.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/handle_errors.c > CMakeFiles/checker.dir/sources/handle_errors.c.i

CMakeFiles/checker.dir/sources/handle_errors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/handle_errors.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/handle_errors.c -o CMakeFiles/checker.dir/sources/handle_errors.c.s

CMakeFiles/checker.dir/sources/instructions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/instructions.c.o: ../sources/instructions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/checker.dir/sources/instructions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/instructions.c.o   -c /Users/ycameron/push_swap/sources/instructions.c

CMakeFiles/checker.dir/sources/instructions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/instructions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/instructions.c > CMakeFiles/checker.dir/sources/instructions.c.i

CMakeFiles/checker.dir/sources/instructions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/instructions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/instructions.c -o CMakeFiles/checker.dir/sources/instructions.c.s

CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o: ../sources/ft_max_in_lst.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o   -c /Users/ycameron/push_swap/sources/ft_max_in_lst.c

CMakeFiles/checker.dir/sources/ft_max_in_lst.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_max_in_lst.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_max_in_lst.c > CMakeFiles/checker.dir/sources/ft_max_in_lst.c.i

CMakeFiles/checker.dir/sources/ft_max_in_lst.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_max_in_lst.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_max_in_lst.c -o CMakeFiles/checker.dir/sources/ft_max_in_lst.c.s

CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o: ../sources/ft_min_in_lst.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o   -c /Users/ycameron/push_swap/sources/ft_min_in_lst.c

CMakeFiles/checker.dir/sources/ft_min_in_lst.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_min_in_lst.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_min_in_lst.c > CMakeFiles/checker.dir/sources/ft_min_in_lst.c.i

CMakeFiles/checker.dir/sources/ft_min_in_lst.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_min_in_lst.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_min_in_lst.c -o CMakeFiles/checker.dir/sources/ft_min_in_lst.c.s

CMakeFiles/checker.dir/sources/ft_lst_size.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_lst_size.c.o: ../sources/ft_lst_size.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/checker.dir/sources/ft_lst_size.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_lst_size.c.o   -c /Users/ycameron/push_swap/sources/ft_lst_size.c

CMakeFiles/checker.dir/sources/ft_lst_size.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_lst_size.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_lst_size.c > CMakeFiles/checker.dir/sources/ft_lst_size.c.i

CMakeFiles/checker.dir/sources/ft_lst_size.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_lst_size.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_lst_size.c -o CMakeFiles/checker.dir/sources/ft_lst_size.c.s

CMakeFiles/checker.dir/sources/sort3_5.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/sort3_5.c.o: ../sources/sort3_5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/checker.dir/sources/sort3_5.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/sort3_5.c.o   -c /Users/ycameron/push_swap/sources/sort3_5.c

CMakeFiles/checker.dir/sources/sort3_5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/sort3_5.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/sort3_5.c > CMakeFiles/checker.dir/sources/sort3_5.c.i

CMakeFiles/checker.dir/sources/sort3_5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/sort3_5.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/sort3_5.c -o CMakeFiles/checker.dir/sources/sort3_5.c.s

CMakeFiles/checker.dir/sources/ft_sort.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_sort.c.o: ../sources/ft_sort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/checker.dir/sources/ft_sort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_sort.c.o   -c /Users/ycameron/push_swap/sources/ft_sort.c

CMakeFiles/checker.dir/sources/ft_sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_sort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_sort.c > CMakeFiles/checker.dir/sources/ft_sort.c.i

CMakeFiles/checker.dir/sources/ft_sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_sort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_sort.c -o CMakeFiles/checker.dir/sources/ft_sort.c.s

CMakeFiles/checker.dir/sources/ft_sort_helper.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_sort_helper.c.o: ../sources/ft_sort_helper.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/checker.dir/sources/ft_sort_helper.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_sort_helper.c.o   -c /Users/ycameron/push_swap/sources/ft_sort_helper.c

CMakeFiles/checker.dir/sources/ft_sort_helper.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_sort_helper.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_sort_helper.c > CMakeFiles/checker.dir/sources/ft_sort_helper.c.i

CMakeFiles/checker.dir/sources/ft_sort_helper.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_sort_helper.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_sort_helper.c -o CMakeFiles/checker.dir/sources/ft_sort_helper.c.s

CMakeFiles/checker.dir/sources/positions.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/positions.c.o: ../sources/positions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/checker.dir/sources/positions.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/positions.c.o   -c /Users/ycameron/push_swap/sources/positions.c

CMakeFiles/checker.dir/sources/positions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/positions.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/positions.c > CMakeFiles/checker.dir/sources/positions.c.i

CMakeFiles/checker.dir/sources/positions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/positions.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/positions.c -o CMakeFiles/checker.dir/sources/positions.c.s

CMakeFiles/checker.dir/sources/rolling.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/rolling.c.o: ../sources/rolling.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/checker.dir/sources/rolling.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/rolling.c.o   -c /Users/ycameron/push_swap/sources/rolling.c

CMakeFiles/checker.dir/sources/rolling.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/rolling.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/rolling.c > CMakeFiles/checker.dir/sources/rolling.c.i

CMakeFiles/checker.dir/sources/rolling.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/rolling.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/rolling.c -o CMakeFiles/checker.dir/sources/rolling.c.s

CMakeFiles/checker.dir/sources/validation.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/validation.c.o: ../sources/validation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/checker.dir/sources/validation.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/validation.c.o   -c /Users/ycameron/push_swap/sources/validation.c

CMakeFiles/checker.dir/sources/validation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/validation.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/validation.c > CMakeFiles/checker.dir/sources/validation.c.i

CMakeFiles/checker.dir/sources/validation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/validation.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/validation.c -o CMakeFiles/checker.dir/sources/validation.c.s

CMakeFiles/checker.dir/sources/visual.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/visual.c.o: ../sources/visual.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/checker.dir/sources/visual.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/visual.c.o   -c /Users/ycameron/push_swap/sources/visual.c

CMakeFiles/checker.dir/sources/visual.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/visual.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/visual.c > CMakeFiles/checker.dir/sources/visual.c.i

CMakeFiles/checker.dir/sources/visual.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/visual.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/visual.c -o CMakeFiles/checker.dir/sources/visual.c.s

CMakeFiles/checker.dir/sources/draw_utils.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/draw_utils.c.o: ../sources/draw_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/checker.dir/sources/draw_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/draw_utils.c.o   -c /Users/ycameron/push_swap/sources/draw_utils.c

CMakeFiles/checker.dir/sources/draw_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/draw_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/draw_utils.c > CMakeFiles/checker.dir/sources/draw_utils.c.i

CMakeFiles/checker.dir/sources/draw_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/draw_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/draw_utils.c -o CMakeFiles/checker.dir/sources/draw_utils.c.s

CMakeFiles/checker.dir/sources/draw_utils2.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/draw_utils2.c.o: ../sources/draw_utils2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/checker.dir/sources/draw_utils2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/draw_utils2.c.o   -c /Users/ycameron/push_swap/sources/draw_utils2.c

CMakeFiles/checker.dir/sources/draw_utils2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/draw_utils2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/draw_utils2.c > CMakeFiles/checker.dir/sources/draw_utils2.c.i

CMakeFiles/checker.dir/sources/draw_utils2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/draw_utils2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/draw_utils2.c -o CMakeFiles/checker.dir/sources/draw_utils2.c.s

CMakeFiles/checker.dir/sources/draw_utils3.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/draw_utils3.c.o: ../sources/draw_utils3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/checker.dir/sources/draw_utils3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/draw_utils3.c.o   -c /Users/ycameron/push_swap/sources/draw_utils3.c

CMakeFiles/checker.dir/sources/draw_utils3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/draw_utils3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/draw_utils3.c > CMakeFiles/checker.dir/sources/draw_utils3.c.i

CMakeFiles/checker.dir/sources/draw_utils3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/draw_utils3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/draw_utils3.c -o CMakeFiles/checker.dir/sources/draw_utils3.c.s

CMakeFiles/checker.dir/sources/ft_reverse_list.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_reverse_list.c.o: ../sources/ft_reverse_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/checker.dir/sources/ft_reverse_list.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_reverse_list.c.o   -c /Users/ycameron/push_swap/sources/ft_reverse_list.c

CMakeFiles/checker.dir/sources/ft_reverse_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_reverse_list.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_reverse_list.c > CMakeFiles/checker.dir/sources/ft_reverse_list.c.i

CMakeFiles/checker.dir/sources/ft_reverse_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_reverse_list.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_reverse_list.c -o CMakeFiles/checker.dir/sources/ft_reverse_list.c.s

CMakeFiles/checker.dir/sources/add_to_stack.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/add_to_stack.c.o: ../sources/add_to_stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/checker.dir/sources/add_to_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/add_to_stack.c.o   -c /Users/ycameron/push_swap/sources/add_to_stack.c

CMakeFiles/checker.dir/sources/add_to_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/add_to_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/add_to_stack.c > CMakeFiles/checker.dir/sources/add_to_stack.c.i

CMakeFiles/checker.dir/sources/add_to_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/add_to_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/add_to_stack.c -o CMakeFiles/checker.dir/sources/add_to_stack.c.s

CMakeFiles/checker.dir/sources/ft_clear_stack.c.o: CMakeFiles/checker.dir/flags.make
CMakeFiles/checker.dir/sources/ft_clear_stack.c.o: ../sources/ft_clear_stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/checker.dir/sources/ft_clear_stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/checker.dir/sources/ft_clear_stack.c.o   -c /Users/ycameron/push_swap/sources/ft_clear_stack.c

CMakeFiles/checker.dir/sources/ft_clear_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/checker.dir/sources/ft_clear_stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ycameron/push_swap/sources/ft_clear_stack.c > CMakeFiles/checker.dir/sources/ft_clear_stack.c.i

CMakeFiles/checker.dir/sources/ft_clear_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/checker.dir/sources/ft_clear_stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ycameron/push_swap/sources/ft_clear_stack.c -o CMakeFiles/checker.dir/sources/ft_clear_stack.c.s

# Object files for target checker
checker_OBJECTS = \
"CMakeFiles/checker.dir/sources/checker.c.o" \
"CMakeFiles/checker.dir/sources/parser.c.o" \
"CMakeFiles/checker.dir/sources/operators.c.o" \
"CMakeFiles/checker.dir/sources/handle_errors.c.o" \
"CMakeFiles/checker.dir/sources/instructions.c.o" \
"CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o" \
"CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o" \
"CMakeFiles/checker.dir/sources/ft_lst_size.c.o" \
"CMakeFiles/checker.dir/sources/sort3_5.c.o" \
"CMakeFiles/checker.dir/sources/ft_sort.c.o" \
"CMakeFiles/checker.dir/sources/ft_sort_helper.c.o" \
"CMakeFiles/checker.dir/sources/positions.c.o" \
"CMakeFiles/checker.dir/sources/rolling.c.o" \
"CMakeFiles/checker.dir/sources/validation.c.o" \
"CMakeFiles/checker.dir/sources/visual.c.o" \
"CMakeFiles/checker.dir/sources/draw_utils.c.o" \
"CMakeFiles/checker.dir/sources/draw_utils2.c.o" \
"CMakeFiles/checker.dir/sources/draw_utils3.c.o" \
"CMakeFiles/checker.dir/sources/ft_reverse_list.c.o" \
"CMakeFiles/checker.dir/sources/add_to_stack.c.o" \
"CMakeFiles/checker.dir/sources/ft_clear_stack.c.o"

# External object files for target checker
checker_EXTERNAL_OBJECTS =

checker: CMakeFiles/checker.dir/sources/checker.c.o
checker: CMakeFiles/checker.dir/sources/parser.c.o
checker: CMakeFiles/checker.dir/sources/operators.c.o
checker: CMakeFiles/checker.dir/sources/handle_errors.c.o
checker: CMakeFiles/checker.dir/sources/instructions.c.o
checker: CMakeFiles/checker.dir/sources/ft_max_in_lst.c.o
checker: CMakeFiles/checker.dir/sources/ft_min_in_lst.c.o
checker: CMakeFiles/checker.dir/sources/ft_lst_size.c.o
checker: CMakeFiles/checker.dir/sources/sort3_5.c.o
checker: CMakeFiles/checker.dir/sources/ft_sort.c.o
checker: CMakeFiles/checker.dir/sources/ft_sort_helper.c.o
checker: CMakeFiles/checker.dir/sources/positions.c.o
checker: CMakeFiles/checker.dir/sources/rolling.c.o
checker: CMakeFiles/checker.dir/sources/validation.c.o
checker: CMakeFiles/checker.dir/sources/visual.c.o
checker: CMakeFiles/checker.dir/sources/draw_utils.c.o
checker: CMakeFiles/checker.dir/sources/draw_utils2.c.o
checker: CMakeFiles/checker.dir/sources/draw_utils3.c.o
checker: CMakeFiles/checker.dir/sources/ft_reverse_list.c.o
checker: CMakeFiles/checker.dir/sources/add_to_stack.c.o
checker: CMakeFiles/checker.dir/sources/ft_clear_stack.c.o
checker: CMakeFiles/checker.dir/build.make
checker: CMakeFiles/checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ycameron/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Linking C executable checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/checker.dir/build: checker

.PHONY : CMakeFiles/checker.dir/build

CMakeFiles/checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/checker.dir/clean

CMakeFiles/checker.dir/depend:
	cd /Users/ycameron/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ycameron/push_swap /Users/ycameron/push_swap /Users/ycameron/push_swap/cmake-build-debug /Users/ycameron/push_swap/cmake-build-debug /Users/ycameron/push_swap/cmake-build-debug/CMakeFiles/checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/checker.dir/depend

