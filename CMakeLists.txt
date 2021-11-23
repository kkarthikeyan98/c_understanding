# set the minimum version for CMake

cmake_minimum_required(VERSION 3.10)

# set projects settig

project(hello-world VERSION 1.0)

configure_file(main.h.in main.h)

target_include_directories(hello-world PUBLIC 
			"${PROJECT_BINARY_DIR}"
			)
			
add_executable(hello-world main.c)
#set output folder macros

#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# SET INCLUDE FOLDERS

#include_directories("${PROJECT_SOURCE_DIR}")

#add_executable(hello-world ${PROJECT_SOURCE_DIR/main.c})

