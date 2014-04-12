#include <iostream>
#include "gtest/gtest.h"

#include "application.h"

class ApplicationTest : public ::testing::Test {

 protected:
  application::Application application;

  virtual void SetUp() {

  }

  virtual void TearDown() {

  }

};

TEST_F(ApplicationTest, ShouldReturnApplication) {

  ASSERT_STREQ("Application", application.to_str().c_str());
}
