// wrapArrayWrapper.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "arrayclass.hpp"
// shroud
#include "wrapArrayWrapper.h"

// splicer begin class.ArrayWrapper.CXX_definitions
// splicer end class.ArrayWrapper.CXX_definitions

extern "C" {

// splicer begin class.ArrayWrapper.C_definitions
// splicer end class.ArrayWrapper.C_definitions

// ----------------------------------------
// Function:  ArrayWrapper
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     f_ctor_shadow_scalar_capptr
ARR_ArrayWrapper * ARR_ArrayWrapper_ctor(ARR_ArrayWrapper * SHC_rv)
{
    // splicer begin class.ArrayWrapper.method.ctor
    ArrayWrapper *SHCXX_rv = new ArrayWrapper();
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.ctor
}

// ----------------------------------------
// Function:  void setSize
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int size +value
// Attrs:     +intent(in)
// Exact:     c_in_native_scalar
void ARR_ArrayWrapper_setSize(ARR_ArrayWrapper * self, int size)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.setSize
    SH_this->setSize(size);
    // splicer end class.ArrayWrapper.method.setSize
}

// ----------------------------------------
// Function:  int getSize
// Attrs:     +intent(function)
// Exact:     f_function_native_scalar
int ARR_ArrayWrapper_getSize(const ARR_ArrayWrapper * self)
{
    const ArrayWrapper *SH_this = static_cast<const ArrayWrapper *>
        (self->addr);
    // splicer begin class.ArrayWrapper.method.getSize
    int SHC_rv = SH_this->getSize();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.getSize
}

// ----------------------------------------
// Function:  void fillSize
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int & size +intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_&
void ARR_ArrayWrapper_fillSize(ARR_ArrayWrapper * self, int * size)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fillSize
    SH_this->fillSize(*size);
    // splicer end class.ArrayWrapper.method.fillSize
}

// ----------------------------------------
// Function:  void allocate
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
void ARR_ArrayWrapper_allocate(ARR_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.allocate
    SH_this->allocate();
    // splicer end class.ArrayWrapper.method.allocate
}

// ----------------------------------------
// Function:  double * getArray +dimension(getSize())
// Attrs:     +deref(pointer)+intent(function)
// Exact:     f_function_native_*_pointer
double * ARR_ArrayWrapper_getArray(ARR_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.getArray
    double * SHC_rv = SH_this->getArray();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.getArray
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  double * getArray +dimension(getSize())
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Exact:     f_function_native_*_cdesc_pointer
void ARR_ArrayWrapper_getArray_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_rv_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.getArray_bufferify
    double * SHC_rv = SH_this->getArray();
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_DOUBLE;
    SHT_rv_cdesc->elem_len = sizeof(double);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->getSize();
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.getArray_bufferify
}

