// wrapClass2.cpp
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapClass2.h"
#include <cstddef>
#include <cstring>
#include <string>
#include "classes.hpp"

// splicer begin class.Class2.CXX_definitions
// splicer end class.Class2.CXX_definitions

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
// splicer begin class.Class2.C_definitions
// splicer end class.Class2.C_definitions

/**
 * \brief test helper
 *
 */
// ----------------------------------------
// Function:  const std::string & getName +deref(allocatable)
// Requested: c_string_&_result
// Match:     c_string_result
const char * CLA_Class2_get_name(CLA_Class2 * self)
{
    classes::Class2 *SH_this =
        static_cast<classes::Class2 *>(self->addr);
    // splicer begin class.Class2.method.get_name
    const std::string & SHCXX_rv = SH_this->getName();
    const char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end class.Class2.method.get_name
}

/**
 * \brief test helper
 *
 */
// ----------------------------------------
// Function:  void getName
// Requested: c_unknown_scalar_result_buf
// Match:     c_default
// ----------------------------------------
// Argument:  const std::string & SHF_rv +context(DSHF_rv)+deref(allocatable)+intent(out)
// Requested: c_string_&_result_buf_allocatable
// Match:     c_string_result_buf_allocatable
void CLA_Class2_get_name_bufferify(CLA_Class2 * self,
    CLA_SHROUD_array *DSHF_rv)
{
    classes::Class2 *SH_this =
        static_cast<classes::Class2 *>(self->addr);
    // splicer begin class.Class2.method.get_name_bufferify
    const std::string & SHCXX_rv = SH_this->getName();
    ShroudStrToArray(DSHF_rv, &SHCXX_rv, 0);
    // splicer end class.Class2.method.get_name_bufferify
}

}  // extern "C"