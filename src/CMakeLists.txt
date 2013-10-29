################################
# Binaries and Libraries
################################
set(SOURCE_FILES
  helloworld.cc
)
set(CMAKE_CXX_FLAGS "-g -Wall")
add_library(helloworld_lib ${SOURCE_FILES})
add_executable(helloworld main.cc)
target_link_libraries(helloworld helloworld_lib)

################################
# Tests
################################
set(TEST_FILES
  test_helloworld.cc
)
add_executable(TestSuite ${TEST_FILES})
target_link_libraries(TestSuite gtest gtest_main)
target_link_libraries(TestSuite helloworld_lib)
