// Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
// tutorial.hpp - wrapped routines
//

#include "tutorial.hpp"

int global_flag;

namespace tutorial
{

int tutorial_flag;

static std::string last_function_called;

// These variables exist to avoid warning errors
static std::string global_str;
static int global_int;
static double global_double;
static const Class1 *global_class1;


void NoReturnNoArguments()
{
    last_function_called = "NoReturnNoArguments";
    return;
}

double PassByValue(double arg1, int arg2)
{
    last_function_called = "PassByValue";
    return arg1 + arg2;
}

const std::string ConcatenateStrings(const std::string& arg1, const std::string& arg2)
{
    last_function_called = "Function4c";
    return arg1 + arg2;
}

double UseDefaultArguments(double arg1, bool arg2)
{
    last_function_called = "UseDefautArguments";
    if (arg2) {
	return arg1 + 10.0;
    } else {
	return arg1;
    }
}

void OverloadedFunction(const std::string& name)
{
    last_function_called = "OverloadedFunction(string)";
    global_str = name;
    return;
}
void OverloadedFunction(int indx)
{
    last_function_called = "OverloadedFunction(int)";
    global_int = indx;
    return;
}

template<>
void TemplateArgument<int>(int arg)
{
    last_function_called = "TemplateArgument<int>";
    global_int = arg;
}

template<>
void TemplateArgument<double>(double arg)
{
    last_function_called = "TemplateArgument<double>";
    global_double = arg;
}

template<>
int TemplateReturn<int>()
{
    last_function_called = "TemplateReturn<int>";
    return global_int;
}

template<>
double TemplateReturn<double>()
{
    last_function_called = "TemplateReturn<double>";
    return global_double;
}

void FortranGeneric(double arg)
{
    last_function_called = "FortranGeneric";
    global_double = arg;
    return;
}

void FortranGenericOverloaded()
{
    last_function_called = "FortranGenericOverloaded_0";
}

void FortranGenericOverloaded(const std::string &name, double arg2)
{
    last_function_called = "FortranGenericOverloaded_1";
    global_str = name;
    global_double = arg2;
}

// default values and overloaded
// int UseDefaultOverload(int num, int offset = 0, int stride = 1);
int UseDefaultOverload(int num, int offset, int stride)
{
    last_function_called = "UseDefaultOverload_0";
    return num + offset * stride;
    
}

// default values and overloaded
// int UseDefaultOverload(double type, int num, int offset = 0, int stride = 1);
int UseDefaultOverload(double type, int num, int offset, int stride)
{
    last_function_called = "UseDefaultOverload_1";
    global_double = type;
    return num + offset * stride;
}

TypeID typefunc(TypeID arg)
{
    last_function_called = "typefunc";
    return static_cast<int>(arg);
}

EnumTypeID enumfunc(EnumTypeID arg)
{
    last_function_called = "enumfunc";
    switch (arg) {
    default:
	return ENUM2;
    }
}

Color colorfunc(Color arg)
{
    last_function_called = "colorfunc";
    return RED;
}

// start getMinMaxa
void getMinMax(int &min, int &max)
{
  min = -1;
  max = 100;
}
// end getMinMaxa

// Save arg flag value in global flag.
// Used by test drive to make sure arg was passed correctly.
void passClassByValue(Class1 arg)
{
    last_function_called = "passClassByValue";
    global_flag = arg.m_test;
    return;
}

int useclass(const Class1 *arg)
{
    last_function_called = "useclass";
    global_class1 = arg;
    return arg->m_flag;
}

void getclass(const Class1 **arg)
{
    last_function_called = "getclass";
    *arg = global_class1;
}

const Class1 * getclass2()
{
    last_function_called = "getclass2";
    return global_class1;
}

Class1 * getclass3()
{
    last_function_called = "getclass3";
    return const_cast<Class1 *>(global_class1);
}

/* Return class instance by value */
Class1 getClassCopy(int flag)
{
    Class1 node(flag);
    last_function_called = "getClassCopy";
    return node;
}

//----------------------------------------------------------------------
// class methods

int Class1::Method1()
{
    last_function_called = "Class1::Method1";
    return m_flag;
}

bool Class1::equivalent(Class1 const &obj2) const
{
    last_function_called = "Class1::equivalent";
    return m_flag == obj2.m_flag;
}

Class1 * Class1::returnThis()
{
    last_function_called = "Class1::returnThis";
    return this;
}

Class1 *Class1::returnThisBuffer(std::string & name, bool flag)
{
    global_str = name;
    last_function_called = "Class1::getThisBuffer";
    return this;
}

Class1 * Class1::getclass3() const
{
    last_function_called = "Class1::getclass3";
    return const_cast<Class1 *>(global_class1);
}

Class1::DIRECTION Class1::directionFunc(Class1::DIRECTION arg)
{
    last_function_called = "Class1::directionFunc";
    return Class1::LEFT;
}

// This method is not in the class but uses the class enum
Class1::DIRECTION directionFunc(Class1::DIRECTION arg)
{
    last_function_called = "directionFunc";
    return Class1::RIGHT;
}

//----------------------------------------------------------------------

// start callback1
int callback1(int in, int (*incr)(int))
{
  return incr(in);
}
// end callback1

//----------------------------------------------------------------------

void set_global_flag(int arg)
{
  global_flag = arg;
}

int get_global_flag()
{
  return global_flag;
}

const std::string& LastFunctionCalled()
{
    return last_function_called;
}

} /* end namespace tutorial */
