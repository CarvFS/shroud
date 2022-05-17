// typesscope.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
// For C users and C++ implementation

#ifndef TYPESSCOPE_H
#define TYPESSCOPE_H


#ifdef __cplusplus
extern "C" {
#endif

// helper capsule_SCO_Class1
struct s_SCO_Class1 {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_SCO_Class1 SCO_Class1;

// helper capsule_SCO_Class2
struct s_SCO_Class2 {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_SCO_Class2 SCO_Class2;

// helper capsule_data_helper
struct s_SCO_SHROUD_capsule_data {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_SCO_SHROUD_capsule_data SCO_SHROUD_capsule_data;

void SCO_SHROUD_memory_destructor(SCO_SHROUD_capsule_data *cap);

#ifdef __cplusplus
}
#endif

#endif  // TYPESSCOPE_H
