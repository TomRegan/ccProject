#include <iostream>
#include "{{APP_LC}}.h"

int
main()
{
  auto {{APP_IL}} = {{APP_NS}}{{APP}}();
  std::cout << {{APP_IL}}.to_str() << std::endl;
  return 0;
}
