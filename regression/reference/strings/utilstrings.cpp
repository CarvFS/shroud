// utilstrings.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// typemap
#include <string>
// shroud
#include "typesstrings.h"
#include <cstddef>
#include <cstring>


#ifdef __cplusplus
extern "C" {
#endif

// start helper array_string_allocatable
// helper array_string_allocatable
// Copy the std::string array into Fortran array.
// Called by Fortran to deal with allocatable character.
// out is already blank filled.
void STR_ShroudArrayStringAllocatable(STR_SHROUD_array *outdesc, STR_SHROUD_capsule_data *vec, size_t nlen)
{
    std::string *cxxvec = static_cast< std::string * >(vec->addr);
    STR_ShroudArrayStringOut(outdesc, cxxvec);
    STR_SHROUD_memory_destructor(vec); // delete data->cxx.addr
}
// end helper array_string_allocatable


// start helper copy_string
// helper copy_string
// Copy the char* or std::string in context into c_var.
// Called by Fortran to deal with allocatable character.
void STR_ShroudCopyStringAndFree(STR_SHROUD_array *data, char *c_var, size_t c_var_len) {
    const char *cxx_var = data->addr.ccharp;
    size_t n = c_var_len;
    if (data->elem_len < n) n = data->elem_len;
    std::strncpy(c_var, cxx_var, n);
    STR_SHROUD_memory_destructor(&data->cxx); // delete data->cxx.addr
}
// end helper copy_string


// start release allocated memory
// Release library allocated memory.
void STR_SHROUD_memory_destructor(STR_SHROUD_capsule_data *cap)
{
    void *ptr = cap->addr;
    switch (cap->idtor) {
    case 0:   // --none--
    {
        // Nothing to delete
        break;
    }
    case 1:   // new_string
    {
        std::string *cxx_ptr = reinterpret_cast<std::string *>(ptr);
        delete cxx_ptr;
        break;
    }
    case 2:   // std::string
    {
        std::string *cxx_ptr = reinterpret_cast<std::string *>(ptr);
        delete cxx_ptr;
        break;
    }
    case 3:   // C_string_free
    {
        // Used with +free_pattern(C_string_free)
        std::string *cxx_ptr = reinterpret_cast<std::string *>(ptr);
        delete cxx_ptr;

        break;
    }
    default:
    {
        // Unexpected case in destructor
        break;
    }
    }
    cap->addr = nullptr;
    cap->idtor = 0;  // avoid deleting again
}
// end release allocated memory

#ifdef __cplusplus
}
#endif

// start helper array_string_out
// helper array_string_out
// Copy the std::vector<std::string> into Fortran array argument.
// Called by C++.
// out is already blank filled.
void STR_ShroudArrayStringOut(STR_SHROUD_array *outdesc, std::string *in)
{
    size_t nvect = outdesc->size;
    size_t len = outdesc->elem_len;
    char *dest = const_cast<char *>(outdesc->addr.ccharp);
    //char *dest = static_cast<char *>(outdesc->cxx.addr);
    for (size_t i = 0; i < nvect; ++i) {
        std::memcpy(dest, in[i].data(), std::min(len, in[i].length()));
        dest += outdesc->elem_len;
    }
    //STR_SHROUD_memory_destructor(&data->cxx); // delete data->cxx.addr
}
// end helper array_string_out


// start helper array_string_out_len
// helper array_string_out_len
// Return the maximum string length in a std::vector<std::string>.
size_t STR_ShroudArrayStringOutSize(std::string *in, size_t nsize)
{
    size_t len = 0;
    for (size_t i = 0; i < nsize; ++i) {
        len = std::max(len, in[i].length());
    }
    return len;
}
// end helper array_string_out_len

