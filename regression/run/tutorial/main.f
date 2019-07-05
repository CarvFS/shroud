! Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
! #######################################################################
!
! Test code generated by the tutorial test
!
function incr2(input) bind(C)
  use iso_c_binding
  implicit none
  integer(c_int), value :: input
  integer(c_int) :: incr2
  incr2 = input + 20
end function incr2

program tester
  use fruit
  use iso_c_binding
  use tutorial_mod
  implicit none
  logical ok

  logical rv_logical, wrk_logical
  integer rv_integer
  integer(C_INT) rv_int
  real(C_DOUBLE) rv_double
  character(30) rv_char

  call init_fruit

  call test_enums
  call test_functions

  call test_callback

  call test_class1_final
  call test_class1_new_by_value
  call test_class1
  call test_singleton

  call fruit_summary
  call fruit_finalize

  call is_all_successful(ok)
  if (.not. ok) then
     call exit(1)
  endif

contains

  subroutine test_enums
    ! test values of enumerations
    integer(C_INT) rv_int

    call set_case_name("test_enums")

    call assert_equals(0, tutorial_color_red, "tutorial_color_red")
    call assert_equals(1, tutorial_color_blue, "tutorial_color_blue")
    call assert_equals(2, tutorial_color_white, "tutorial_color_white")

    call assert_equals(2, tutorial_class1_direction_up, "tutorial_class1_direction_up")
    call assert_equals(3, tutorial_class1_direction_down, "tutorial_class1_direction_down")
    call assert_equals(100, tutorial_class1_direction_left, "tutorial_class1_direction_left")
    call assert_equals(101, tutorial_class1_direction_right, "tutorial_class1_direction_right")

    rv_int = colorfunc(tutorial_color_BLUE)
    call assert_true(rv_int .eq. tutorial_color_RED, "tutorial_color_RED")

  end subroutine test_enums

  subroutine test_functions

    integer(C_LONG_LONG) :: rv_ll
    integer(C_INT) :: minout, maxout
!    character(len=:), allocatable :: rv4c

    call set_case_name("test_functions")

    call function1
    call assert_true(.true.)

    rv_double = function2(1.d0, 4)
    call assert_true(rv_double == 5.d0, "function2")

    rv_logical = function3(.false.)
    call assert_true(rv_logical, "function3")

    call assert_true( function4a("dog", "cat") == "dogcat", "function4a")

    call function4b("dog", "cat", rv_char)
    call assert_true( rv_char == "dogcat", "function4b")

    call assert_equals( "dawgkat", function4c("dawg", "kat"), "function4c")

! warning: '.rv4c' may be used uninitialized in this function [-Wmaybe-uninitialized]
! gfortran 4.9.3
!    call assert_false(allocated(rv4c))
!    rv4c = function4c("one", "two")
!    call assert_true(allocated(rv4c))
!    call assert_true(len(rv4c) == 6)
!    call assert_true(rv4c == "onetwo")
!    deallocate(rv4c)

    call assert_true( function4d() == "Function4d", "function4d")

    call assert_equals(13.1415d0, function5(), "function5 1")
    call assert_equals(11.d0, function5(1.d0), "function5 2")
    call assert_equals(1.d0, function5(1.d0, .false.), "function5 3")

    call function6("name")
    call assert_true(last_function_called() == "Function6(string)", &
         "function6 1")
    call function6(1)
    call assert_true(last_function_called() == "Function6(int)", &
         "function6 2")

    call function7(1)
    call assert_true(last_function_called() == "Function7<int>",  &
         "function7 1")
    call function7(10.d0)
    call assert_true(last_function_called() == "Function7<double>", &
         "function7 2")

    ! return values set by calls to function7
    rv_integer = function8_int()
    call assert_true(rv_integer == 1, "function8_int")
    rv_double = function8_double()
    call assert_true(rv_double == 10.d0, "function8_double")

    call function9(1.0)
    call assert_true(.true., "function9 1")
    call function9(1.d0)
    call assert_true(.true., "function9 2")

    call function10()
    call assert_true(.true., "function10 1")
    call function10("foo", 1.0e0)
    call assert_true(.true., "function10 2")
    call function10("bar", 2.0d0)
    call assert_true(.true., "function10 3")

    rv_ll = type_long_long( 2_c_long_long)
    call assert_true(rv_ll .eq. 4, "type_long_long")

    rv_int = overload1(10)
    call assert_true(rv_int .eq. 10, "overload1 1")
    rv_int = overload1(1.0d0, 10)
    call assert_true(rv_int .eq. 10, "overload1 2")

    rv_int = overload1(10, 11, 12)
    call assert_true(rv_int .eq. 142, "overload1 3")
    rv_int = overload1(1.0d0, 10, 11, 12)
    call assert_true(rv_int .eq. 142, "overload1 4")

    rv_int = typefunc(2)
    call assert_true(rv_int .eq. 2, "typefunc")

    rv_int = enumfunc(1)
    call assert_true(rv_int .eq. 2, "enumfunc")

    call get_min_max(minout, maxout)
    call assert_equals(-1, minout, "get_min_max minout")
    call assert_equals(100, maxout, "get_min_max maxout")

  end subroutine test_functions

  subroutine test_callback

    integer irv
    interface
       function incr2(input) bind(C)
         use iso_c_binding
         integer(c_int), value :: input
         integer(c_int) :: incr2
       end function incr2
    end interface

    call set_case_name("test_callback")

    irv = callback1(2, incr2)
    call assert_true(irv == 22)

  end subroutine test_callback

  ! Simple test of FINAL useful with debugger.
  subroutine test_class1_final
    type(class1) obj0, obj1

    call set_case_name("test_class1_final")

    ! Test generic constructor
    obj0 = class1_new()
