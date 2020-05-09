// wrapArrayWrapper.cpp
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapArrayWrapper.h"
#include "references.hpp"

// splicer begin class.ArrayWrapper.CXX_definitions
// splicer end class.ArrayWrapper.CXX_definitions

extern "C" {

// splicer begin class.ArrayWrapper.C_definitions
// splicer end class.ArrayWrapper.C_definitions

// ----------------------------------------
// Function:  ArrayWrapper
// Exact:     c_shadow_scalar_ctor
REF_ArrayWrapper * REF_ArrayWrapper_ctor(REF_ArrayWrapper * SHC_rv)
{
    // splicer begin class.ArrayWrapper.method.ctor
    ArrayWrapper *SHCXX_rv = new ArrayWrapper();
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.ctor
}

// ----------------------------------------
// Function:  void setSize
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  int size +intent(in)+value
// Requested: c_native_scalar_in
// Match:     c_default
void REF_ArrayWrapper_set_size(REF_ArrayWrapper * self, int size)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.set_size
    SH_this->setSize(size);
    // splicer end class.ArrayWrapper.method.set_size
}

// ----------------------------------------
// Function:  int getSize
// Requested: c_native_scalar_result
// Match:     c_default
int REF_ArrayWrapper_get_size(const REF_ArrayWrapper * self)
{
    const ArrayWrapper *SH_this =
        static_cast<const ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.get_size
    int SHC_rv = SH_this->getSize();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.get_size
}

// ----------------------------------------
// Function:  void allocate
// Requested: c
// Match:     c_default
void REF_ArrayWrapper_allocate(REF_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.allocate
    SH_this->allocate();
    // splicer end class.ArrayWrapper.method.allocate
}

// ----------------------------------------
// Function:  double * getArray +dimension(getSize())
// Requested: c_native_*_result
// Match:     c_default
double * REF_ArrayWrapper_get_array(REF_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.get_array
    double * SHC_rv = SH_this->getArray();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.get_array
}

// ----------------------------------------
// Function:  double * getArray +context(DSHC_rv)+dimension(getSize())
// Exact:     c_native_*_result_buf
double * REF_ArrayWrapper_get_array_bufferify(REF_ArrayWrapper * self,
    REF_SHROUD_array *DSHC_rv)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.get_array_bufferify
    double * SHC_rv = SH_this->getArray();
    DSHC_rv->cxx.addr  = SHC_rv;
    DSHC_rv->cxx.idtor = 0;
    DSHC_rv->addr.base = SHC_rv;
    DSHC_rv->type = SH_TYPE_DOUBLE;
    DSHC_rv->elem_len = sizeof(double);
    DSHC_rv->rank = 1;
    DSHC_rv->shape[0] = SH_this->getSize();
    DSHC_rv->size = DSHC_rv->shape[0];
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.get_array_bufferify
}

// ----------------------------------------
// Function:  double * getArrayConst +dimension(getSize())
// Requested: c_native_*_result
// Match:     c_default
double * REF_ArrayWrapper_get_array_const(const REF_ArrayWrapper * self)
{
    const ArrayWrapper *SH_this =
        static_cast<const ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.get_array_const
    double * SHC_rv = SH_this->getArrayConst();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.get_array_const
}

// ----------------------------------------
// Function:  double * getArrayConst +context(DSHC_rv)+dimension(getSize())
// Exact:     c_native_*_result_buf
double * REF_ArrayWrapper_get_array_const_bufferify(
    const REF_ArrayWrapper * self, REF_SHROUD_array *DSHC_rv)
{
    const ArrayWrapper *SH_this =
        static_cast<const ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.get_array_const_bufferify
    double * SHC_rv = SH_this->getArrayConst();
    DSHC_rv->cxx.addr  = SHC_rv;
    DSHC_rv->cxx.idtor = 0;
    DSHC_rv->addr.base = SHC_rv;
    DSHC_rv->type = SH_TYPE_DOUBLE;
    DSHC_rv->elem_len = sizeof(double);
    DSHC_rv->rank = 1;
    DSHC_rv->shape[0] = SH_this->getSize();
    DSHC_rv->size = DSHC_rv->shape[0];
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.get_array_const_bufferify
}

}  // extern "C"
