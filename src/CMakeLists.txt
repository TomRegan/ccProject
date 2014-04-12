################################
# Binaries and Libraries
################################
set(SOURCE_FILES
  application.cc
)
set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")
add_library(application_lib ${SOURCE_FILES})
add_executable(application main.cc)
target_link_libraries(application application_lib)

################################
# Tests
################################
set(TEST_FILES
  test_application.cc
)
add_executable(TestSuite ${TEST_FILES})
target_link_libraries(TestSuite gtest gtest_main)
target_link_libraries(TestSuite application_lib)
