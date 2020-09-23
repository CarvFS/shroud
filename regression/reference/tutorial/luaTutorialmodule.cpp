// luaTutorialmodule.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "tutorial.hpp"
#include "luaTutorialmodule.hpp"
#ifdef __cplusplus
extern "C" {
#endif
#include "lauxlib.h"
#ifdef __cplusplus
}
#endif
// splicer begin include
// splicer end include
// splicer begin C_definition
// splicer end C_definition

// void NoReturnNoArguments()
// ----------------------------------------
// Function:  void NoReturnNoArguments
// Exact:     lua_void_scalar
static int l_no_return_no_arguments(lua_State *)
{
    // splicer begin function.NoReturnNoArguments
    tutorial::NoReturnNoArguments();
    return 0;
    // splicer end function.NoReturnNoArguments
}

// double PassByValue(double arg1 +intent(in)+value, int arg2 +intent(in)+value)
// ----------------------------------------
// Function:  double PassByValue
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double arg1 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int arg2 +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_pass_by_value(lua_State *L)
{
    // splicer begin function.PassByValue
    double arg1 = lua_tonumber(L, 1);
    int arg2 = lua_tointeger(L, 2);
    double SHCXX_rv = tutorial::PassByValue(arg1, arg2);
    lua_pushnumber(L, SHCXX_rv);
    return 1;
    // splicer end function.PassByValue
}

// const std::string ConcatenateStrings(const std::string & arg1 +intent(in), const std::string & arg2 +intent(in)) +deref(allocatable)
// ----------------------------------------
// Function:  const std::string ConcatenateStrings +deref(allocatable)
// Exact:     lua_string_scalar_result
// ----------------------------------------
// Argument:  const std::string & arg1 +intent(in)
// Exact:     lua_string_&_in
// ----------------------------------------
// Argument:  const std::string & arg2 +intent(in)
// Exact:     lua_string_&_in
/**
 * Note that since a reference is returned, no intermediate string
 * is allocated.  It is assumed +owner(library).
 */
static int l_concatenate_strings(lua_State *L)
{
    // splicer begin function.ConcatenateStrings
    const char * arg1 = lua_tostring(L, 1);
    const char * arg2 = lua_tostring(L, 2);
    const std::string SHCXX_rv = tutorial::ConcatenateStrings(arg1,
        arg2);
    lua_pushstring(L, SHCXX_rv.c_str());
    return 1;
    // splicer end function.ConcatenateStrings
}

