! Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
! #######################################################################
!
! Test code generated by the tutorial test
!
program tester
  use fruit
  use iso_c_binding
  use pointers_mod
  implicit none
  real(C_DOUBLE), parameter :: pi = 3.1415926_C_DOUBLE
  logical ok

  call init_fruit

  call test_functions
  call test_functions2
  call test_char_arrays

  call fruit_summary
  call fruit_finalize

  call is_all_successful(ok)
  if (.not. ok) then
     call exit(1)
  endif

contains

  subroutine test_functions
    integer(c_int) iargin, iarginout, iargout
    real(c_double) :: in_double(5)
    real(c_double), allocatable :: out_double(:)
    integer(c_int), allocatable :: out_int(:)
    integer(c_int) :: nvalues, values1(3), values2(3)

    call set_case_name("test_functions")

    iargin    = 1
    iarginout = 2
    iargout   = -1
    call intargs(iargin, iarginout, iargout)
    call assert_true(iarginout == 1)
    call assert_true(iargout   == 2)

    call assert_false(allocated(out_double))
    in_double = [0.0*pi, 0.5*pi, pi, 1.5*pi, 2.0*pi]
    call cos_doubles(in_double, out_double)
    call assert_true(allocated(out_double))
    call assert_true(all(abs(out_double - cos(in_double)) < 1.e-08 ))

    call assert_false(allocated(out_int))
    call truncate_to_int([1.2d0, 2.3d0, 3.4d0, 4.5d0], out_int)
    call assert_true(allocated(out_int))
    call assert_true(all(out_int == [1, 2, 3, 4]))

    values1 = 0
    call get_values(nvalues, values1)
    call assert_equals(3, nvalues)
    call assert_true(all(values1(1:3) == [1, 2, 3]))

    values1 = 0
    values2 = 0
    call get_values2(values1, values2)
    call assert_true(all(values1(1:3) == [1, 2, 3]))
    call assert_true(all(values2(1:3) == [11, 12, 13]))

    values1 = 0
    call iota_allocatable(nvalues, values1)
    call assert_equals(3, nvalues)
    call assert_true(all(values1(1:3) == [1, 2, 3]))

    values1 = 0
    call iota_dimension(nvalues, values1)
    call assert_equals(3, nvalues)
    call assert_true(all(values1(1:3) == [1, 2, 3]))

  end subroutine test_functions

  subroutine test_functions2
    integer(c_int) rv_int, out(3), values(5)

    call set_case_name("test_functions2")

    call sum([1,2,3,4,5], rv_int)
    call assert_true(rv_int .eq. 15, "sum")

    out = 0
    call fill_int_array(out)
    call assert_true(all(out(1:3) == [1, 2, 3]), "fillIntArray")

    values = [1, 2, 3, 4, 5]
    call increment_int_array(values)
    call assert_true(all(values(1:5) == [2, 3, 4, 5, 6]), "incrementIntArray")

  end subroutine test_functions2

  subroutine test_char_arrays
    character(10) :: in(3) = [ &
         "dog       ", &
         "cat       ", &
         "monkey    "  &
         ]

    call set_case_name("test_char_arrays")

    call accept_char_array_in(in)
  end subroutine test_char_arrays

end program tester
