# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\grigo\CLionProjects\p32_pr2_zvd2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\p32_pr2_zvd2.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\p32_pr2_zvd2.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\p32_pr2_zvd2.dir\flags.make

CMakeFiles\p32_pr2_zvd2.dir\main.cpp.obj: CMakeFiles\p32_pr2_zvd2.dir\flags.make
CMakeFiles\p32_pr2_zvd2.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p32_pr2_zvd2.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\p32_pr2_zvd2.dir\main.cpp.obj /FdCMakeFiles\p32_pr2_zvd2.dir\ /FS -c C:\Users\grigo\CLionProjects\p32_pr2_zvd2\main.cpp
<<

CMakeFiles\p32_pr2_zvd2.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p32_pr2_zvd2.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe > CMakeFiles\p32_pr2_zvd2.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\grigo\CLionProjects\p32_pr2_zvd2\main.cpp
<<

CMakeFiles\p32_pr2_zvd2.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p32_pr2_zvd2.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\p32_pr2_zvd2.dir\main.cpp.s /c C:\Users\grigo\CLionProjects\p32_pr2_zvd2\main.cpp
<<

CMakeFiles\p32_pr2_zvd2.dir\User.cpp.obj: CMakeFiles\p32_pr2_zvd2.dir\flags.make
CMakeFiles\p32_pr2_zvd2.dir\User.cpp.obj: ..\User.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/p32_pr2_zvd2.dir/User.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\p32_pr2_zvd2.dir\User.cpp.obj /FdCMakeFiles\p32_pr2_zvd2.dir\ /FS -c C:\Users\grigo\CLionProjects\p32_pr2_zvd2\User.cpp
<<

CMakeFiles\p32_pr2_zvd2.dir\User.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p32_pr2_zvd2.dir/User.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe > CMakeFiles\p32_pr2_zvd2.dir\User.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\grigo\CLionProjects\p32_pr2_zvd2\User.cpp
<<

CMakeFiles\p32_pr2_zvd2.dir\User.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p32_pr2_zvd2.dir/User.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\p32_pr2_zvd2.dir\User.cpp.s /c C:\Users\grigo\CLionProjects\p32_pr2_zvd2\User.cpp
<<

# Object files for target p32_pr2_zvd2
p32_pr2_zvd2_OBJECTS = \
"CMakeFiles\p32_pr2_zvd2.dir\main.cpp.obj" \
"CMakeFiles\p32_pr2_zvd2.dir\User.cpp.obj"

# External object files for target p32_pr2_zvd2
p32_pr2_zvd2_EXTERNAL_OBJECTS =

p32_pr2_zvd2.exe: CMakeFiles\p32_pr2_zvd2.dir\main.cpp.obj
p32_pr2_zvd2.exe: CMakeFiles\p32_pr2_zvd2.dir\User.cpp.obj
p32_pr2_zvd2.exe: CMakeFiles\p32_pr2_zvd2.dir\build.make
p32_pr2_zvd2.exe: CMakeFiles\p32_pr2_zvd2.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable p32_pr2_zvd2.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\p32_pr2_zvd2.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\p32_pr2_zvd2.dir\objects1.rsp @<<
 /out:p32_pr2_zvd2.exe /implib:p32_pr2_zvd2.lib /pdb:C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug\p32_pr2_zvd2.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\p32_pr2_zvd2.dir\build: p32_pr2_zvd2.exe

.PHONY : CMakeFiles\p32_pr2_zvd2.dir\build

CMakeFiles\p32_pr2_zvd2.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\p32_pr2_zvd2.dir\cmake_clean.cmake
.PHONY : CMakeFiles\p32_pr2_zvd2.dir\clean

CMakeFiles\p32_pr2_zvd2.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\grigo\CLionProjects\p32_pr2_zvd2 C:\Users\grigo\CLionProjects\p32_pr2_zvd2 C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug C:\Users\grigo\CLionProjects\p32_pr2_zvd2\cmake-build-debug\CMakeFiles\p32_pr2_zvd2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\p32_pr2_zvd2.dir\depend

