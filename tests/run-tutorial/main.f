! Copyright (c) 2017, Lawrence Livermore National Security, LLC. 
! Produced at the Lawrence Livermore National Laboratory 
!
! LLNL-CODE-738041.
! All rights reserved. 
!
! This file is part of Shroud.  For details, see
! https://github.com/LLNL/shroud. Please also read shroud/LICENSE.
!
! Redistribution and use in source and binary forms, with or without
! modification, are permitted provided that the following conditions are
! met:
!
! * Redistributions of source code must retain the above copyright
!   notice, this list of conditions and the disclaimer below.
! 
! * Redistributions in binary form must reproduce the above copyright
!   notice, this list of conditions and the disclaimer (as noted below)
!   in the documentation and/or other materials provided with the
!   distribution.
!
! * Neither the name of the LLNS/LLNL nor the names of its contributors
!   may be used to endorse or promote products derived from this
!   software without specific prior written permission.
!
! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
! "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
! LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
! A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL LAWRENCE
! LIVERMORE NATIONAL SECURITY, LLC, THE U.S. DEPARTMENT OF ENERGY OR
! CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
! EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
! PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
! PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
! LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
! NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
! SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
!
! #######################################################################
!
! Test code generated by the tutorial test
!
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

  call test_functions

  call test_class1

  call fruit_summary
  call fruit_finalize

  call is_all_successful(ok)
  if (.not. ok) then
     call exit(1)
  endif

contains

  subroutine test_functions

    integer(C_INT) intv(5)

    call set_case_name("test_functions")

    call function1
    call assert_true(.true.)

    rv_double = function2(1.d0, 4)
    call assert_true(rv_double == 5.d0)

    rv_logical = function3(.false.)
    call assert_true(rv_logical)

    rv_logical = .true.
    wrk_logical = .true.
    call function3b(.true., rv_logical, wrk_logical)
    call assert_false(rv_logical)
    call assert_false(wrk_logical)

    rv_logical = .false.
    wrk_logical = .false.
    call function3b(.false., rv_logical, wrk_logical)
    call assert_true(rv_logical)
    call assert_true(wrk_logical)

    call assert_true( function4a("dog", "cat") == "dogcat")

    call function4b("dog", "cat", rv_char)
    call assert_true( rv_char == "dogcat")

    call assert_equals(function5(), 13.1415d0)
    call assert_equals(function5(1.d0), 11.d0)
    call assert_equals(function5(1.d0, .false.), 1.d0)

    call function6("name")
    call assert_true(last_function_called() == "Function6(string)")
    call function6(1)
    call assert_true(last_function_called() == "Function6(int)")

    call function7(1)
    call assert_true(last_function_called() == "Function7<int>")
    call function7(10.d0)
    call assert_true(last_function_called() == "Function7<double>")

    ! return values set by calls to function7
    rv_integer = function8_int()
    call assert_true(rv_integer == 1)
    rv_double = function8_double()
    call assert_true(rv_double == 10.d0)

    call function9(1.0)
    call assert_true(.true.)
    call function9(1.d0)
    call assert_true(.true.)

    call function10()
    call assert_true(.true.)
    call function10("foo", 1.0e0)
    call assert_true(.true.)
    call function10("bar", 2.0d0)
    call assert_true(.true.)

    call sum(5, [1,2,3,4,5], rv_int)
    call assert_true(rv_int .eq. 15)

    rv_int = overload1(10)
    call assert_true(rv_int .eq. 10)
    rv_int = overload1(1.0d0, 10)
    call assert_true(rv_int .eq. 10)

    rv_int = overload1(10, 11, 12)
    call assert_true(rv_int .eq. 142)
    rv_int = overload1(1.0d0, 10, 11, 12)
    call assert_true(rv_int .eq. 142)

    rv_int = typefunc(2)
    call assert_true(rv_int .eq. 2)

    rv_int = enumfunc(1)
    call assert_true(rv_int .eq. 2)

    intv = [1,2,3,4,5]
    rv_int = vector_sum(intv)
    call assert_true(rv_int .eq. 15)

    intv(:) = 0
    call vector_iota(intv)
    call assert_true(all(intv(:) .eq. [1,2,3,4,5]))

    intv = [1,2,3,4,5]
    call vector_increment(intv)
    call assert_true(all(intv(:) .eq. [2,3,4,5,6]))

  end subroutine test_functions

  subroutine test_class1
    type(class1) obj

    call set_case_name("test_class1")

    obj = class1_new()
    call assert_true(c_associated(obj%get_instance()), "class1_new")

    call obj%method1
    call assert_true(.true.)

    call useclass(obj)

    call obj%delete
    call assert_true(.not. c_associated(obj%get_instance()), "class1_delete")
  end subroutine test_class1

end program tester
