# CMakeList.txt : CMake project for Project_adi_gutman_leon_markovich, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.15)

project (fun)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
    add_compile_options (/permissive-)
endif ()

add_executable (fun "")

add_subdirectory (include)
add_subdirectory (src)
#add_subdirectory (resources)