// ----------------------------------------
// Function:  double * getArrayConst +dimension(getSize())
// Attrs:     +deref(pointer)+intent(function)
// Exact:     f_function_native_*_pointer
double * ARR_ArrayWrapper_getArrayConst(const ARR_ArrayWrapper * self)
{
    const ArrayWrapper *SH_this = static_cast<const ArrayWrapper *>
        (self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayConst
    double * SHC_rv = SH_this->getArrayConst();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.getArrayConst
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  double * getArrayConst +dimension(getSize())
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Exact:     f_function_native_*_cdesc_pointer
void ARR_ArrayWrapper_getArrayConst_bufferify(
    const ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_rv_cdesc)
{
    const ArrayWrapper *SH_this = static_cast<const ArrayWrapper *>
        (self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayConst_bufferify
    double * SHC_rv = SH_this->getArrayConst();
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_DOUBLE;
    SHT_rv_cdesc->elem_len = sizeof(double);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->getSize();
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.getArrayConst_bufferify
}

// ----------------------------------------
// Function:  const double * getArrayC +dimension(getSize())
// Attrs:     +deref(pointer)+intent(function)
// Exact:     f_function_native_*_pointer
const double * ARR_ArrayWrapper_getArrayC(ARR_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayC
    const double * SHC_rv = SH_this->getArrayC();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.getArrayC
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  const double * getArrayC +dimension(getSize())
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Exact:     f_function_native_*_cdesc_pointer
void ARR_ArrayWrapper_getArrayC_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_rv_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayC_bufferify
    const double * SHC_rv = SH_this->getArrayC();
    SHT_rv_cdesc->cxx.addr  = const_cast<double *>(SHC_rv);
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_DOUBLE;
    SHT_rv_cdesc->elem_len = sizeof(double);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->getSize();
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.getArrayC_bufferify
}

// ----------------------------------------
// Function:  const double * getArrayConstC +dimension(getSize())
// Attrs:     +deref(pointer)+intent(function)
// Exact:     f_function_native_*_pointer
const double * ARR_ArrayWrapper_getArrayConstC(
    const ARR_ArrayWrapper * self)
{
    const ArrayWrapper *SH_this = static_cast<const ArrayWrapper *>
        (self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayConstC
    const double * SHC_rv = SH_this->getArrayConstC();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.getArrayConstC
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  const double * getArrayConstC +dimension(getSize())
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Exact:     f_function_native_*_cdesc_pointer
void ARR_ArrayWrapper_getArrayConstC_bufferify(
    const ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_rv_cdesc)
{
    const ArrayWrapper *SH_this = static_cast<const ArrayWrapper *>
        (self->addr);
    // splicer begin class.ArrayWrapper.method.getArrayConstC_bufferify
    const double * SHC_rv = SH_this->getArrayConstC();
    SHT_rv_cdesc->cxx.addr  = const_cast<double *>(SHC_rv);
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_DOUBLE;
    SHT_rv_cdesc->elem_len = sizeof(double);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->getSize();
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.getArrayConstC_bufferify
}

// ----------------------------------------
// Function:  void fetchArrayPtr
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  double * * array +dimension(isize)+intent(out)
// Attrs:     +deref(pointer)+intent(out)
// Exact:     c_out_native_**_pointer
// ----------------------------------------
// Argument:  int * isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_*
void ARR_ArrayWrapper_fetchArrayPtr(ARR_ArrayWrapper * self,
    double * * array, int * isize)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayPtr
    SH_this->fetchArrayPtr(array, isize);
    // splicer end class.ArrayWrapper.method.fetchArrayPtr
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  void fetchArrayPtr
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  double * * array +dimension(isize)+intent(out)
// Attrs:     +api(cdesc)+deref(pointer)+intent(out)
// Exact:     c_out_native_**_cdesc_pointer
// ----------------------------------------
// Argument:  int * isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_*_hidden
void ARR_ArrayWrapper_fetchArrayPtr_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_array_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayPtr_bufferify
    double *array;
    int isize;
    SH_this->fetchArrayPtr(&array, &isize);
    SHT_array_cdesc->cxx.addr  = array;
    SHT_array_cdesc->cxx.idtor = 0;
    SHT_array_cdesc->addr.base = array;
    SHT_array_cdesc->type = SH_TYPE_DOUBLE;
    SHT_array_cdesc->elem_len = sizeof(double);
    SHT_array_cdesc->rank = 1;
    SHT_array_cdesc->shape[0] = isize;
    SHT_array_cdesc->size = SHT_array_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.fetchArrayPtr_bufferify
}

// ----------------------------------------
// Function:  void fetchArrayRef
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  double * & array +dimension(isize)+intent(out)
// Attrs:     +deref(pointer)+intent(out)
// Exact:     c_out_native_*&_pointer
// ----------------------------------------
// Argument:  int & isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_&
void ARR_ArrayWrapper_fetchArrayRef(ARR_ArrayWrapper * self,
    double * * array, int * isize)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayRef
    SH_this->fetchArrayRef(*array, *isize);
    // splicer end class.ArrayWrapper.method.fetchArrayRef
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  void fetchArrayRef
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  double * & array +dimension(isize)+intent(out)
// Attrs:     +api(cdesc)+deref(pointer)+intent(out)
// Exact:     c_out_native_*&_cdesc_pointer
// ----------------------------------------
// Argument:  int & isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_&_hidden
void ARR_ArrayWrapper_fetchArrayRef_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_array_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayRef_bufferify
    double *array;
    int isize;
    SH_this->fetchArrayRef(array, isize);
    SHT_array_cdesc->cxx.addr  = array;
    SHT_array_cdesc->cxx.idtor = 0;
    SHT_array_cdesc->addr.base = array;
    SHT_array_cdesc->type = SH_TYPE_DOUBLE;
    SHT_array_cdesc->elem_len = sizeof(double);
    SHT_array_cdesc->rank = 1;
    SHT_array_cdesc->shape[0] = isize;
    SHT_array_cdesc->size = SHT_array_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.fetchArrayRef_bufferify
}

// ----------------------------------------
// Function:  void fetchArrayPtrConst
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  const double * * array +dimension(isize)+intent(out)
// Attrs:     +deref(pointer)+intent(out)
// Exact:     c_out_native_**_pointer
// ----------------------------------------
// Argument:  int * isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_*
void ARR_ArrayWrapper_fetchArrayPtrConst(ARR_ArrayWrapper * self,
    const double * * array, int * isize)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayPtrConst
    SH_this->fetchArrayPtrConst(array, isize);
    // splicer end class.ArrayWrapper.method.fetchArrayPtrConst
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  void fetchArrayPtrConst
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  const double * * array +dimension(isize)+intent(out)
// Attrs:     +api(cdesc)+deref(pointer)+intent(out)
// Exact:     c_out_native_**_cdesc_pointer
// ----------------------------------------
// Argument:  int * isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_*_hidden
void ARR_ArrayWrapper_fetchArrayPtrConst_bufferify(
    ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_array_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayPtrConst_bufferify
    const double *array;
    int isize;
    SH_this->fetchArrayPtrConst(&array, &isize);
    SHT_array_cdesc->cxx.addr  = const_cast<double *>(array);
    SHT_array_cdesc->cxx.idtor = 0;
    SHT_array_cdesc->addr.base = array;
    SHT_array_cdesc->type = SH_TYPE_DOUBLE;
    SHT_array_cdesc->elem_len = sizeof(double);
    SHT_array_cdesc->rank = 1;
    SHT_array_cdesc->shape[0] = isize;
    SHT_array_cdesc->size = SHT_array_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.fetchArrayPtrConst_bufferify
}

// ----------------------------------------
// Function:  void fetchArrayRefConst
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  const double * & array +dimension(isize)+intent(out)
// Attrs:     +deref(pointer)+intent(out)
// Exact:     c_out_native_*&_pointer
// ----------------------------------------
// Argument:  int & isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_&
void ARR_ArrayWrapper_fetchArrayRefConst(ARR_ArrayWrapper * self,
    const double * * array, int * isize)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayRefConst
    SH_this->fetchArrayRefConst(*array, *isize);
    // splicer end class.ArrayWrapper.method.fetchArrayRefConst
}

// Generated by arg_to_buffer
// ----------------------------------------
// Function:  void fetchArrayRefConst
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  const double * & array +dimension(isize)+intent(out)
// Attrs:     +api(cdesc)+deref(pointer)+intent(out)
// Exact:     c_out_native_*&_cdesc_pointer
// ----------------------------------------
// Argument:  int & isize +hidden
// Attrs:     +intent(inout)
// Exact:     c_inout_native_&_hidden
void ARR_ArrayWrapper_fetchArrayRefConst_bufferify(
    ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_array_cdesc)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchArrayRefConst_bufferify
    const double *array;
    int isize;
    SH_this->fetchArrayRefConst(array, isize);
    SHT_array_cdesc->cxx.addr  = const_cast<double *>(array);
    SHT_array_cdesc->cxx.idtor = 0;
    SHT_array_cdesc->addr.base = array;
    SHT_array_cdesc->type = SH_TYPE_DOUBLE;
    SHT_array_cdesc->elem_len = sizeof(double);
    SHT_array_cdesc->rank = 1;
    SHT_array_cdesc->shape[0] = isize;
    SHT_array_cdesc->size = SHT_array_cdesc->shape[0];
    // splicer end class.ArrayWrapper.method.fetchArrayRefConst_bufferify
}

// ----------------------------------------
// Function:  void fetchVoidPtr
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  void * * array +intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_void_**
void ARR_ArrayWrapper_fetchVoidPtr(ARR_ArrayWrapper * self,
    void **array)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchVoidPtr
    SH_this->fetchVoidPtr(array);
    // splicer end class.ArrayWrapper.method.fetchVoidPtr
}

