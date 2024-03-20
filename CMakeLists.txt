cmake_minimum_required(VERSION 3.5)

project(R-FORTH)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)

# Windows workaround (don't ask) 
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)
include_directories(${GTEST_INCLUDE_DIRS})

add_subdirectory(main)

#include directories for header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

#add the source files to the executable target
add_executable(R-FORTH main.c variables.c conditions.c control_flow.c functions.c)


# You can use add_subdirectory() to add your own work. 
# Please don't remove the existing subdirectories.