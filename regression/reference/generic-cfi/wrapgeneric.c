// wrapgeneric.c
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "generic.h"
#include "helper.h"
// shroud
#include "wrapgeneric.h"

// splicer begin C_definitions
// splicer end C_definitions

/**
 * \brief scalar or array argument using assumed rank
 *
 */
// Generated by arg_to_cfi
// ----------------------------------------
// Function:  int SumValues
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  const int * values +dimension(..)
// Attrs:     +api(cfi)+assumed-rank+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int nvalues +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
int GEN_SumValues_CFI(CFI_cdesc_t *SHT_values_cfi, int nvalues)
{
    // splicer begin function.SumValues_CFI
    int *SHCXX_values = (int *) SHT_values_cfi->base_addr;
    int SHC_rv = SumValues(SHCXX_values, nvalues);
    return SHC_rv;
    // splicer end function.SumValues_CFI
}

/**
 * Broadcast if nfrom == 1
 * Copy if nfrom == nto
 */
// Generated by fortran_generic
// ----------------------------------------
// Function:  void AssignValues
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  const int * from
// Attrs:     +intent(in)
// Statement: f_in_native_*
// ----------------------------------------
// Argument:  int nfrom +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  int * to
// Attrs:     +intent(inout)
// Statement: f_inout_native_*
// ----------------------------------------
// Argument:  int nto +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_AssignValues_scalar(const int * from, int nfrom, int * to,
    int nto)
{
    // splicer begin function.AssignValues_scalar
    AssignValues(from, nfrom, to, nto);
    // splicer end function.AssignValues_scalar
}

/**
 * Broadcast if nfrom == 1
 * Copy if nfrom == nto
 */
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void AssignValues
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  const int * from
// Attrs:     +intent(in)
// Statement: f_in_native_*
// ----------------------------------------
// Argument:  int nfrom +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  int * to +rank(1)
// Attrs:     +api(cfi)+intent(inout)
// Statement: f_inout_native_*_cfi
// ----------------------------------------
// Argument:  int nto +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_AssignValues_broadcast_CFI(const int * from, int nfrom,
    CFI_cdesc_t *SHT_to_cfi, int nto)
{
    // splicer begin function.AssignValues_broadcast_CFI
    int *SHCXX_to = (int *) SHT_to_cfi->base_addr;
    AssignValues(from, nfrom, SHCXX_to, nto);
    // splicer end function.AssignValues_broadcast_CFI
}

/**
 * Broadcast if nfrom == 1
 * Copy if nfrom == nto
 */
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void AssignValues
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  const int * from +rank(1)
// Attrs:     +api(cfi)+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int nfrom +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  int * to +rank(1)
// Attrs:     +api(cfi)+intent(inout)
// Statement: f_inout_native_*_cfi
// ----------------------------------------
// Argument:  int nto +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_AssignValues_copy_CFI(CFI_cdesc_t *SHT_from_cfi, int nfrom,
    CFI_cdesc_t *SHT_to_cfi, int nto)
{
    // splicer begin function.AssignValues_copy_CFI
    int *SHCXX_from = (int *) SHT_from_cfi->base_addr;
    int *SHCXX_to = (int *) SHT_to_cfi->base_addr;
    AssignValues(SHCXX_from, nfrom, SHCXX_to, nto);
    // splicer end function.AssignValues_copy_CFI
}

#if 1
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void SavePointer
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * addr +intent(in)+rank(1)
// Attrs:     +api(cfi)+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int type +implied(T_FLOAT)+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  size_t size +implied(size(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_SavePointer_float1d_CFI(CFI_cdesc_t *SHT_addr_cfi, int type,
    size_t size)
{
    // splicer begin function.SavePointer_float1d_CFI
    float *SHCXX_addr = (float *) SHT_addr_cfi->base_addr;
    SavePointer(SHCXX_addr, type, size);
    // splicer end function.SavePointer_float1d_CFI
}
#endif  // if 1

