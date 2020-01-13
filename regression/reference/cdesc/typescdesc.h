// typescdesc.h
// This is generated code, do not edit
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
// For C users and C++ implementation

#ifndef TYPESCDESC_H
#define TYPESCDESC_H

#include <stddef.h>


#ifdef __cplusplus
extern "C" {
#endif

struct s_CDE_SHROUD_capsule_data {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_CDE_SHROUD_capsule_data CDE_SHROUD_capsule_data;

struct s_CDE_SHROUD_array {
    CDE_SHROUD_capsule_data cxx;      /* address of C++ memory */
    union {
        const void * base;
        const char * ccharp;
    } addr;
    int type;        /* type of element */
    size_t elem_len; /* bytes-per-item or character len in c++ */
    size_t size;     /* size of data in c++ */
    int rank;        /* number of dimensions */
};
typedef struct s_CDE_SHROUD_array CDE_SHROUD_array;

void CDE_SHROUD_memory_destructor(CDE_SHROUD_capsule_data *cap);

#ifdef __cplusplus
}
#endif

#endif  // TYPESCDESC_H
