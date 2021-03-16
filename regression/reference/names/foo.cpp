// foo.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "foo.h"

// splicer begin namespace.ns0.class.Names.CXX_definitions
// CXX_definitions for ns0 class Names
// splicer end namespace.ns0.class.Names.CXX_definitions

extern "C" {

// splicer begin namespace.ns0.class.Names.C_definitions
// splicer end namespace.ns0.class.Names.C_definitions

// ----------------------------------------
// Function:  Names +name(defaultctor)
// Attrs:     +intent(ctor)
// Requested: c_ctor_shadow_scalar
// Match:     c_ctor
TES_ns0_Names * XXX_TES_ns0_Names_defaultctor(TES_ns0_Names * SHadow_rv)
{
    // splicer begin namespace.ns0.class.Names.method.defaultctor
    ns0::Names *ARG_rv = new ns0::Names();
    SHadow_rv->addr = static_cast<void *>(ARG_rv);
    SHadow_rv->idtor = 1;
    return SHadow_rv;
    // splicer end namespace.ns0.class.Names.method.defaultctor
}

// ----------------------------------------
// Function:  void method1
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
void XXX_TES_ns0_Names_method1(TES_ns0_Names * self)
{
    ns0::Names *SH_this = static_cast<ns0::Names *>(self->addr);
    // splicer begin namespace.ns0.class.Names.method.method1
    SH_this->method1();
    // splicer end namespace.ns0.class.Names.method.method1
}

// ----------------------------------------
// Function:  void method2
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
void XXX_TES_ns0_Names_method2(TES_ns0_Names * self2)
{
    ns0::Names *SH_this2 = static_cast<ns0::Names *>(self2->addr);
    // splicer begin namespace.ns0.class.Names.method.method2
    SH_this->method2();
    // splicer end namespace.ns0.class.Names.method.method2
}

}  // extern "C"
