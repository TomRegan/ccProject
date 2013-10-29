#include <iostream>
#include "gtest/gtest.h"

#include "helloworld.h"

class HelloWorldTest : public ::testing::Test {

 protected:
  helloworld::HelloWorld helloWorld;

  virtual void SetUp() {

  }

  virtual void TearDown() {

  }

};

TEST_F(HelloWorldTest, ShouldReturnHelloWorld) {

  ASSERT_STREQ("Hello, World!", helloWorld.toString().c_str());
}
