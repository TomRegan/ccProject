#include "{{APP_LC}}.h"

{{IS_SET APP_NS}}
namespace {{APP_LC}} {
{{END_IS_SET}}
std::string {{APP_NS}}{{APP}}.to_str() const {
  return "{{APP}}";
}
{{IS_SET APP_NS}}
}  // {{APP_LC}}
{{END_IS_SET}}
