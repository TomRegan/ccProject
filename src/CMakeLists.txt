################################
# Binaries and Libraries
################################
set(CMAKE_CXX_FLAGS "-g -Wall")
add_library(helloworld_lib helloworld.cc)
add_executable(helloworld main.cc)
target_link_libraries(helloworld helloworld_lib)

################################
# Tests
################################
add_executable(TestSuite test_helloworld.cc)
target_link_libraries(TestSuite gtest gtest_main)
target_link_libraries(TestSuite helloworld_lib)
