// wrapSingleton.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "classes.hpp"
// shroud
#include "wrapSingleton.h"

// splicer begin class.Singleton.CXX_definitions
// splicer end class.Singleton.CXX_definitions

extern "C" {

// splicer begin class.Singleton.C_definitions
// splicer end class.Singleton.C_definitions

// ----------------------------------------
// Function:  static Singleton & getReference
// Attrs:     +api(capptr)+intent(function)
// Statement: f_function_shadow_&_capptr
// start CLA_Singleton_getReference
CLA_Singleton * CLA_Singleton_getReference(CLA_Singleton * SHC_rv)
{
    // splicer begin class.Singleton.method.getReference
    classes::Singleton & SHCXX_rv = classes::Singleton::getReference();
    SHC_rv->addr = &SHCXX_rv;
    SHC_rv->idtor = 0;
    return SHC_rv;
    // splicer end class.Singleton.method.getReference
}
// end CLA_Singleton_getReference

}  // extern "C"