#if 1
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void SavePointer
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * addr +intent(in)+rank(2)
// Attrs:     +api(cfi)+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int type +implied(T_FLOAT)+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  size_t size +implied(size(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_SavePointer_float2d_CFI(CFI_cdesc_t *SHT_addr_cfi, int type,
    size_t size)
{
    // splicer begin function.SavePointer_float2d_CFI
    float *SHCXX_addr = (float *) SHT_addr_cfi->base_addr;
    SavePointer(SHCXX_addr, type, size);
    // splicer end function.SavePointer_float2d_CFI
}
#endif  // if 1

// ----------------------------------------
// Function:  void SavePointer2
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  void * addr +value
// Attrs:     +intent(in)
// Statement: f_in_void_*
// ----------------------------------------
// Argument:  int type +implied(type(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  size_t size +implied(size(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_SavePointer2(void * addr, int type, size_t size)
{
    // splicer begin function.SavePointer2
    // Test adding a blank line below.

    type = convert_type(type);
    SavePointer2(addr, type, size);
    // splicer end function.SavePointer2
}

// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void SavePointer2
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * addr +intent(in)+rank(1)
// Attrs:     +api(cfi)+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int type +implied(type(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  size_t size +implied(size(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_SavePointer2_float1d_CFI(CFI_cdesc_t *SHT_addr_cfi, int type,
    size_t size)
{
    // splicer begin function.SavePointer2_float1d_CFI
    float *SHCXX_addr = (float *) SHT_addr_cfi->base_addr;
    // Test adding a blank line below.

    type = convert_type(type);
    SavePointer2(SHCXX_addr, type, size);
    // splicer end function.SavePointer2_float1d_CFI
}

// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void SavePointer2
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * addr +intent(in)+rank(2)
// Attrs:     +api(cfi)+intent(in)
// Statement: f_in_native_*_cfi
// ----------------------------------------
// Argument:  int type +implied(type(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
// ----------------------------------------
// Argument:  size_t size +implied(size(addr))+value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
void GEN_SavePointer2_float2d_CFI(CFI_cdesc_t *SHT_addr_cfi, int type,
    size_t size)
{
    // splicer begin function.SavePointer2_float2d_CFI
    float *SHCXX_addr = (float *) SHT_addr_cfi->base_addr;
    // Test adding a blank line below.

    type = convert_type(type);
    SavePointer2(SHCXX_addr, type, size);
    // splicer end function.SavePointer2_float2d_CFI
}

#if 0
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void GetPointerAsPointer
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * * addr +deref(pointer)+intent(out)+rank(1)
// Attrs:     +api(cfi)+deref(pointer)+intent(out)
// Statement: f_out_native_**_cfi_pointer
// ----------------------------------------
// Argument:  int * type +hidden+intent(out)
// Attrs:     +intent(out)
// Statement: f_out_native_*_hidden
// ----------------------------------------
// Argument:  size_t * size +hidden+intent(out)
// Attrs:     +intent(out)
// Statement: f_out_native_*_hidden
void GEN_GetPointerAsPointer_float1d_CFI(CFI_cdesc_t *SHT_addr_cfi)
{
    // splicer begin function.GetPointerAsPointer_float1d_CFI
    float * SHCXX_addr;
    int type;
    size_t size;
    GetPointerAsPointer(&SHCXX_addr, &type, &size);
    {
        CFI_CDESC_T(0) SHC_addr_fptr;
        CFI_cdesc_t *SHC_addr_cdesc = (CFI_cdesc_t *) &SHC_addr_fptr;
        void *SHC_addr_cptr = const_cast<float *>(SHCXX_addr);
        int SHC_addr_err = CFI_establish(SHC_addr_cdesc, SHC_addr_cptr,
            CFI_attribute_pointer, CFI_type_float, 0, 0, NULL);
        if (SHC_addr_err == CFI_SUCCESS) {
            SHC_addr_err = CFI_setpointer(SHT_addr_cfi, SHC_addr_cdesc,
                NULL);
        }
    }
    // splicer end function.GetPointerAsPointer_float1d_CFI
}
#endif  // if 0

