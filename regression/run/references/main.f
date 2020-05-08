! Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
! #######################################################################
!
! Test Fortran API generated from references.yaml.
!
program tester
  use fruit
  use iso_c_binding
  use references_mod
  implicit none
  logical ok

  call init_fruit

  call test_arraywrapper

  call fruit_summary
  call fruit_finalize

  call is_all_successful(ok)
  if (.not. ok) then
     call exit(1)
  endif

contains

  subroutine test_arraywrapper
    type(ArrayWrapper) arr1
    real(C_DOUBLE), pointer :: arr(:)

    arr1 = ArrayWrapper_ctor()
    call arr1%set_size(10)
    call assert_equals(10, arr1%get_size())

    call arr1%allocate()
    arr => arr1%get_array()
    call assert_true(associated(arr))
    call assert_equals(10, size(arr))
    
  end subroutine test_arraywrapper
    
end program tester
