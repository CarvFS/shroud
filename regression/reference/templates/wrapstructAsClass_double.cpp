// wrapstructAsClass_double.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapstructAsClass_double.h"

// cxx_header
#include "templates.hpp"

// splicer begin class.structAsClass.CXX_definitions
// splicer end class.structAsClass.CXX_definitions

extern "C" {

// splicer begin class.structAsClass.C_definitions
// splicer end class.structAsClass.C_definitions

// ----------------------------------------
// Function:  structAsClass
// Attrs:     +intent(result)
// Exact:     c_shadow_scalar_ctor
TEM_structAsClass_double * TEM_structAsClass_double_ctor(
    TEM_structAsClass_double * SHadow_rv)
{
    // splicer begin class.structAsClass.method.ctor
    structAsClass<double> *SHCXX_rv = new structAsClass<double>();
    SHadow_rv->addr = static_cast<void *>(SHCXX_rv);
    SHadow_rv->idtor = 4;
    return SHadow_rv;
    // splicer end class.structAsClass.method.ctor
}

// ----------------------------------------
// Function:  void set_npts
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  int n +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void TEM_structAsClass_double_set_npts(TEM_structAsClass_double * self,
    int n)
{
    structAsClass<double> *SH_this =
        static_cast<structAsClass<double> *>(self->addr);
    // splicer begin class.structAsClass.method.set_npts
    SH_this->set_npts(n);
    // splicer end class.structAsClass.method.set_npts
}

// ----------------------------------------
// Function:  int get_npts
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
int TEM_structAsClass_double_get_npts(TEM_structAsClass_double * self)
{
    structAsClass<double> *SH_this =
        static_cast<structAsClass<double> *>(self->addr);
    // splicer begin class.structAsClass.method.get_npts
    int SHC_rv = SH_this->get_npts();
    return SHC_rv;
    // splicer end class.structAsClass.method.get_npts
}

// ----------------------------------------
// Function:  void set_value
// Requested: c
// Match:     c_default
// ----------------------------------------
// Argument:  double v +value
// Attrs:     +intent(in)
// Requested: c_native_scalar_in
// Match:     c_default
void TEM_structAsClass_double_set_value(TEM_structAsClass_double * self,
    double v)
{
    structAsClass<double> *SH_this =
        static_cast<structAsClass<double> *>(self->addr);
    // splicer begin class.structAsClass.method.set_value
    SH_this->set_value(v);
    // splicer end class.structAsClass.method.set_value
}

// ----------------------------------------
// Function:  double get_value
// Attrs:     +intent(result)
// Requested: c_native_scalar_result
// Match:     c_default
double TEM_structAsClass_double_get_value(
    TEM_structAsClass_double * self)
{
    structAsClass<double> *SH_this =
        static_cast<structAsClass<double> *>(self->addr);
    // splicer begin class.structAsClass.method.get_value
    double SHC_rv = SH_this->get_value();
    return SHC_rv;
    // splicer end class.structAsClass.method.get_value
}

}  // extern "C"