#if 0
// Generated by arg_to_cfi - fortran_generic
// ----------------------------------------
// Function:  void GetPointerAsPointer
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  float * * addr +deref(pointer)+intent(out)+rank(2)
// Attrs:     +api(cfi)+deref(pointer)+intent(out)
// Statement: f_out_native_**_cfi_pointer
// ----------------------------------------
// Argument:  int * type +hidden+intent(out)
// Attrs:     +intent(out)
// Statement: f_out_native_*_hidden
// ----------------------------------------
// Argument:  size_t * size +hidden+intent(out)
// Attrs:     +intent(out)
// Statement: f_out_native_*_hidden
void GEN_GetPointerAsPointer_float2d_CFI(CFI_cdesc_t *SHT_addr_cfi)
{
    // splicer begin function.GetPointerAsPointer_float2d_CFI
    float * SHCXX_addr;
    int type;
    size_t size;
    GetPointerAsPointer(&SHCXX_addr, &type, &size);
    {
        CFI_CDESC_T(0) SHC_addr_fptr;
        CFI_cdesc_t *SHC_addr_cdesc = (CFI_cdesc_t *) &SHC_addr_fptr;
        void *SHC_addr_cptr = const_cast<float *>(SHCXX_addr);
        int SHC_addr_err = CFI_establish(SHC_addr_cdesc, SHC_addr_cptr,
            CFI_attribute_pointer, CFI_type_float, 0, 0, NULL);
        if (SHC_addr_err == CFI_SUCCESS) {
            SHC_addr_err = CFI_setpointer(SHT_addr_cfi, SHC_addr_cdesc,
                NULL);
        }
    }
    // splicer end function.GetPointerAsPointer_float2d_CFI
}
#endif  // if 0

// ----------------------------------------
// Function:  StructAsClass * CreateStructAsClass
// Attrs:     +api(capptr)+intent(function)
// Statement: f_function_shadow_*_capptr
GEN_StructAsClass * GEN_CreateStructAsClass(GEN_StructAsClass * SHC_rv)
{
    // splicer begin function.CreateStructAsClass
    StructAsClass * SHCXX_rv = CreateStructAsClass();
    SHC_rv->addr = SHCXX_rv;
    SHC_rv->idtor = 0;
    return SHC_rv;
    // splicer end function.CreateStructAsClass
}

// ----------------------------------------
// Function:  long UpdateStructAsClass
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  StructAsClass * arg
// Attrs:     +intent(inout)
// Statement: f_inout_shadow_*
// ----------------------------------------
// Argument:  long inew +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
long GEN_UpdateStructAsClass(GEN_StructAsClass * arg, long inew)
{
    // splicer begin function.UpdateStructAsClass
    StructAsClass * SHCXX_arg = (StructAsClass *) arg->addr;
    long SHC_rv = UpdateStructAsClass(SHCXX_arg, inew);
    return SHC_rv;
    // splicer end function.UpdateStructAsClass
}

// Generated by fortran_generic
// ----------------------------------------
// Function:  long UpdateStructAsClass
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  StructAsClass * arg
// Attrs:     +intent(inout)
// Statement: f_inout_shadow_*
// ----------------------------------------
// Argument:  int inew +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
long GEN_UpdateStructAsClass_int(GEN_StructAsClass * arg, int inew)
{
    // splicer begin function.UpdateStructAsClass_int
    StructAsClass * SHCXX_arg = (StructAsClass *) arg->addr;
    long SHC_rv = UpdateStructAsClass(SHCXX_arg, inew);
    return SHC_rv;
    // splicer end function.UpdateStructAsClass_int
}

// Generated by fortran_generic
// ----------------------------------------
// Function:  long UpdateStructAsClass
// Attrs:     +intent(function)
// Statement: f_function_native_scalar
// ----------------------------------------
// Argument:  StructAsClass * arg
// Attrs:     +intent(inout)
// Statement: f_inout_shadow_*
// ----------------------------------------
// Argument:  long inew +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
long GEN_UpdateStructAsClass_long(GEN_StructAsClass * arg, long inew)
{
    // splicer begin function.UpdateStructAsClass_long
    StructAsClass * SHCXX_arg = (StructAsClass *) arg->addr;
    long SHC_rv = UpdateStructAsClass(SHCXX_arg, inew);
    return SHC_rv;
    // splicer end function.UpdateStructAsClass_long
}
