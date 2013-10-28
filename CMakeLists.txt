cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME MyProject)
project(${PROJECT_NAME})
set(CMAKE_CXX_FLAGS "-g -Wall")

################################
# Binaries and Libraries
################################
add_library(project1_lib project1.cpp)
add_executable(project1 main.cpp)
target_link_libraries(project1 project1_lib)

################################
# Testing
################################
add_subdirectory(lib/gtest-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(TestSuite1 test_project1.cpp)
target_link_libraries(TestSuite1 gtest gtest_main)
target_link_libraries(TestSuite1 project1_lib)
add_test(TestSuite1 TestSuite1)
