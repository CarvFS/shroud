// wrapClass1.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapClass1.h"

// cxx_header
#include "classes.hpp"
// typemap
#include <string>
// shroud
#include <cstddef>
#include <cstring>

// splicer begin class.Class1.CXX_definitions
// splicer end class.Class1.CXX_definitions

extern "C" {


// start helper ShroudStrToArray
// helper ShroudStrToArray
// Save str metadata into array to allow Fortran to access values.
// CHARACTER(len=elem_size) src
static void ShroudStrToArray(CLA_SHROUD_array *array, const std::string * src, int idtor)
{
    array->cxx.addr = const_cast<std::string *>(src);
    array->cxx.idtor = idtor;
    if (src->empty()) {
        array->addr.ccharp = NULL;
        array->elem_len = 0;
    } else {
        array->addr.ccharp = src->data();
        array->elem_len = src->length();
    }
    array->size = 1;
    array->rank = 0;  // scalar
}
// end helper ShroudStrToArray
// splicer begin class.Class1.C_definitions
// splicer end class.Class1.C_definitions

// ----------------------------------------
// Function:  Class1
// Attrs:     +intent(ctor)
// Requested: c_ctor_shadow_scalar
// Match:     c_ctor
// start CLA_Class1_ctor_default
CLA_Class1 * CLA_Class1_ctor_default(CLA_Class1 * SHadow_rv)
{
    // splicer begin class.Class1.method.ctor_default
    classes::Class1 *SHCXX_rv = new classes::Class1();
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 1;
    return SHadow_rv;
    // splicer end class.Class1.method.ctor_default
}
// end CLA_Class1_ctor_default

// ----------------------------------------
// Function:  Class1
// Attrs:     +intent(ctor)
// Requested: c_ctor_shadow_scalar
// Match:     c_ctor
// ----------------------------------------
// Argument:  int flag +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// start CLA_Class1_ctor_flag
CLA_Class1 * CLA_Class1_ctor_flag(int flag, CLA_Class1 * SHadow_rv)
{
    // splicer begin class.Class1.method.ctor_flag
    classes::Class1 *SHCXX_rv = new classes::Class1(flag);
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 1;
    return SHadow_rv;
    // splicer end class.Class1.method.ctor_flag
}
// end CLA_Class1_ctor_flag

// ----------------------------------------
// Function:  ~Class1 +name(delete)
// Attrs:     +intent(dtor)
// Exact:     c_dtor
// start CLA_Class1_delete
void CLA_Class1_delete(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.delete
    delete SH_this;
    self->addr = nullptr;
    // splicer end class.Class1.method.delete
}
// end CLA_Class1_delete

/**
 * \brief returns the value of flag member
 *
 */
// ----------------------------------------
// Function:  int Method1
// Attrs:     +intent(function)
// Requested: c_function_native_scalar
// Match:     c_default
// start CLA_Class1_method1
int CLA_Class1_method1(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.method1
    int SHC_rv = SH_this->Method1();
    return SHC_rv;
    // splicer end class.Class1.method.method1
}
// end CLA_Class1_method1

/**
 * \brief Pass in reference to instance
 *
 */
// ----------------------------------------
// Function:  bool equivalent
// Attrs:     +intent(function)
// Requested: c_function_bool_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  const Class1 & obj2
// Attrs:     +intent(in)
// Requested: c_in_shadow_&
// Match:     c_in_shadow
// start CLA_Class1_equivalent
bool CLA_Class1_equivalent(const CLA_Class1 * self, CLA_Class1 * obj2)
{
    const classes::Class1 *SH_this =
        static_cast<const classes::Class1 *>(self->addr);
    // splicer begin class.Class1.method.equivalent
    const classes::Class1 * SHCXX_obj2 =
        static_cast<const classes::Class1 *>(obj2->addr);
    bool SHC_rv = SH_this->equivalent(*SHCXX_obj2);
    return SHC_rv;
    // splicer end class.Class1.method.equivalent
}
// end CLA_Class1_equivalent

/**
 * \brief Return pointer to 'this' to allow chaining calls
 *
 */
// ----------------------------------------
// Function:  void returnThis
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// start CLA_Class1_return_this
void CLA_Class1_return_this(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.return_this
    SH_this->returnThis();
    // splicer end class.Class1.method.return_this
}
// end CLA_Class1_return_this

/**
 * \brief Return pointer to 'this' to allow chaining calls
 *
 */
// ----------------------------------------
// Function:  Class1 * returnThisBuffer
// Attrs:     +intent(function)
// Requested: c_function_shadow_*
// Match:     c_function_shadow
// ----------------------------------------
// Argument:  std::string & name +intent(in)
// Attrs:     +intent(in)
// Exact:     c_in_string_&
// ----------------------------------------
// Argument:  bool flag +value
// Attrs:     +intent(in)
// Requested: c_in_bool_scalar
// Match:     c_default
// start CLA_Class1_return_this_buffer
CLA_Class1 * CLA_Class1_return_this_buffer(CLA_Class1 * self,
    char * name, bool flag, CLA_Class1 * SHadow_rv)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.return_this_buffer
    std::string SHCXX_name(name);
    classes::Class1 * SHCXX_rv = SH_this->returnThisBuffer(SHCXX_name,
        flag);
    SHadow_rv->addr = SHCXX_rv;
    SHadow_rv->idtor = 0;
    return SHadow_rv;
    // splicer end class.Class1.method.return_this_buffer
}
// end CLA_Class1_return_this_buffer

