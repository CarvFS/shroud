// wrapTutorial.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

#include "tutorial.hpp"
#include <string>
#include <cstddef>
#include <cstring>
#include "wrapTutorial.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {


// helper ShroudLenTrim
// Returns the length of character string src with length nsrc,
// ignoring any trailing blanks.
static int ShroudLenTrim(const char *src, int nsrc) {
    int i;

    for (i = nsrc - 1; i >= 0; i--) {
        if (src[i] != ' ') {
            break;
        }
    }

    return i + 1;
}


// helper ShroudStrCopy
// Copy src into dest, blank fill to ndest characters
// Truncate if dest is too short.
// dest will not be NULL terminated.
static void ShroudStrCopy(char *dest, int ndest, const char *src, int nsrc)
{
   if (src == NULL) {
     std::memset(dest,' ',ndest); // convert NULL pointer to blank filled string
   } else {
     if (nsrc < 0) nsrc = std::strlen(src);
     int nm = nsrc < ndest ? nsrc : ndest;
     std::memcpy(dest,src,nm);
     if(ndest > nm) std::memset(dest+nm,' ',ndest-nm); // blank fill
   }
}

// start helper ShroudStrToArray
// helper ShroudStrToArray
// Save str metadata into array to allow Fortran to access values.
// CHARACTER(len=elem_size) src
static void ShroudStrToArray(TUT_SHROUD_array *array, const std::string * src, int idtor)
{
    array->cxx.addr = const_cast<std::string *>(src);
    array->cxx.idtor = idtor;
    if (src->empty()) {
        array->addr.ccharp = NULL;
        array->elem_len = 0;
    } else {
        array->addr.ccharp = src->data();
        array->elem_len = src->length();
    }
    array->size = 1;
    array->rank = 0;  // scalar
}
// end helper ShroudStrToArray
// splicer begin C_definitions
// splicer end C_definitions

// start TUT_no_return_no_arguments
void TUT_no_return_no_arguments(void)
{
    // splicer begin function.no_return_no_arguments
    tutorial::NoReturnNoArguments();
    // splicer end function.no_return_no_arguments
}
// end TUT_no_return_no_arguments

double TUT_pass_by_value(double arg1, int arg2)
{
    // splicer begin function.pass_by_value
    double SHC_rv = tutorial::PassByValue(arg1, arg2);
    return SHC_rv;
    // splicer end function.pass_by_value
}

/**
 * Note that since a reference is returned, no intermediate string
 * is allocated.  It is assumed +owner(library).
 */
void TUT_concatenate_strings_bufferify(char *arg1, int SHT_arg1_len,
    char *arg2, int SHT_arg2_len, TUT_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin function.concatenate_strings_bufferify
    const std::string SHCXX_arg1(arg1,
        ShroudLenTrim(arg1, SHT_arg1_len));
    const std::string SHCXX_arg2(arg2,
        ShroudLenTrim(arg2, SHT_arg2_len));
    std::string * SHCXX_rv = new std::string;
    *SHCXX_rv = tutorial::ConcatenateStrings(SHCXX_arg1, SHCXX_arg2);
    ShroudStrToArray(SHT_rv_cdesc, SHCXX_rv, 1);
    // splicer end function.concatenate_strings_bufferify
}

// start TUT_use_default_arguments
double TUT_use_default_arguments(void)
{
    // splicer begin function.use_default_arguments
    double SHC_rv = tutorial::UseDefaultArguments();
    return SHC_rv;
    // splicer end function.use_default_arguments
}
// end TUT_use_default_arguments

// start TUT_use_default_arguments_arg1
double TUT_use_default_arguments_arg1(double arg1)
{
    // splicer begin function.use_default_arguments_arg1
    double SHC_rv = tutorial::UseDefaultArguments(arg1);
    return SHC_rv;
    // splicer end function.use_default_arguments_arg1
}
// end TUT_use_default_arguments_arg1

