// typesstruct.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
// For C users and C++ implementation

#ifndef TYPESSTRUCT_H
#define TYPESSTRUCT_H


#ifdef __cplusplus
extern "C" {
#endif

// start struct STR_Cstruct_as_class
// helper capsule_STR_Cstruct_as_class
struct s_STR_Cstruct_as_class {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_STR_Cstruct_as_class STR_Cstruct_as_class;
// end struct STR_Cstruct_as_class

// start struct STR_Cstruct_as_subclass
// helper capsule_STR_Cstruct_as_subclass
struct s_STR_Cstruct_as_subclass {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_STR_Cstruct_as_subclass STR_Cstruct_as_subclass;
// end struct STR_Cstruct_as_subclass

// helper capsule_data_helper
struct s_STR_SHROUD_capsule_data {
    void *addr;     /* address of C++ memory */
    int idtor;      /* index of destructor */
};
typedef struct s_STR_SHROUD_capsule_data STR_SHROUD_capsule_data;

void STR_SHROUD_memory_destructor(STR_SHROUD_capsule_data *cap);

#ifdef __cplusplus
}
#endif

#endif  // TYPESSTRUCT_H