/**
 * \brief Return pointer to 'this' to allow chaining calls
 *
 */
// ----------------------------------------
// Function:  Class1 * returnThisBuffer
// Attrs:     +intent(function)
// Requested: c_function_shadow_*_buf
// Match:     c_function_shadow
// ----------------------------------------
// Argument:  std::string & name +intent(in)+len_trim(Lname)
// Attrs:     +intent(in)
// Exact:     c_in_string_&_buf
// ----------------------------------------
// Argument:  bool flag +value
// Attrs:     +intent(in)
// Requested: c_in_bool_scalar
// Match:     c_default
// start CLA_Class1_return_this_buffer_bufferify
CLA_Class1 * CLA_Class1_return_this_buffer_bufferify(CLA_Class1 * self,
    char * name, int Lname, bool flag, CLA_Class1 * SHadow_rv)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.return_this_buffer_bufferify
    std::string SHCXX_name(name, Lname);
    classes::Class1 * SHCXX_rv = SH_this->returnThisBuffer(SHCXX_name,
        flag);
    SHadow_rv->addr = SHCXX_rv;
    SHadow_rv->idtor = 0;
    return SHadow_rv;
    // splicer end class.Class1.method.return_this_buffer_bufferify
}
// end CLA_Class1_return_this_buffer_bufferify

/**
 * \brief Test const method
 *
 */
// ----------------------------------------
// Function:  Class1 * getclass3
// Attrs:     +intent(function)
// Requested: c_function_shadow_*
// Match:     c_function_shadow
// start CLA_Class1_getclass3
CLA_Class1 * CLA_Class1_getclass3(const CLA_Class1 * self,
    CLA_Class1 * SHadow_rv)
{
    const classes::Class1 *SH_this =
        static_cast<const classes::Class1 *>(self->addr);
    // splicer begin class.Class1.method.getclass3
    classes::Class1 * SHCXX_rv = SH_this->getclass3();
    SHadow_rv->addr = SHCXX_rv;
    SHadow_rv->idtor = 0;
    return SHadow_rv;
    // splicer end class.Class1.method.getclass3
}
// end CLA_Class1_getclass3

/**
 * \brief test helper
 *
 */
// ----------------------------------------
// Function:  const std::string & getName
// Attrs:     +deref(allocatable)+intent(function)
// Requested: c_function_string_&_allocatable
// Match:     c_function_string_&
// start CLA_Class1_get_name
const char * CLA_Class1_get_name(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.get_name
    const std::string & SHCXX_rv = SH_this->getName();
    const char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end class.Class1.method.get_name
}
// end CLA_Class1_get_name

/**
 * \brief test helper
 *
 */