// start TUT_use_default_arguments_arg1_arg2
double TUT_use_default_arguments_arg1_arg2(double arg1, bool arg2)
{
    // splicer begin function.use_default_arguments_arg1_arg2
    double SHC_rv = tutorial::UseDefaultArguments(arg1, arg2);
    return SHC_rv;
    // splicer end function.use_default_arguments_arg1_arg2
}
// end TUT_use_default_arguments_arg1_arg2

void TUT_overloaded_function_from_name(const char * name)
{
    // splicer begin function.overloaded_function_from_name
    const std::string SHCXX_name(name);
    tutorial::OverloadedFunction(SHCXX_name);
    // splicer end function.overloaded_function_from_name
}

void TUT_overloaded_function_from_name_bufferify(char *name,
    int SHT_name_len)
{
    // splicer begin function.overloaded_function_from_name_bufferify
    const std::string SHCXX_name(name,
        ShroudLenTrim(name, SHT_name_len));
    tutorial::OverloadedFunction(SHCXX_name);
    // splicer end function.overloaded_function_from_name_bufferify
}

void TUT_overloaded_function_from_index(int indx)
{
    // splicer begin function.overloaded_function_from_index
    tutorial::OverloadedFunction(indx);
    // splicer end function.overloaded_function_from_index
}

void TUT_template_argument_int(int arg)
{
    // splicer begin function.template_argument_int
    tutorial::TemplateArgument<int>(arg);
    // splicer end function.template_argument_int
}

void TUT_template_argument_double(double arg)
{
    // splicer begin function.template_argument_double
    tutorial::TemplateArgument<double>(arg);
    // splicer end function.template_argument_double
}

int TUT_template_return_int(void)
{
    // splicer begin function.template_return_int
    int SHC_rv = tutorial::TemplateReturn<int>();
    return SHC_rv;
    // splicer end function.template_return_int
}

double TUT_template_return_double(void)
{
    // splicer begin function.template_return_double
    double SHC_rv = tutorial::TemplateReturn<double>();
    return SHC_rv;
    // splicer end function.template_return_double
}

void TUT_fortran_generic_overloaded_0(void)
{
    // splicer begin function.fortran_generic_overloaded_0
    tutorial::FortranGenericOverloaded();
    // splicer end function.fortran_generic_overloaded_0
}

void TUT_fortran_generic_overloaded_1(const char * name, double arg2)
{
    // splicer begin function.fortran_generic_overloaded_1
    const std::string SHCXX_name(name);
    tutorial::FortranGenericOverloaded(SHCXX_name, arg2);
    // splicer end function.fortran_generic_overloaded_1
}

void TUT_fortran_generic_overloaded_1_float_bufferify(char *name,
    int SHT_name_len, float arg2)
{
    // splicer begin function.fortran_generic_overloaded_1_float_bufferify
    const std::string SHCXX_name(name,
        ShroudLenTrim(name, SHT_name_len));
    tutorial::FortranGenericOverloaded(SHCXX_name, arg2);
    // splicer end function.fortran_generic_overloaded_1_float_bufferify
}

void TUT_fortran_generic_overloaded_1_double_bufferify(char *name,
    int SHT_name_len, double arg2)
{
    // splicer begin function.fortran_generic_overloaded_1_double_bufferify
    const std::string SHCXX_name(name,
        ShroudLenTrim(name, SHT_name_len));
    tutorial::FortranGenericOverloaded(SHCXX_name, arg2);
    // splicer end function.fortran_generic_overloaded_1_double_bufferify
}

int TUT_use_default_overload_num(int num)
{
    // splicer begin function.use_default_overload_num
    int SHC_rv = tutorial::UseDefaultOverload(num);
    return SHC_rv;
    // splicer end function.use_default_overload_num
}

int TUT_use_default_overload_num_offset(int num, int offset)
{
    // splicer begin function.use_default_overload_num_offset
    int SHC_rv = tutorial::UseDefaultOverload(num, offset);
    return SHC_rv;
    // splicer end function.use_default_overload_num_offset
}

