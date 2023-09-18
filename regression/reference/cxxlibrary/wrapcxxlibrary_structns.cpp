// wrapcxxlibrary_structns.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "cxxlibrary.hpp"
// shroud
#include "wrapcxxlibrary_structns.h"

// splicer begin namespace.structns.CXX_definitions
// splicer end namespace.structns.CXX_definitions

extern "C" {

// splicer begin namespace.structns.C_definitions
// splicer end namespace.structns.C_definitions

/**
 * Argument is modified by library, defaults to intent(inout).
 */
// ----------------------------------------
// Function:  int passStructByReference
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  Cstruct1 & arg
// Attrs:     +intent(inout)
// Statement: f_inout_struct_&
int CXX_structns_passStructByReference(CXX_cstruct1 * arg)
{
    // splicer begin namespace.structns.function.passStructByReference
    structns::Cstruct1 * SHCXX_arg = static_cast<structns::Cstruct1 *>
        (static_cast<void *>(arg));
    int SHC_rv = structns::passStructByReference(*SHCXX_arg);
    return SHC_rv;
    // splicer end namespace.structns.function.passStructByReference
}

/**
 * const defaults to intent(in)
 */
// ----------------------------------------
// Function:  int passStructByReferenceIn
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  const Cstruct1 & arg
// Attrs:     +intent(in)
// Statement: f_in_struct_&
int CXX_structns_passStructByReferenceIn(const CXX_cstruct1 * arg)
{
    // splicer begin namespace.structns.function.passStructByReferenceIn
    const structns::Cstruct1 * SHCXX_arg = 
        static_cast<const structns::Cstruct1 *>
        (static_cast<const void *>(arg));
    int SHC_rv = structns::passStructByReferenceIn(*SHCXX_arg);
    return SHC_rv;
    // splicer end namespace.structns.function.passStructByReferenceIn
}

// ----------------------------------------
// Function:  void passStructByReferenceInout
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  Cstruct1 & arg +intent(inout)
// Attrs:     +intent(inout)
// Statement: f_inout_struct_&
void CXX_structns_passStructByReferenceInout(CXX_cstruct1 * arg)
{
    // splicer begin namespace.structns.function.passStructByReferenceInout
    structns::Cstruct1 * SHCXX_arg = static_cast<structns::Cstruct1 *>
        (static_cast<void *>(arg));
    structns::passStructByReferenceInout(*SHCXX_arg);
    // splicer end namespace.structns.function.passStructByReferenceInout
}

// ----------------------------------------
// Function:  void passStructByReferenceOut
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  Cstruct1 & arg +intent(out)
// Attrs:     +intent(out)
// Statement: f_out_struct_&
void CXX_structns_passStructByReferenceOut(CXX_cstruct1 * arg)
{
    // splicer begin namespace.structns.function.passStructByReferenceOut
    structns::Cstruct1 * SHCXX_arg = static_cast<structns::Cstruct1 *>
        (static_cast<void *>(arg));
    structns::passStructByReferenceOut(*SHCXX_arg);
    // splicer end namespace.structns.function.passStructByReferenceOut
}

}  // extern "C"
