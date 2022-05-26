// wrapownership.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "ownership.hpp"
// shroud
#include "wrapownership.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

// ----------------------------------------
// Function:  int * ReturnIntPtrRaw +deref(raw)
// Attrs:     +deref(raw)+intent(function)
// Requested: c_function_native_*_raw
// Match:     c_function_native_*
int * OWN_return_int_ptr_raw(void)
{
    // splicer begin function.return_int_ptr_raw
    int * SHC_rv = ReturnIntPtrRaw();
    return SHC_rv;
    // splicer end function.return_int_ptr_raw
}

// ----------------------------------------
// Function:  int * ReturnIntPtrScalar +deref(scalar)
// Attrs:     +deref(scalar)+intent(function)
// Exact:     c_function_native_*_scalar
int OWN_return_int_ptr_scalar(void)
{
    // splicer begin function.return_int_ptr_scalar
    int * SHC_rv = ReturnIntPtrScalar();
    return *SHC_rv;
    // splicer end function.return_int_ptr_scalar
}

// ----------------------------------------
// Function:  int * ReturnIntPtrPointer +deref(pointer)
// Attrs:     +deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
int * OWN_return_int_ptr_pointer(void)
{
    // splicer begin function.return_int_ptr_pointer
    int * SHC_rv = ReturnIntPtrPointer();
    return SHC_rv;
    // splicer end function.return_int_ptr_pointer
}