int TUT_use_default_overload_num_offset_stride(int num, int offset,
    int stride)
{
    // splicer begin function.use_default_overload_num_offset_stride
    int SHC_rv = tutorial::UseDefaultOverload(num, offset, stride);
    return SHC_rv;
    // splicer end function.use_default_overload_num_offset_stride
}

int TUT_use_default_overload_3(double type, int num)
{
    // splicer begin function.use_default_overload_3
    int SHC_rv = tutorial::UseDefaultOverload(type, num);
    return SHC_rv;
    // splicer end function.use_default_overload_3
}

int TUT_use_default_overload_4(double type, int num, int offset)
{
    // splicer begin function.use_default_overload_4
    int SHC_rv = tutorial::UseDefaultOverload(type, num, offset);
    return SHC_rv;
    // splicer end function.use_default_overload_4
}

int TUT_use_default_overload_5(double type, int num, int offset,
    int stride)
{
    // splicer begin function.use_default_overload_5
    int SHC_rv = tutorial::UseDefaultOverload(type, num, offset,
        stride);
    return SHC_rv;
    // splicer end function.use_default_overload_5
}

TUT_TypeID TUT_typefunc(TUT_TypeID arg)
{
    // splicer begin function.typefunc
    tutorial::TypeID SHC_rv = tutorial::typefunc(arg);
    return SHC_rv;
    // splicer end function.typefunc
}

TUT_EnumTypeID TUT_enumfunc(TUT_EnumTypeID arg)
{
    // splicer begin function.enumfunc
    tutorial::EnumTypeID SHCXX_arg =
        static_cast<tutorial::EnumTypeID>(arg);
    tutorial::EnumTypeID SHCXX_rv = tutorial::enumfunc(SHCXX_arg);
    TUT_EnumTypeID SHC_rv = static_cast<int>(SHCXX_rv);
    return SHC_rv;
    // splicer end function.enumfunc
}

int TUT_colorfunc(int arg)
{
    // splicer begin function.colorfunc
    tutorial::Color SHCXX_arg = static_cast<tutorial::Color>(arg);
    tutorial::Color SHCXX_rv = tutorial::colorfunc(SHCXX_arg);
    int SHC_rv = static_cast<int>(SHCXX_rv);
    return SHC_rv;
    // splicer end function.colorfunc
}

/**
 * \brief Pass in reference to scalar
 *
 */
// start TUT_get_min_max
void TUT_get_min_max(int * min, int * max)
{
    // splicer begin function.get_min_max
    tutorial::getMinMax(*min, *max);
    // splicer end function.get_min_max
}
// end TUT_get_min_max

/**
 * \brief Test function pointer
 *
 */
// start TUT_callback1
int TUT_callback1(int in, int ( * incr)(int))
{
    // splicer begin function.callback1
    int SHC_rv = tutorial::callback1(in, incr);
    return SHC_rv;
    // splicer end function.callback1
}
// end TUT_callback1

const char * TUT_last_function_called(void)
{
    // splicer begin function.last_function_called
    const std::string & SHCXX_rv = tutorial::LastFunctionCalled();
    const char * SHC_rv = SHCXX_rv.c_str();
    return SHC_rv;
    // splicer end function.last_function_called
}

void TUT_last_function_called_bufferify(char *SHC_rv, int SHT_rv_len)
{
    // splicer begin function.last_function_called_bufferify
    const std::string & SHCXX_rv = tutorial::LastFunctionCalled();
    if (SHCXX_rv.empty()) {
        ShroudStrCopy(SHC_rv, SHT_rv_len, nullptr, 0);
    } else {
        ShroudStrCopy(SHC_rv, SHT_rv_len, SHCXX_rv.data(),
            SHCXX_rv.size());
    }
    // splicer end function.last_function_called_bufferify
}

}  // extern "C"
