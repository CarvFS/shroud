// wrapdefaultarg.cpp
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
#include "wrapdefaultarg.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_nelems(IndexType num_elems)
{
    // splicer begin function.apply_generic_nelems
    apply_generic(num_elems);
    // splicer end function.apply_generic_nelems
}

// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_nelems_offset(IndexType num_elems,
    IndexType offset)
{
    // splicer begin function.apply_generic_nelems_offset
    apply_generic(num_elems, offset);
    // splicer end function.apply_generic_nelems_offset
}

// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_nelems_offset_stride(IndexType num_elems,
    IndexType offset, IndexType stride)
{
    // splicer begin function.apply_generic_nelems_offset_stride
    apply_generic(num_elems, offset, stride);
    // splicer end function.apply_generic_nelems_offset_stride
}

#if INDETYPE_SIZE == 64
// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_type_nelems(DEF_TypeID type, IndexType num_elems)
{
    // splicer begin function.apply_generic_type_nelems
    TypeID SHCXX_type = static_cast<TypeID>(type);
    apply_generic(SHCXX_type, num_elems);
    // splicer end function.apply_generic_type_nelems
}
#endif  // if INDETYPE_SIZE == 64

#if INDETYPE_SIZE == 64
// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_type_nelems_offset(DEF_TypeID type,
    IndexType num_elems, IndexType offset)
{
    // splicer begin function.apply_generic_type_nelems_offset
    TypeID SHCXX_type = static_cast<TypeID>(type);
    apply_generic(SHCXX_type, num_elems, offset);
    // splicer end function.apply_generic_type_nelems_offset
}
#endif  // if INDETYPE_SIZE == 64

#if INDETYPE_SIZE == 64
// ----------------------------------------
// Function:  void apply_generic
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_generic_type_nelems_offset_stride(DEF_TypeID type,
    IndexType num_elems, IndexType offset, IndexType stride)
{
    // splicer begin function.apply_generic_type_nelems_offset_stride
    TypeID SHCXX_type = static_cast<TypeID>(type);
    apply_generic(SHCXX_type, num_elems, offset, stride);
    // splicer end function.apply_generic_type_nelems_offset_stride
}
#endif  // if INDETYPE_SIZE == 64

// ----------------------------------------
// Function:  void apply_require
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_require_0(IndexType num_elems, IndexType offset,
    IndexType stride)
{
    // splicer begin function.apply_require_0
    apply_require(num_elems, offset, stride);
    // splicer end function.apply_require_0
}

// ----------------------------------------
// Function:  void apply_require
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_require_1(DEF_TypeID type, IndexType num_elems,
    IndexType offset, IndexType stride)
{
    // splicer begin function.apply_require_1
    TypeID SHCXX_type = static_cast<TypeID>(type);
    apply_require(SHCXX_type, num_elems, offset, stride);
    // splicer end function.apply_require_1
}

// ----------------------------------------
// Function:  void apply_optional
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_optional_0(IndexType num_elems, IndexType offset,
    IndexType stride)
{
    // splicer begin function.apply_optional_0
    apply_optional(num_elems, offset, stride);
    // splicer end function.apply_optional_0
}

#if INDETYPE_SIZE == 64
// ----------------------------------------
// Function:  void apply_optional
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  TypeID type +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType num_elems +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType offset=0 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// ----------------------------------------
// Argument:  IndexType stride=1 +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
void DEF_apply_optional_1(DEF_TypeID type, IndexType num_elems,
    IndexType offset, IndexType stride)
{
    // splicer begin function.apply_optional_1
    TypeID SHCXX_type = static_cast<TypeID>(type);
    apply_optional(SHCXX_type, num_elems, offset, stride);
    // splicer end function.apply_optional_1
}
#endif  // if INDETYPE_SIZE == 64

}  // extern "C"
