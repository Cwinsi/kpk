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
CMAKE_SOURCE_DIR = C:\Users\grigo\CLionProjects\Cart

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\grigo\CLionProjects\Cart\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Cart.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Cart.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Cart.dir\flags.make

CMakeFiles\Cart.dir\main.cpp.obj: CMakeFiles\Cart.dir\flags.make
CMakeFiles\Cart.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cart.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Cart.dir\main.cpp.obj /FdCMakeFiles\Cart.dir\ /FS -c C:\Users\grigo\CLionProjects\Cart\main.cpp
<<

CMakeFiles\Cart.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cart.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe > CMakeFiles\Cart.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\grigo\CLionProjects\Cart\main.cpp
<<

CMakeFiles\Cart.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cart.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Cart.dir\main.cpp.s /c C:\Users\grigo\CLionProjects\Cart\main.cpp
<<

CMakeFiles\Cart.dir\Cart.cpp.obj: CMakeFiles\Cart.dir\flags.make
CMakeFiles\Cart.dir\Cart.cpp.obj: ..\Cart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Cart.dir/Cart.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Cart.dir\Cart.cpp.obj /FdCMakeFiles\Cart.dir\ /FS -c C:\Users\grigo\CLionProjects\Cart\Cart.cpp
<<

CMakeFiles\Cart.dir\Cart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cart.dir/Cart.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe > CMakeFiles\Cart.dir\Cart.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\grigo\CLionProjects\Cart\Cart.cpp
<<

CMakeFiles\Cart.dir\Cart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cart.dir/Cart.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Cart.dir\Cart.cpp.s /c C:\Users\grigo\CLionProjects\Cart\Cart.cpp
<<

CMakeFiles\Cart.dir\Product.cpp.obj: CMakeFiles\Cart.dir\flags.make
CMakeFiles\Cart.dir\Product.cpp.obj: ..\Product.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Cart.dir/Product.cpp.obj"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Cart.dir\Product.cpp.obj /FdCMakeFiles\Cart.dir\ /FS -c C:\Users\grigo\CLionProjects\Cart\Product.cpp
<<

CMakeFiles\Cart.dir\Product.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cart.dir/Product.cpp.i"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe > CMakeFiles\Cart.dir\Product.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\grigo\CLionProjects\Cart\Product.cpp
<<

CMakeFiles\Cart.dir\Product.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cart.dir/Product.cpp.s"
	C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Cart.dir\Product.cpp.s /c C:\Users\grigo\CLionProjects\Cart\Product.cpp
<<

# Object files for target Cart
Cart_OBJECTS = \
"CMakeFiles\Cart.dir\main.cpp.obj" \
"CMakeFiles\Cart.dir\Cart.cpp.obj" \
"CMakeFiles\Cart.dir\Product.cpp.obj"

# External object files for target Cart
Cart_EXTERNAL_OBJECTS =

Cart.exe: CMakeFiles\Cart.dir\main.cpp.obj
Cart.exe: CMakeFiles\Cart.dir\Cart.cpp.obj
Cart.exe: CMakeFiles\Cart.dir\Product.cpp.obj
Cart.exe: CMakeFiles\Cart.dir\build.make
Cart.exe: CMakeFiles\Cart.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Cart.exe"
	"C:\Program Files\JetBrains\CLion 2018.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Cart.dir --manifests  -- C:\PROGRA~2\MICROS~1\2017\COMMUN~1\VC\Tools\MSVC\1413~1.261\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Cart.dir\objects1.rsp @<<
 /out:Cart.exe /implib:Cart.lib /pdb:C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\Cart.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Cart.dir\build: Cart.exe

.PHONY : CMakeFiles\Cart.dir\build

CMakeFiles\Cart.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Cart.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Cart.dir\clean

CMakeFiles\Cart.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\grigo\CLionProjects\Cart C:\Users\grigo\CLionProjects\Cart C:\Users\grigo\CLionProjects\Cart\cmake-build-debug C:\Users\grigo\CLionProjects\Cart\cmake-build-debug C:\Users\grigo\CLionProjects\Cart\cmake-build-debug\CMakeFiles\Cart.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Cart.dir\depend
