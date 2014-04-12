#include <iostream>
#include "application.h"

int
main()
{
  auto application = application::Application();
  std::cout << application.to_str() << std::endl;
  return 0;
}
