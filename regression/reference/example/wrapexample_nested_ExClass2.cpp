// wrapexample_nested_ExClass2.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapexample_nested_ExClass2.h"

// cxx_header
#include "ExClass2.hpp"
// typemap
#include <string>
#include "ExClass1.hpp"
// shroud
#include <cstddef>
#include <cstring>

// splicer begin namespace.example::nested.class.ExClass2.CXX_definitions
//   namespace.example::nested.class.ExClass2.CXX_definitions
// splicer end namespace.example::nested.class.ExClass2.CXX_definitions

extern "C" {


// helper ShroudStrCopy
// Copy src into dest, blank fill to ndest characters
// Truncate if dest is too short.
// dest will not be NULL terminated.
static void ShroudStrCopy(char *dest, int ndest, const char *src, int nsrc)
{
   if (src == NULL) {
     std::memset(dest,' ',ndest); // convert NULL pointer to blank filled string
   } else {
     if (nsrc < 0) nsrc = std::strlen(src);
     int nm = nsrc < ndest ? nsrc : ndest;
     std::memcpy(dest,src,nm);
     if(ndest > nm) std::memset(dest+nm,' ',ndest-nm); // blank fill
   }
}

// helper ShroudStrToArray
// Save str metadata into array to allow Fortran to access values.
// CHARACTER(len=elem_size) src
static void ShroudStrToArray(AA_SHROUD_array *array, const std::string * src, int idtor)
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
// splicer begin namespace.example::nested.class.ExClass2.C_definitions
// splicer end namespace.example::nested.class.ExClass2.C_definitions

/**
 * \brief constructor
 *
 */
// ----------------------------------------
// Function:  ExClass2
// Attrs:     +intent(result)
// Exact:     c_shadow_scalar_ctor
// ----------------------------------------
// Argument:  const string * name +len_trim(trim_name)
// Attrs:     +intent(in)
// Exact:     c_string_*_in
AA_example_nested_ExClass2 * AA_example_nested_ExClass2_ctor(
    const char * name, AA_example_nested_ExClass2 * SHadow_rv)
{
    // splicer begin namespace.example::nested.class.ExClass2.method.ctor
    const std::string SHCXX_name(name);
    example::nested::ExClass2 *SHCXX_rv =
        new example::nested::ExClass2(&SHCXX_name);
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 2;
    return SHadow_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.ctor
}

/**
 * \brief constructor
 *
 */
// ----------------------------------------
// Function:  ExClass2
// Attrs:     +intent(result)
// Requested: c_shadow_scalar_ctor_buf
// Match:     c_shadow_scalar_ctor
// ----------------------------------------
// Argument:  const string * name +len_trim(trim_name)
// Attrs:     +intent(in)
// Exact:     c_string_*_in_buf
AA_example_nested_ExClass2 * AA_example_nested_ExClass2_ctor_bufferify(
    const char * name, int trim_name,
    AA_example_nested_ExClass2 * SHadow_rv)
{
    // splicer begin namespace.example::nested.class.ExClass2.method.ctor_bufferify
    const std::string SHCXX_name(name, trim_name);
    example::nested::ExClass2 *SHCXX_rv =
        new example::nested::ExClass2(&SHCXX_name);
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 2;
    return SHadow_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.ctor_bufferify
}

/**
 * \brief destructor
 *
 */
// ----------------------------------------
// Function:  ~ExClass2
// Exact:     c_shadow_dtor
void AA_example_nested_ExClass2_dtor(AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.dtor
    delete SH_this;
    self->addr = nullptr;
    // splicer end namespace.example::nested.class.ExClass2.method.dtor
}

// ----------------------------------------
// Function:  const string & getName +len(aa_exclass2_get_name_length({F_this}%{F_derived_member}))
// Attrs:     +deref(result-as-arg)+intent(result)
// Exact:     c_string_&_result
const char * AA_example_nested_ExClass2_get_name(
    const AA_example_nested_ExClass2 * self)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name
    const std::string & SHCXX_rv = SH_this->getName();
    const char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_name
}

