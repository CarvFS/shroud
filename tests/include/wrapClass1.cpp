// wrapClass1.cpp
// This is generated code, do not edit
// wrapClass1.cpp
#include "wrapClass1.h"
#include "class_header.hpp"
#include "type_header.hpp"

extern "C" {
namespace three {

void DEF_class1_method1(DEF_class1 * self, int arg1)
{
Class1 *selfobj = static_cast<Class1 *>(static_cast<void *>(self));
// splicer begin class.Class1.method.method1
selfobj->method1(arg1);
return;
// splicer end class.Class1.method.method1
}

// splicer begin class.Class1.additional_functions
// splicer end class.Class1.additional_functions

}  // namespace three
}  // extern "C"