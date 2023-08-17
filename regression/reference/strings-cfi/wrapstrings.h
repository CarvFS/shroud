// wrapstrings.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapstrings.h
 * \brief Shroud generated wrapper for strings library
 */
// For C users and C++ implementation

#ifndef WRAPSTRINGS_H
#define WRAPSTRINGS_H

// shroud
#include "typesstrings.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// shroud
#include "ISO_Fortran_binding.h"

// splicer begin C_declarations
// splicer end C_declarations

void STR_init_test(void);

void STR_passChar(char status);

void STR_passCharForce(char status);

void STR_returnChar(char *SHC_rv);

void STR_passCharPtr(char * dest, const char * src);

void STR_passCharPtr_CFI(CFI_cdesc_t *SHT_dest_cfi,
    CFI_cdesc_t *SHT_src_cfi);

void STR_passCharPtrInOut(char * s);

void STR_passCharPtrInOut_CFI(CFI_cdesc_t *SHT_s_cfi);

const char * STR_getCharPtr1(void);

void STR_getCharPtr1_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getCharPtr2(void);

void STR_getCharPtr2_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getCharPtr3(void);

void STR_getCharPtr3_CFI(CFI_cdesc_t *SHT_output_cfi);

const char * STR_getCharPtr4(void);

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
const char * STR_getCharPtr5(void);
#endif

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
void STR_getCharPtr5_CFI(CFI_cdesc_t *SHT_rv_cfi);
#endif

void STR_getConstStringResult_CFI(CFI_cdesc_t *SHT_rv_cfi);

void STR_getConstStringLen_CFI(CFI_cdesc_t *SHT_rv_cfi);

void STR_getConstStringAsArg_CFI(CFI_cdesc_t *SHT_output_cfi);

void STR_getConstStringAlloc_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringRefPure(void);

void STR_getConstStringRefPure_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringRefLen(void);

void STR_getConstStringRefLen_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringRefAsArg(void);

void STR_getConstStringRefAsArg_CFI(CFI_cdesc_t *SHT_output_cfi);

const char * STR_getConstStringRefLenEmpty(void);

void STR_getConstStringRefLenEmpty_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringRefAlloc(void);

void STR_getConstStringRefAlloc_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringPtrLen(void);

void STR_getConstStringPtrLen_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringPtrAlloc(void);

void STR_getConstStringPtrAlloc_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringPtrOwnsAlloc(void);

void STR_getConstStringPtrOwnsAlloc_CFI(CFI_cdesc_t *SHT_rv_cfi);

const char * STR_getConstStringPtrOwnsAllocPattern(void);

void STR_getConstStringPtrOwnsAllocPattern_CFI(CFI_cdesc_t *SHT_rv_cfi);

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
const char * STR_getConstStringPtrPointer(void);
#endif

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
void STR_getConstStringPtrPointer_CFI(CFI_cdesc_t *SHT_rv_cfi);
#endif

void STR_acceptStringConstReference(const char * arg1);

void STR_acceptStringConstReference_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_acceptStringReferenceOut(char * arg1);

void STR_acceptStringReferenceOut_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_acceptStringReference(char * arg1);

void STR_acceptStringReference_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_acceptStringPointerConst(const char * arg1);

void STR_acceptStringPointerConst_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_acceptStringPointer(char * arg1);

void STR_acceptStringPointer_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_fetchStringPointer(char * arg1);

void STR_fetchStringPointer_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_acceptStringPointerLen(char * arg1, int * nlen);

void STR_acceptStringPointerLen_CFI(CFI_cdesc_t *SHT_arg1_cfi,
    int * nlen);

void STR_fetchStringPointerLen(char * arg1, int * nlen);

void STR_fetchStringPointerLen_CFI(CFI_cdesc_t *SHT_arg1_cfi,
    int * nlen);

int STR_acceptStringInstance(char *arg1);

int STR_acceptStringInstance_CFI(CFI_cdesc_t *SHT_arg1_cfi);

void STR_explicit1(char * name);

void STR_explicit1_CFI(CFI_cdesc_t *SHT_name_cfi);

void STR_explicit2(char * name);

void STR_explicit2_CFI(CFI_cdesc_t *SHT_name_cfi);

void STR_CreturnChar(char *SHC_rv);

void STR_CpassCharPtr_CFI(CFI_cdesc_t *SHT_dest_cfi,
    CFI_cdesc_t *SHT_src_cfi);

void STR_CpassCharPtrBlank(char * dest, const char * src);

void STR_CpassCharPtrBlank_CFI(CFI_cdesc_t *SHT_dest_cfi,
    CFI_cdesc_t *SHT_src_cfi);

void STR_PostDeclare(int * count, char * name);

void STR_PostDeclare_CFI(CFI_cdesc_t *SHT_count_cfi,
    CFI_cdesc_t *SHT_name_cfi);

int STR_CpassCharPtrNotrim(const char * src);

int STR_CpassCharPtrNotrim_CFI(CFI_cdesc_t *SHT_src_cfi);

int STR_CpassCharPtrCAPI(void * addr, const char * src);

int STR_CpassCharPtrCAPI2(const char * in, const char * src);

int STR_CpassCharPtrCAPI2_CFI(CFI_cdesc_t *SHT_in_cfi,
    const char * src);

#ifdef __cplusplus
}
#endif

#endif  // WRAPSTRINGS_H