// ----------------------------------------
// Function:  int * ReturnIntPtrPointer +deref(pointer)
// Attrs:     +api(buf)+deref(pointer)+intent(function)
// Requested: c_function_native_*_buf_pointer
// Match:     c_function_native_*
int * OWN_return_int_ptr_pointer_bufferify(void)
{
    // splicer begin function.return_int_ptr_pointer_bufferify
    int * SHC_rv = ReturnIntPtrPointer();
    return SHC_rv;
    // splicer end function.return_int_ptr_pointer_bufferify
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimRaw +deref(raw)
// Attrs:     +deref(raw)+intent(function)
// Requested: c_function_native_*_raw
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_raw(int * len)
{
    // splicer begin function.return_int_ptr_dim_raw
    int * SHC_rv = ReturnIntPtrDimRaw(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_raw
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimPointer +deref(pointer)+dimension(len)
// Attrs:     +deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
// start OWN_return_int_ptr_dim_pointer
int * OWN_return_int_ptr_dim_pointer(int * len)
{
    // splicer begin function.return_int_ptr_dim_pointer
    int * SHC_rv = ReturnIntPtrDimPointer(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_pointer
}
// end OWN_return_int_ptr_dim_pointer

// ----------------------------------------
// Function:  int * ReturnIntPtrDimPointer +deref(pointer)+dimension(len)
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Requested: c_function_native_*_cdesc_pointer
// Match:     c_function_native_*_cdesc
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_*_hidden
// start OWN_return_int_ptr_dim_pointer_bufferify
void OWN_return_int_ptr_dim_pointer_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.return_int_ptr_dim_pointer_bufferify
    int len;
    int * SHC_rv = ReturnIntPtrDimPointer(&len);
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = len;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end function.return_int_ptr_dim_pointer_bufferify
}
// end OWN_return_int_ptr_dim_pointer_bufferify

// ----------------------------------------
// Function:  int * ReturnIntPtrDimAlloc +deref(allocatable)+dimension(len)
// Attrs:     +deref(allocatable)+intent(function)
// Requested: c_function_native_*_allocatable
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
// start OWN_return_int_ptr_dim_alloc
int * OWN_return_int_ptr_dim_alloc(int * len)
{
    // splicer begin function.return_int_ptr_dim_alloc
    int * SHC_rv = ReturnIntPtrDimAlloc(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_alloc
}
// end OWN_return_int_ptr_dim_alloc

// ----------------------------------------
// Function:  int * ReturnIntPtrDimAlloc +deref(allocatable)+dimension(len)
// Attrs:     +api(cdesc)+deref(allocatable)+intent(function)
// Requested: c_function_native_*_cdesc_allocatable
// Match:     c_function_native_*_cdesc
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_*_hidden
// start OWN_return_int_ptr_dim_alloc_bufferify
void OWN_return_int_ptr_dim_alloc_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.return_int_ptr_dim_alloc_bufferify
    int len;
    int * SHC_rv = ReturnIntPtrDimAlloc(&len);
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = len;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end function.return_int_ptr_dim_alloc_bufferify
}
// end OWN_return_int_ptr_dim_alloc_bufferify

// ----------------------------------------
// Function:  int * ReturnIntPtrDimDefault +dimension(len)
// Attrs:     +deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_default(int * len)
{
    // splicer begin function.return_int_ptr_dim_default
    int * SHC_rv = ReturnIntPtrDimDefault(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_default
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimDefault +dimension(len)
// Attrs:     +api(cdesc)+deref(pointer)+intent(function)
// Requested: c_function_native_*_cdesc_pointer
// Match:     c_function_native_*_cdesc
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_*_hidden
void OWN_return_int_ptr_dim_default_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.return_int_ptr_dim_default_bufferify
    int len;
    int * SHC_rv = ReturnIntPtrDimDefault(&len);
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = len;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end function.return_int_ptr_dim_default_bufferify
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimRawNew +dimension(len)+owner(caller)
// Attrs:     +capsule+deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_raw_new(int * len)
{
    // splicer begin function.return_int_ptr_dim_raw_new
    int * SHC_rv = ReturnIntPtrDimRawNew(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_raw_new
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimPointerNew +deref(pointer)+dimension(len)+owner(caller)
// Attrs:     +capsule+deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_pointer_new(int * len)
{
    // splicer begin function.return_int_ptr_dim_pointer_new
    int * SHC_rv = ReturnIntPtrDimPointerNew(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_pointer_new
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimPointerNew +deref(pointer)+dimension(len)+owner(caller)
// Attrs:     +api(cdesc)+capsule+deref(pointer)+intent(function)
// Requested: c_function_native_*_cdesc_pointer
// Match:     c_function_native_*_cdesc
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_*_hidden
void OWN_return_int_ptr_dim_pointer_new_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.return_int_ptr_dim_pointer_new_bufferify
    int len;
    int * SHC_rv = ReturnIntPtrDimPointerNew(&len);
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 2;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = len;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end function.return_int_ptr_dim_pointer_new_bufferify
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimAllocNew +deref(allocatable)+dimension(len)+owner(caller)
// Attrs:     +deref(allocatable)+intent(function)
// Requested: c_function_native_*_allocatable
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_alloc_new(int * len)
{
    // splicer begin function.return_int_ptr_dim_alloc_new
    int * SHC_rv = ReturnIntPtrDimAllocNew(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_alloc_new
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimDefaultNew +dimension(len)+owner(caller)
// Attrs:     +capsule+deref(pointer)+intent(function)
// Requested: c_function_native_*_pointer
// Match:     c_function_native_*
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Requested: c_out_native_*
// Match:     c_default
int * OWN_return_int_ptr_dim_default_new(int * len)
{
    // splicer begin function.return_int_ptr_dim_default_new
    int * SHC_rv = ReturnIntPtrDimDefaultNew(len);
    return SHC_rv;
    // splicer end function.return_int_ptr_dim_default_new
}

// ----------------------------------------
// Function:  int * ReturnIntPtrDimDefaultNew +dimension(len)+owner(caller)
// Attrs:     +api(cdesc)+capsule+deref(pointer)+intent(function)
// Requested: c_function_native_*_cdesc_pointer
// Match:     c_function_native_*_cdesc
// ----------------------------------------
// Argument:  int * len +hidden+intent(out)
// Attrs:     +intent(out)
// Exact:     c_out_native_*_hidden
void OWN_return_int_ptr_dim_default_new_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.return_int_ptr_dim_default_new_bufferify
    int len;
    int * SHC_rv = ReturnIntPtrDimDefaultNew(&len);
    SHT_rv_cdesc->cxx.addr  = SHC_rv;
    SHT_rv_cdesc->cxx.idtor = 2;
    SHT_rv_cdesc->addr.base = SHC_rv;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = len;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end function.return_int_ptr_dim_default_new_bufferify
}

// ----------------------------------------
// Function:  void createClassStatic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  int flag +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void OWN_create_class_static(int flag)
{
    // splicer begin function.create_class_static
    createClassStatic(flag);
    // splicer end function.create_class_static
}

// ----------------------------------------
// Function:  Class1 * getClassStatic +owner(library)
// Attrs:     +api(capptr)+intent(function)
// Exact:     c_function_shadow_*_capptr
OWN_Class1 * OWN_get_class_static(OWN_Class1 * SHC_rv)
{
    // splicer begin function.get_class_static
    Class1 * SHCXX_rv = getClassStatic();
    SHC_rv->addr = SHCXX_rv;
    SHC_rv->idtor = 0;
    return SHC_rv;
    // splicer end function.get_class_static
}

/**
 * \brief Return pointer to new Class1 instance.
 *
 */
// ----------------------------------------
// Function:  Class1 * getClassNew +owner(caller)
// Attrs:     +api(capptr)+intent(function)
// Exact:     c_function_shadow_*_capptr
// ----------------------------------------
// Argument:  int flag +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
OWN_Class1 * OWN_get_class_new(int flag, OWN_Class1 * SHC_rv)
{
    // splicer begin function.get_class_new
    Class1 * SHCXX_rv = getClassNew(flag);
    SHC_rv->addr = SHCXX_rv;
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end function.get_class_new
}

}  // extern "C"
