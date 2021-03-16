// wrapClass2.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapClass2.h"

// cxx_header
#include "forward.hpp"
// typemap
#include "header1.hpp"
#include "header2.hpp"
// shroud
#include <cstddef>

// splicer begin class.Class2.CXX_definitions
// splicer end class.Class2.CXX_definitions

extern "C" {

// splicer begin class.Class2.C_definitions
// splicer end class.Class2.C_definitions

// ----------------------------------------
// Function:  Class2
// Attrs:     +intent(ctor)
// Requested: c_ctor_shadow_scalar
// Match:     c_ctor
FOR_Class2 * FOR_Class2_ctor(FOR_Class2 * SHadow_rv)
{
    // splicer begin class.Class2.method.ctor
    forward::Class2 *SHCXX_rv = new forward::Class2();
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 1;
    return SHadow_rv;
    // splicer end class.Class2.method.ctor
}

// ----------------------------------------
// Function:  ~Class2
// Attrs:     +intent(dtor)
// Exact:     c_dtor
void FOR_Class2_dtor(FOR_Class2 * self)
{
    forward::Class2 *SH_this = static_cast<forward::Class2 *>
        (self->addr);
    // splicer begin class.Class2.method.dtor
    delete SH_this;
    self->addr = nullptr;
    // splicer end class.Class2.method.dtor
}

// ----------------------------------------
// Function:  void func1
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  tutorial::Class1 * arg +intent(in)
// Attrs:     +intent(in)
// Requested: c_in_shadow_*
// Match:     c_in_shadow
void FOR_Class2_func1(FOR_Class2 * self, TUT_Class1 * arg)
{
    forward::Class2 *SH_this = static_cast<forward::Class2 *>
        (self->addr);
    // splicer begin class.Class2.method.func1
    tutorial::Class1 * SHCXX_arg = static_cast<tutorial::Class1 *>
        (arg->addr);
    SH_this->func1(SHCXX_arg);
    // splicer end class.Class2.method.func1
}

// ----------------------------------------
// Function:  void acceptClass3
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  Class3 * arg +intent(in)
// Attrs:     +intent(in)
// Requested: c_in_shadow_*
// Match:     c_in_shadow
void FOR_Class2_accept_class3(FOR_Class2 * self, FOR_Class3 * arg)
{
    forward::Class2 *SH_this = static_cast<forward::Class2 *>
        (self->addr);
    // splicer begin class.Class2.method.accept_class3
    forward::Class3 * SHCXX_arg = static_cast<forward::Class3 *>
        (arg->addr);
    SH_this->acceptClass3(SHCXX_arg);
    // splicer end class.Class2.method.accept_class3
}

}  // extern "C"
