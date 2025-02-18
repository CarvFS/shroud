// wrapCstruct_as_class.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "struct.h"
// shroud
#include "wrapCstruct_as_class.h"

// splicer begin class.Cstruct_as_class.CXX_definitions
// splicer end class.Cstruct_as_class.CXX_definitions

extern "C" {

// splicer begin class.Cstruct_as_class.C_definitions
// splicer end class.Cstruct_as_class.C_definitions

// Generated by getter/setter
// ----------------------------------------
// Function:  int get_x1
// Attrs:     +intent(getter)
// Statement: f_getter_native_scalar
// start STR_Cstruct_as_class_get_x1
int STR_Cstruct_as_class_get_x1(STR_Cstruct_as_class * self)
{
    Cstruct_as_class *SH_this = static_cast<Cstruct_as_class *>
        (self->addr);
    // splicer begin class.Cstruct_as_class.method.get_x1
    // skip call c_getter
    return SH_this->x1;
    // splicer end class.Cstruct_as_class.method.get_x1
}
// end STR_Cstruct_as_class_get_x1

// Generated by getter/setter
// ----------------------------------------
// Function:  void set_x1
// Attrs:     +intent(setter)
// Statement: f_setter
// ----------------------------------------
// Argument:  int val +intent(in)+value
// Attrs:     +intent(setter)
// Statement: f_setter_native_scalar
// start STR_Cstruct_as_class_set_x1
void STR_Cstruct_as_class_set_x1(STR_Cstruct_as_class * self, int val)
{
    Cstruct_as_class *SH_this = static_cast<Cstruct_as_class *>
        (self->addr);
    // splicer begin class.Cstruct_as_class.method.set_x1
    // skip call c_setter
    SH_this->x1 = val;
    // splicer end class.Cstruct_as_class.method.set_x1
}
// end STR_Cstruct_as_class_set_x1

// Generated by getter/setter
// ----------------------------------------
// Function:  int get_y1
// Attrs:     +intent(getter)
// Statement: f_getter_native_scalar
// start STR_Cstruct_as_class_get_y1
int STR_Cstruct_as_class_get_y1(STR_Cstruct_as_class * self)
{
    Cstruct_as_class *SH_this = static_cast<Cstruct_as_class *>
        (self->addr);
    // splicer begin class.Cstruct_as_class.method.get_y1
    // skip call c_getter
    return SH_this->y1;
    // splicer end class.Cstruct_as_class.method.get_y1
}
// end STR_Cstruct_as_class_get_y1

// Generated by getter/setter
// ----------------------------------------
// Function:  void set_y1
// Attrs:     +intent(setter)
// Statement: f_setter
// ----------------------------------------
// Argument:  int val +intent(in)+value
// Attrs:     +intent(setter)
// Statement: f_setter_native_scalar
// start STR_Cstruct_as_class_set_y1
void STR_Cstruct_as_class_set_y1(STR_Cstruct_as_class * self, int val)
{
    Cstruct_as_class *SH_this = static_cast<Cstruct_as_class *>
        (self->addr);
    // splicer begin class.Cstruct_as_class.method.set_y1
    // skip call c_setter
    SH_this->y1 = val;
    // splicer end class.Cstruct_as_class.method.set_y1
}
// end STR_Cstruct_as_class_set_y1

}  // extern "C"
