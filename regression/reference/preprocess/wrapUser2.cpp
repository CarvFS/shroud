// wrapUser2.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifdef USE_USER2
#include "wrapUser2.h"

// cxx_header
#include "User2.hpp"

// splicer begin class.User2.CXX_definitions
// splicer end class.User2.CXX_definitions

extern "C" {

// splicer begin class.User2.C_definitions
// splicer end class.User2.C_definitions

#ifdef USE_CLASS3_A
// ----------------------------------------
// Function:  void exfunc
// Exact:     c_subroutine
void PRE_User2_exfunc_0(PRE_User2 * self)
{
    User2 *SH_this = static_cast<User2 *>(self->addr);
    // splicer begin class.User2.method.exfunc_0
    SH_this->exfunc();
    // splicer end class.User2.method.exfunc_0
}
#endif  // ifdef USE_CLASS3_A

#ifndef USE_CLASS3_A
// ----------------------------------------
// Function:  void exfunc
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int flag +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void PRE_User2_exfunc_1(PRE_User2 * self, int flag)
{
    User2 *SH_this = static_cast<User2 *>(self->addr);
    // splicer begin class.User2.method.exfunc_1
    SH_this->exfunc(flag);
    // splicer end class.User2.method.exfunc_1
}
#endif  // ifndef USE_CLASS3_A

}  // extern "C"
#endif  // ifdef USE_USER2