// double UseDefaultArguments(double arg1=3.1415 +intent(in)+value, bool arg2=true +intent(in)+value)
// ----------------------------------------
// Function:  double UseDefaultArguments
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Function:  double UseDefaultArguments
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double arg1=3.1415 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  double UseDefaultArguments
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double arg1=3.1415 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  bool arg2=true +intent(in)+value
// Exact:     lua_bool_scalar_in
static int l_use_default_arguments(lua_State *L)
{
    // splicer begin function.UseDefaultArguments
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    switch (SH_nargs) {
    case 0:
        {
            double SHCXX_rv = tutorial::UseDefaultArguments();
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        break;
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            double arg1 = lua_tonumber(L, 1);
            double SHCXX_rv = tutorial::UseDefaultArguments(arg1);
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TBOOLEAN) {
            double arg1 = lua_tonumber(L, 1);
            bool arg2 = lua_toboolean(L, 2);
            double SHCXX_rv = tutorial::UseDefaultArguments(arg1, arg2);
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.UseDefaultArguments
}

// void OverloadedFunction(const std::string & name +intent(in))
// void OverloadedFunction(int indx +intent(in)+value)
// ----------------------------------------
// Function:  void OverloadedFunction
// Exact:     lua_void_scalar
// ----------------------------------------
// Argument:  const std::string & name +intent(in)
// Exact:     lua_string_&_in
// ----------------------------------------
// Function:  void OverloadedFunction
// Exact:     lua_void_scalar
// ----------------------------------------
// Argument:  int indx +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_overloaded_function(lua_State *L)
{
    // splicer begin function.OverloadedFunction
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TSTRING) {
            const char * name = lua_tostring(L, 1);
            tutorial::OverloadedFunction(name);
            SH_nresult = 0;
        }
        else if (SH_itype1 == LUA_TNUMBER) {
            int indx = lua_tointeger(L, 1);
            tutorial::OverloadedFunction(indx);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.OverloadedFunction
}

// void TemplateArgument(int arg +intent(in)+value)
// void TemplateArgument(double arg +intent(in)+value)
// ----------------------------------------
// Function:  void TemplateArgument
// Exact:     lua_void_scalar
// ----------------------------------------
// Argument:  int arg +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  void TemplateArgument
// Exact:     lua_void_scalar
// ----------------------------------------
// Argument:  double arg +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_template_argument(lua_State *L)
{
    // splicer begin function.TemplateArgument
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            int arg = lua_tointeger(L, 1);
            tutorial::TemplateArgument(arg);
            SH_nresult = 0;
        }
        else if (SH_itype1 == LUA_TNUMBER) {
            double arg = lua_tonumber(L, 1);
            tutorial::TemplateArgument(arg);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.TemplateArgument
}

// void FortranGenericOverloaded()
// void FortranGenericOverloaded(const std::string & name +intent(in), double arg2 +intent(in)+value)
// ----------------------------------------
// Function:  void FortranGenericOverloaded
// Exact:     lua_void_scalar
// ----------------------------------------
// Function:  void FortranGenericOverloaded
// Exact:     lua_void_scalar
// ----------------------------------------
// Argument:  const std::string & name +intent(in)
// Exact:     lua_string_&_in
// ----------------------------------------
// Argument:  double arg2 +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_fortran_generic_overloaded(lua_State *L)
{
    // splicer begin function.FortranGenericOverloaded
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    switch (SH_nargs) {
    case 0:
        {
            tutorial::FortranGenericOverloaded();
            SH_nresult = 0;
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TSTRING &&
            SH_itype2 == LUA_TNUMBER) {
            const char * name = lua_tostring(L, 1);
            double arg2 = lua_tonumber(L, 2);
            tutorial::FortranGenericOverloaded(name, arg2);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.FortranGenericOverloaded
}

// int UseDefaultOverload(int num +intent(in)+value, int offset=0 +intent(in)+value, int stride=1 +intent(in)+value)
// int UseDefaultOverload(double type +intent(in)+value, int num +intent(in)+value, int offset=0 +intent(in)+value, int stride=1 +intent(in)+value)
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int offset=0 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double type +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int offset=0 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int stride=1 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double type +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int offset=0 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Function:  int UseDefaultOverload
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  double type +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int num +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int offset=0 +intent(in)+value
// Exact:     lua_native_scalar_in
// ----------------------------------------
// Argument:  int stride=1 +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_use_default_overload(lua_State *L)
{
    // splicer begin function.UseDefaultOverload
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    int SH_itype3 = lua_type(L, 3);
    int SH_itype4 = lua_type(L, 4);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int SHCXX_rv = tutorial::UseDefaultOverload(num);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int offset = lua_tointeger(L, 2);
            int SHCXX_rv = tutorial::UseDefaultOverload(num, offset);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 3:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int offset = lua_tointeger(L, 2);
            int stride = lua_tointeger(L, 3);
            int SHCXX_rv = tutorial::UseDefaultOverload(num, offset,
                stride);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int offset = lua_tointeger(L, 3);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num,
                offset);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 4:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER &&
            SH_itype4 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int offset = lua_tointeger(L, 3);
            int stride = lua_tointeger(L, 4);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num,
                offset, stride);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.UseDefaultOverload
}

// TypeID typefunc(TypeID arg +intent(in)+value)
// ----------------------------------------
// Function:  TypeID typefunc
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  TypeID arg +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_typefunc(lua_State *L)
{
    // splicer begin function.typefunc
    tutorial::TypeID arg = lua_tointeger(L, 1);
    tutorial::TypeID SHCXX_rv = tutorial::typefunc(arg);
    lua_pushinteger(L, SHCXX_rv);
    return 1;
    // splicer end function.typefunc
}

// EnumTypeID enumfunc(EnumTypeID arg +intent(in)+value)
// ----------------------------------------
// Function:  EnumTypeID enumfunc
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  EnumTypeID arg +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_enumfunc(lua_State *L)
{
    // splicer begin function.enumfunc
    tutorial::EnumTypeID arg =
        static_cast<tutorial::EnumTypeID>(lua_tointeger(L, 1));
    tutorial::EnumTypeID SHCXX_rv = tutorial::enumfunc(arg);
    lua_pushinteger(L, static_cast<int>(SHCXX_rv));
    return 1;
    // splicer end function.enumfunc
}

// Color colorfunc(Color arg +intent(in)+value)
// ----------------------------------------
// Function:  Color colorfunc
// Exact:     lua_native_scalar_result
// ----------------------------------------
// Argument:  Color arg +intent(in)+value
// Exact:     lua_native_scalar_in
static int l_colorfunc(lua_State *L)
{
    // splicer begin function.colorfunc
    tutorial::Color arg =
        static_cast<tutorial::Color>(lua_tointeger(L, 1));
    tutorial::Color SHCXX_rv = tutorial::colorfunc(arg);
    lua_pushinteger(L, static_cast<int>(SHCXX_rv));
    return 1;
    // splicer end function.colorfunc
}

// const std::string & LastFunctionCalled() +deref(result-as-arg)+len(30)
// ----------------------------------------
// Function:  const std::string & LastFunctionCalled +deref(result-as-arg)+len(30)
// Exact:     lua_string_&_result
static int l_last_function_called(lua_State *L)
{
    // splicer begin function.LastFunctionCalled
    const std::string & SHCXX_rv = tutorial::LastFunctionCalled();
    lua_pushstring(L, SHCXX_rv.c_str());
    return 1;
    // splicer end function.LastFunctionCalled
}

// splicer begin additional_functions
// splicer end additional_functions

static const struct luaL_Reg l_Tutorial_Reg [] = {
    {"NoReturnNoArguments", l_no_return_no_arguments},
    {"PassByValue", l_pass_by_value},
    {"ConcatenateStrings", l_concatenate_strings},
    {"UseDefaultArguments", l_use_default_arguments},
    {"OverloadedFunction", l_overloaded_function},
    {"TemplateArgument", l_template_argument},
    {"FortranGenericOverloaded", l_fortran_generic_overloaded},
    {"UseDefaultOverload", l_use_default_overload},
    {"typefunc", l_typefunc},
    {"enumfunc", l_enumfunc},
    {"colorfunc", l_colorfunc},
    {"LastFunctionCalled", l_last_function_called},
    // splicer begin register
    // splicer end register
    {NULL, NULL}   /*sentinel */
};

#ifdef __cplusplus
extern "C" {
#endif
int luaopen_tutorial(lua_State *L) {

#if LUA_VERSION_NUM < 502
    luaL_register(L, "tutorial", l_Tutorial_Reg);
#else
    luaL_newlib(L, l_Tutorial_Reg);
#endif
    return 1;
}
#ifdef __cplusplus
}
#endif