// ----------------------------------------
// Function:  void getName +len(aa_exclass2_get_name_length({F_this}%{F_derived_member}))
// Requested: c_void_scalar_result_buf
// Match:     c_default
// ----------------------------------------
// Argument:  string & SHF_rv +len(NSHF_rv)
// Attrs:     +intent(out)+is_result
// Exact:     c_string_&_result_buf
void AA_example_nested_ExClass2_get_name_bufferify(
    const AA_example_nested_ExClass2 * self, char * SHF_rv, int NSHF_rv)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name_bufferify
    const std::string & SHCXX_rv = SH_this->getName();
    if (SHCXX_rv.empty()) {
        ShroudStrCopy(SHF_rv, NSHF_rv, nullptr, 0);
    } else {
        ShroudStrCopy(SHF_rv, NSHF_rv, SHCXX_rv.data(),
            SHCXX_rv.size());
    }
    // splicer end namespace.example::nested.class.ExClass2.method.get_name_bufferify
}

// ----------------------------------------
// Function:  const string & getName2
// Attrs:     +deref(allocatable)+intent(result)
// Exact:     c_string_&_result
const char * AA_example_nested_ExClass2_get_name2(
    AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name2
    const std::string & SHCXX_rv = SH_this->getName2();
    const char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_name2
}

// ----------------------------------------
// Function:  void getName2
// Requested: c_void_scalar_result_buf
// Match:     c_default
// ----------------------------------------
// Argument:  const string & SHF_rv +context(DSHF_rv)
// Attrs:     +deref(allocatable)+intent(out)+is_result
// Exact:     c_string_&_result_buf_allocatable
void AA_example_nested_ExClass2_get_name2_bufferify(
    AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name2_bufferify
    const std::string & SHCXX_rv = SH_this->getName2();
    ShroudStrToArray(DSHF_rv, &SHCXX_rv, 0);
    // splicer end namespace.example::nested.class.ExClass2.method.get_name2_bufferify
}

// ----------------------------------------
// Function:  string & getName3
// Attrs:     +deref(allocatable)+intent(result)
// Exact:     c_string_&_result
char * AA_example_nested_ExClass2_get_name3(
    const AA_example_nested_ExClass2 * self)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name3
    std::string & SHCXX_rv = SH_this->getName3();
    char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_name3
}

// ----------------------------------------
// Function:  void getName3
// Requested: c_void_scalar_result_buf
// Match:     c_default
// ----------------------------------------
// Argument:  string & SHF_rv +context(DSHF_rv)
// Attrs:     +deref(allocatable)+intent(out)+is_result
// Exact:     c_string_&_result_buf_allocatable
void AA_example_nested_ExClass2_get_name3_bufferify(
    const AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name3_bufferify
    std::string & SHCXX_rv = SH_this->getName3();
    ShroudStrToArray(DSHF_rv, &SHCXX_rv, 0);
    // splicer end namespace.example::nested.class.ExClass2.method.get_name3_bufferify
}

// ----------------------------------------
// Function:  string & getName4
// Attrs:     +deref(allocatable)+intent(result)
// Exact:     c_string_&_result
char * AA_example_nested_ExClass2_get_name4(
    AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name4
    std::string & SHCXX_rv = SH_this->getName4();
    char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_name4
}

// ----------------------------------------
// Function:  void getName4
// Requested: c_void_scalar_result_buf
// Match:     c_default
// ----------------------------------------
// Argument:  string & SHF_rv +context(DSHF_rv)
// Attrs:     +deref(allocatable)+intent(out)+is_result
// Exact:     c_string_&_result_buf_allocatable
void AA_example_nested_ExClass2_get_name4_bufferify(
    AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name4_bufferify
    std::string & SHCXX_rv = SH_this->getName4();
    ShroudStrToArray(DSHF_rv, &SHCXX_rv, 0);
    // splicer end namespace.example::nested.class.ExClass2.method.get_name4_bufferify
}

/**
 * \brief helper function for Fortran
 *
 */
// ----------------------------------------
// Function:  int GetNameLength
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
int AA_example_nested_ExClass2_get_name_length(
    const AA_example_nested_ExClass2 * self)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_name_length
    return SH_this->getName().length();
    // splicer end namespace.example::nested.class.ExClass2.method.get_name_length
}

