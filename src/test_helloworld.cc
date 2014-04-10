#include <iostream>
#include "gtest/gtest.h"

#include "{{APP_LC}}.h"

class {{APP}}Test : public ::testing::Test {

 protected:
  {{APP_NS}}{{APP}} {{APP_IL}};

  virtual void SetUp() {

  }

  virtual void TearDown() {

  }

};

TEST_F({{APP}}Test, ShouldReturn{{APP}}) {

  ASSERT_STREQ("{{APP}}", {{APP_IL}}.to_str().c_str());
}
