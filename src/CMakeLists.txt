################################
# Binaries and Libraries
################################
set(CMAKE_CXX_FLAGS "-g -Wall")
add_library(project1_lib project1.cc)
add_executable(project1 main.cc)
target_link_libraries(project1 project1_lib)

################################
# Tests
################################
add_executable(TestSuite test_project1.cc)
target_link_libraries(TestSuite gtest gtest_main)
target_link_libraries(TestSuite project1_lib)