!    call assert_equals(1, obj0%cxxmem%refcount, "reference count after new")

    obj1 = obj0
!    call assert_equals(2, obj0%cxxmem%refcount, "rhs reference count after assign")
!    call assert_equals(2, obj1%cxxmem%refcount, "lhs reference count after assign")

    call obj0%delete
!    call assert_equals(1, obj1%cxxmem%refcount, "reference count after delete")

    ! should call TUT_SHROUD_array_destructor_function as part of 
    ! FINAL of capsule_data.
  end subroutine test_class1_final

  subroutine test_class1_new_by_value
    integer mflag
    type(class1) obj0

    call set_case_name("test_class1_new_by_value")

    ! Return a new instance via a copy constructor.
    ! The C wrapper creates an instance then assigns function results into it.
    ! idtor is set to cause it to be released when it goes out of scope.
    obj0 = get_class_copy(5)

    mflag = obj0%get_m_flag()
    call assert_equals(5, mflag)

    ! should call TUT_SHROUD_array_destructor_function as part of 
    ! FINAL of capsule_data.
    call obj0%delete

  end subroutine test_class1_new_by_value

  subroutine test_class1
    integer iflag, mtest
    integer direction
    type(class1) obj0, obj1, obj2
    type(class1) obj0a
    type(c_ptr) ptr

    call set_case_name("test_class1")

    ! Test generic constructor
    obj0 = class1_new()
    ptr = obj0%get_instance()
    call assert_true(c_associated(ptr), "class1_new obj0")

    mtest = obj0%get_test()
    call assert_equals(0, mtest, "get_test 1")

    call obj0%set_test(4)
    mtest = obj0%get_test()
    call assert_equals(4, mtest, "get_test 2")

    obj1 = class1_new(1)
    ptr = obj1%get_instance()
    call assert_true(c_associated(ptr), "class1_new obj1")

    iflag = obj0%method1()
    call assert_equals(iflag, 0, "method1 0")

    iflag = obj1%method1()
    call assert_equals(iflag, 1, "method1 1")

    call assert_true(obj0 .eq. obj0, "obj0 .eq obj0")
    call assert_true(obj0 .ne. obj1, "obj0 .ne. obj1")

    call assert_true(obj0%equivalent(obj0), "equivalent 1")
    call assert_false(obj0%equivalent(obj1), "equivalent 2")

    ! This function has return_this=True, so it returns nothing
    call obj0%return_this()

    ! This function has return_this=False, so it returns obj0
    obj2 = obj0%return_this_buffer("bufferify", .true.)
    call assert_true(obj0 .eq. obj2, "return_this_buffer equal")

    direction = -1
    direction = obj0%direction_func(tutorial_class1_direction_left)
    call assert_equals(tutorial_class1_direction_left, direction, "obj0.directionFunc")

    direction = -1
    direction = direction_func(tutorial_class1_direction_left)
    call assert_equals(tutorial_class1_direction_right, direction, "directionFunc")

    ! Since obj0 is passed by value, save flag in global_flag
    
    call set_global_flag(0)
    call obj0%set_test(13)
    call pass_class_by_value(obj0)
    iflag = get_global_flag()
    call assert_equals(iflag, 13, "passClassByValue")

    ! use class assigns global_class1 returned by getclass
    call obj0%set_test(0)
    iflag = useclass(obj0)
    call assert_equals(iflag, 0, "useclass")

    obj0a = getclass2()
    ptr = obj0a%get_instance()
    call assert_true(c_associated(ptr), "getclass2 obj0a")
    call assert_true(obj0 .eq. obj0a, "obj0 .eq. obj0a")

    call obj0%delete
    ptr = obj0%get_instance()
    call assert_true(.not. c_associated(ptr), "class1_delete obj0")

    call obj1%delete
    ptr = obj1%get_instance()
    call assert_true(.not. c_associated(ptr), "class1_delete obj1")

    ! obj0a has a dangling reference to a deleted object
  end subroutine test_class1

  subroutine test_singleton
    type(singleton) obj0, obj1

    call set_case_name("test_singleton")

    obj0 = obj0%get_reference()
    obj1 = obj1%get_reference()

    call assert_true(obj0 .eq. obj1, "obj0 .eq obj1")

  end subroutine test_singleton

end program tester