// ----------------------------------------
// Function:  void fetchVoidRef
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  void * & array +intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_void_*&
void ARR_ArrayWrapper_fetchVoidRef(ARR_ArrayWrapper * self,
    void * * array)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.fetchVoidRef
    SH_this->fetchVoidRef(*array);
    // splicer end class.ArrayWrapper.method.fetchVoidRef
}

// ----------------------------------------
// Function:  bool checkPtr
// Attrs:     +intent(function)
// Exact:     f_function_bool_scalar
// ----------------------------------------
// Argument:  void * array +value
// Attrs:     +intent(in)
// Exact:     c_in_void_*
bool ARR_ArrayWrapper_checkPtr(ARR_ArrayWrapper * self, void * array)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.checkPtr
    bool SHC_rv = SH_this->checkPtr(array);
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.checkPtr
}

// ----------------------------------------
// Function:  double sumArray
// Attrs:     +intent(function)
// Exact:     f_function_native_scalar
double ARR_ArrayWrapper_sumArray(ARR_ArrayWrapper * self)
{
    ArrayWrapper *SH_this = static_cast<ArrayWrapper *>(self->addr);
    // splicer begin class.ArrayWrapper.method.sumArray
    double SHC_rv = SH_this->sumArray();
    return SHC_rv;
    // splicer end class.ArrayWrapper.method.sumArray
}

}  // extern "C"
