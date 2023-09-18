// wrapClass1.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "defaultarg.hpp"
// shroud
#include <cstddef>
#include "wrapClass1.h"

// splicer begin class.Class1.CXX_definitions
// splicer end class.Class1.CXX_definitions

extern "C" {

// splicer begin class.Class1.C_definitions
// splicer end class.Class1.C_definitions

/**
 * Test default parameter methods with Class constructor.
 * Creates a generic interface.
 */
// Generated by has_default_arg
// ----------------------------------------
// Function:  Class1 +name(new)
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     f_ctor_shadow_scalar_capptr
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
DEF_Class1 * DEF_Class1_new_0(int arg1, DEF_Class1 * SHC_rv)
{
    // splicer begin class.Class1.method.new_0
    Class1 *SHCXX_rv = new Class1(arg1);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end class.Class1.method.new_0
}

/**
 * Test default parameter methods with Class constructor.
 * Creates a generic interface.
 */
// Generated by has_default_arg
// ----------------------------------------
// Function:  Class1 +name(new)
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     f_ctor_shadow_scalar_capptr
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg2=1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
DEF_Class1 * DEF_Class1_new_1(int arg1, int arg2, DEF_Class1 * SHC_rv)
{
    // splicer begin class.Class1.method.new_1
    Class1 *SHCXX_rv = new Class1(arg1, arg2);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end class.Class1.method.new_1
}

/**
 * Test default parameter methods with Class constructor.
 * Creates a generic interface.
 */
// ----------------------------------------
// Function:  Class1 +name(new)
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     f_ctor_shadow_scalar_capptr
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg2=1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg3=2 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
DEF_Class1 * DEF_Class1_new_2(int arg1, int arg2, int arg3,
    DEF_Class1 * SHC_rv)
{
    // splicer begin class.Class1.method.new_2
    Class1 *SHCXX_rv = new Class1(arg1, arg2, arg3);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end class.Class1.method.new_2
}

// ----------------------------------------
// Function:  ~Class1 +name(delete)
// Attrs:     +intent(dtor)
// Exact:     c_dtor
void DEF_Class1_delete(DEF_Class1 * self)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.delete
    delete SH_this;
    self->addr = nullptr;
    // splicer end class.Class1.method.delete
}

/**
 * Test default parameter methods within a Class.
 * Creates a generic interface and generic type-bound methods.
 */
// Generated by has_default_arg
// ----------------------------------------
// Function:  void DefaultArguments
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
void DEF_Class1_DefaultArguments_0(DEF_Class1 * self, int arg1)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.DefaultArguments_0
    SH_this->DefaultArguments(arg1);
    // splicer end class.Class1.method.DefaultArguments_0
}

/**
 * Test default parameter methods within a Class.
 * Creates a generic interface and generic type-bound methods.
 */
// Generated by has_default_arg
// ----------------------------------------
// Function:  void DefaultArguments
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg2=1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
void DEF_Class1_DefaultArguments_1(DEF_Class1 * self, int arg1,
    int arg2)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.DefaultArguments_1
    SH_this->DefaultArguments(arg1, arg2);
    // splicer end class.Class1.method.DefaultArguments_1
}

/**
 * Test default parameter methods within a Class.
 * Creates a generic interface and generic type-bound methods.
 */
// ----------------------------------------
// Function:  void DefaultArguments
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int arg1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg2=1 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
// ----------------------------------------
// Argument:  int arg3=2 +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
void DEF_Class1_DefaultArguments_2(DEF_Class1 * self, int arg1,
    int arg2, int arg3)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.DefaultArguments_2
    SH_this->DefaultArguments(arg1, arg2, arg3);
    // splicer end class.Class1.method.DefaultArguments_2
}

// Generated by getter/setter
// ----------------------------------------
// Function:  int get_field1
// Attrs:     +intent(getter)
// Exact:     f_getter_native_scalar
int DEF_Class1_get_field1(DEF_Class1 * self)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.get_field1
    // skip call c_getter
    return SH_this->m_field1;
    // splicer end class.Class1.method.get_field1
}

// Generated by getter/setter
// ----------------------------------------
// Function:  int get_field2
// Attrs:     +intent(getter)
// Exact:     f_getter_native_scalar
int DEF_Class1_get_field2(DEF_Class1 * self)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.get_field2
    // skip call c_getter
    return SH_this->m_field2;
    // splicer end class.Class1.method.get_field2
}

// Generated by getter/setter
// ----------------------------------------
// Function:  int get_field3
// Attrs:     +intent(getter)
// Exact:     f_getter_native_scalar
int DEF_Class1_get_field3(DEF_Class1 * self)
{
    Class1 *SH_this = static_cast<Class1 *>(self->addr);
    // splicer begin class.Class1.method.get_field3
    // skip call c_getter
    return SH_this->m_field3;
    // splicer end class.Class1.method.get_field3
}

}  // extern "C"
