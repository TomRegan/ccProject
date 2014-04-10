#ifndef {{APP_UC}}_H_
#define {{APP_UC}}_H_

#include <string>
{{IS_SET APP_NS}}
namespace {{APP_LC}} {
{{END_IS_SET}}
class {{APP}} {

 public:
  std::string to_str() const;

};
{{IS_SET APP_NS}}
}  // {{APP_LC}}
{{END_IS_SET}}
#endif  // {{APP_UC}}_H_
