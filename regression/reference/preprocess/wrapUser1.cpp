// wrapUser1.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapUser1.h"

// cxx_header
#include "preprocess.hpp"

// splicer begin class.User1.CXX_definitions
// splicer end class.User1.CXX_definitions

extern "C" {

// splicer begin class.User1.C_definitions
// splicer end class.User1.C_definitions

// ----------------------------------------
// Function:  void method1
// Exact:     c_subroutine
void PRE_User1_method1(PRE_User1 * self)
{
    User1 *SH_this = static_cast<User1 *>(self->addr);
    // splicer begin class.User1.method.method1
    SH_this->method1();
    // splicer end class.User1.method.method1
}

#if defined(USE_TWO)
// ----------------------------------------
// Function:  void method2
// Exact:     c_subroutine
void PRE_User1_method2(PRE_User1 * self)
{
    User1 *SH_this = static_cast<User1 *>(self->addr);
    // splicer begin class.User1.method.method2
    SH_this->method2();
    // splicer end class.User1.method.method2
}
#endif  // if defined(USE_TWO)

#if defined(USE_THREE)
// ----------------------------------------
// Function:  void method3def
// Exact:     c_subroutine
void PRE_User1_method3def_0(PRE_User1 * self)
{
    User1 *SH_this = static_cast<User1 *>(self->addr);
    // splicer begin class.User1.method.method3def_0
    SH_this->method3def();
    // splicer end class.User1.method.method3def_0
}
#endif  // if defined(USE_THREE)

#if defined(USE_THREE)
// ----------------------------------------
// Function:  void method3def
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int i=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void PRE_User1_method3def_1(PRE_User1 * self, int i)
{
    User1 *SH_this = static_cast<User1 *>(self->addr);
    // splicer begin class.User1.method.method3def_1
    SH_this->method3def(i);
    // splicer end class.User1.method.method3def_1
}
#endif  // if defined(USE_THREE)

}  // extern "C"