// ----------------------------------------
// Function:  ExClass1 * get_class1
// Attrs:     +intent(result)
// Requested: c_shadow_*_result
// Match:     c_shadow_result
// ----------------------------------------
// Argument:  const ExClass1 * in
// Attrs:     +intent(in)
// Requested: c_shadow_*_in
// Match:     c_shadow_in
AA_example_nested_ExClass1 * AA_example_nested_ExClass2_get_class1(
    AA_example_nested_ExClass2 * self, AA_example_nested_ExClass1 * in,
    AA_example_nested_ExClass1 * SHadow_rv)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_class1
    const example::nested::ExClass1 * SHCXX_in =
        static_cast<const example::nested::ExClass1 *>(in->addr);
    example::nested::ExClass1 * SHCXX_rv = SH_this->get_class1(
        SHCXX_in);
    SHadow_rv->addr = SHCXX_rv;
    SHadow_rv->idtor = 0;
    return SHadow_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_class1
}

// ----------------------------------------
// Function:  void declare
// Attrs:     +intent(result)
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_declare_0(
    AA_example_nested_ExClass2 * self, int type)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.declare_0
    TypeID SHCXX_type = getTypeID(type);
    SH_this->declare(SHCXX_type);
    // splicer end namespace.example::nested.class.ExClass2.method.declare_0
}

// ----------------------------------------
// Function:  void declare
// Attrs:     +intent(result)
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
// ----------------------------------------
// Argument:  SidreLength len=1 +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_declare_1(
    AA_example_nested_ExClass2 * self, int type, SIDRE_SidreLength len)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.declare_1
    TypeID SHCXX_type = getTypeID(type);
    SH_this->declare(SHCXX_type, len);
    // splicer end namespace.example::nested.class.ExClass2.method.declare_1
}

// ----------------------------------------
// Function:  void destroyall
// Requested: c
// Match:     c_default
void AA_example_nested_ExClass2_destroyall(
    AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.destroyall
    SH_this->destroyall();
    // splicer end namespace.example::nested.class.ExClass2.method.destroyall
}

// ----------------------------------------
// Function:  TypeID getTypeID
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
int AA_example_nested_ExClass2_get_type_id(
    const AA_example_nested_ExClass2 * self)
{
    const example::nested::ExClass2 *SH_this =
        static_cast<const example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_type_id
    TypeID SHCXX_rv = SH_this->getTypeID();
    int SHC_rv = static_cast<int>(SHCXX_rv);
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_type_id
}

// ----------------------------------------
// Function:  void setValue
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  int value +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_set_value_int(
    AA_example_nested_ExClass2 * self, int value)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.set_value_int
    SH_this->setValue<int>(value);
    // splicer end namespace.example::nested.class.ExClass2.method.set_value_int
}

// ----------------------------------------
// Function:  void setValue
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  long value +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_set_value_long(
    AA_example_nested_ExClass2 * self, long value)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.set_value_long
    SH_this->setValue<long>(value);
    // splicer end namespace.example::nested.class.ExClass2.method.set_value_long
}

// ----------------------------------------
// Function:  void setValue
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  float value +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_set_value_float(
    AA_example_nested_ExClass2 * self, float value)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.set_value_float
    SH_this->setValue<float>(value);
    // splicer end namespace.example::nested.class.ExClass2.method.set_value_float
}

// ----------------------------------------
// Function:  void setValue
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  double value +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void AA_example_nested_ExClass2_set_value_double(
    AA_example_nested_ExClass2 * self, double value)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.set_value_double
    SH_this->setValue<double>(value);
    // splicer end namespace.example::nested.class.ExClass2.method.set_value_double
}

// ----------------------------------------
// Function:  int getValue
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
int AA_example_nested_ExClass2_get_value_int(
    AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_value_int
    int SHC_rv = SH_this->getValue<int>();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_value_int
}

// ----------------------------------------
// Function:  double getValue
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
double AA_example_nested_ExClass2_get_value_double(
    AA_example_nested_ExClass2 * self)
{
    example::nested::ExClass2 *SH_this =
        static_cast<example::nested::ExClass2 *>(self->addr);
    // splicer begin namespace.example::nested.class.ExClass2.method.get_value_double
    double SHC_rv = SH_this->getValue<double>();
    return SHC_rv;
    // splicer end namespace.example::nested.class.ExClass2.method.get_value_double
}

}  // extern "C"