// ----------------------------------------
// Function:  const std::string & getName
// Attrs:     +deref(allocatable)+intent(function)
// Exact:     c_function_string_&_buf_allocatable
// start CLA_Class1_get_name_bufferify
void CLA_Class1_get_name_bufferify(CLA_Class1 * self,
    CLA_SHROUD_array *SHC_rv_temp0)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.get_name_bufferify
    const std::string & SHCXX_rv = SH_this->getName();
    ShroudStrToArray(SHC_rv_temp0, &SHCXX_rv, 0);
    // splicer end class.Class1.method.get_name_bufferify
}
// end CLA_Class1_get_name_bufferify

// ----------------------------------------
// Function:  DIRECTION directionFunc
// Attrs:     +intent(function)
// Requested: c_function_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  DIRECTION arg +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// start CLA_Class1_direction_func
int CLA_Class1_direction_func(CLA_Class1 * self, int arg)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.direction_func
    classes::Class1::DIRECTION SHCXX_arg =
        static_cast<classes::Class1::DIRECTION>(arg);
    classes::Class1::DIRECTION SHCXX_rv = SH_this->directionFunc(
        SHCXX_arg);
    int SHC_rv = static_cast<int>(SHCXX_rv);
    return SHC_rv;
    // splicer end class.Class1.method.direction_func
}
// end CLA_Class1_direction_func

// ----------------------------------------
// Function:  int getM_flag
// Attrs:     +intent(getter)
// Exact:     c_getter_native_scalar
// start CLA_Class1_get_m_flag
int CLA_Class1_get_m_flag(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.get_m_flag
    // skip call c_getter
    return SH_this->m_flag;
    // splicer end class.Class1.method.get_m_flag
}
// end CLA_Class1_get_m_flag

// ----------------------------------------
// Function:  int getTest
// Attrs:     +intent(getter)
// Exact:     c_getter_native_scalar
// start CLA_Class1_get_test
int CLA_Class1_get_test(CLA_Class1 * self)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.get_test
    // skip call c_getter
    return SH_this->m_test;
    // splicer end class.Class1.method.get_test
}
// end CLA_Class1_get_test

// ----------------------------------------
// Function:  void setTest
// Attrs:     +intent(setter)
// Exact:     c_setter
// ----------------------------------------
// Argument:  int val +intent(in)+value
// Attrs:     +intent(setter)
// Exact:     c_setter_native_scalar
// start CLA_Class1_set_test
void CLA_Class1_set_test(CLA_Class1 * self, int val)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.set_test
    // skip call c_setter
    SH_this->m_test = val;
    // splicer end class.Class1.method.set_test
}
// end CLA_Class1_set_test

// ----------------------------------------
// Function:  std::string getM_name +context(cdesc)
// Attrs:     +deref(allocatable)+intent(getter)
// Requested: c_getter_string_scalar_buf_allocatable
// Match:     c_getter_string_scalar_buf
// start CLA_Class1_get_m_name_bufferify
void CLA_Class1_get_m_name_bufferify(CLA_Class1 * self,
    CLA_SHROUD_array *cdesc)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.get_m_name_bufferify
    // skip call c_getter
    cdesc->addr.base = SH_this->m_name.data();
    cdesc->type = 0; // SH_CHAR;
    cdesc->elem_len = SH_this->m_name.size();
    cdesc->rank = 0;
    // splicer end class.Class1.method.get_m_name_bufferify
}
// end CLA_Class1_get_m_name_bufferify

// ----------------------------------------
// Function:  void setM_name
// Attrs:     +intent(setter)
// Exact:     c_setter
// ----------------------------------------
// Argument:  std::string val +context(Dval)+intent(in)
// Attrs:     +intent(setter)
// Exact:     c_setter_string_scalar_buf
// start CLA_Class1_set_m_name_bufferify
void CLA_Class1_set_m_name_bufferify(CLA_Class1 * self,
    CLA_SHROUD_array *Dval)
{
    classes::Class1 *SH_this = static_cast<classes::Class1 *>
        (self->addr);
    // splicer begin class.Class1.method.set_m_name_bufferify
    // skip call c_setter
    SH_this->m_name = std::string(static_cast<const char *>(
        Dval->addr.base), Dval->elem_len);
    // splicer end class.Class1.method.set_m_name_bufferify
}
// end CLA_Class1_set_m_name_bufferify

}  // extern "C"
