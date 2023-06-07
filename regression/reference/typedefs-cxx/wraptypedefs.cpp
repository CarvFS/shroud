// wraptypedefs.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "typedefs.h"
// shroud
#include "wraptypedefs.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

// ----------------------------------------
// Function:  TypeID typefunc
// Attrs:     +intent(function)
// Requested: c_function_native_scalar
// Match:     c_function
// ----------------------------------------
// Argument:  TypeID arg +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// start TYP_typefunc
TYP_TypeID TYP_typefunc(TYP_TypeID arg)
{
    // splicer begin function.typefunc
    TypeID SHC_rv = typefunc(arg);
    return SHC_rv;
    // splicer end function.typefunc
}
// end TYP_typefunc

// ----------------------------------------
// Function:  void typestruct
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
// ----------------------------------------
// Argument:  Struct1Rename * arg1
// Attrs:     +intent(inout)
// Requested: c_inout_struct_*
// Match:     c_inout_struct
// start TYP_typestruct
void TYP_typestruct(TYP_Struct1Rename * arg1)
{
    // splicer begin function.typestruct
    Struct1Rename * SHCXX_arg1 = static_cast<Struct1Rename *>
        (static_cast<void *>(arg1));
    typestruct(SHCXX_arg1);
    // splicer end function.typestruct
}
// end TYP_typestruct

// ----------------------------------------
// Function:  int returnBytesForIndexType
// Attrs:     +intent(function)
// Requested: c_function_native_scalar
// Match:     c_function
// ----------------------------------------
// Argument:  IndexType arg +value
// Attrs:     +intent(in)
// Requested: c_in_native_scalar
// Match:     c_default
// start TYP_returnBytesForIndexType
int TYP_returnBytesForIndexType(TYP_IndexType arg)
{
    // splicer begin function.return_bytes_for_index_type
    IndexType SHCXX_arg = static_cast<IndexType>(arg);
    int SHC_rv = returnBytesForIndexType(SHCXX_arg);
    return SHC_rv;
    // splicer end function.return_bytes_for_index_type
}
// end TYP_returnBytesForIndexType

}  // extern "C"
