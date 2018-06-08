! Copyright (c) 2017-2018, Lawrence Livermore National Security, LLC. 
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
! Test code generated by the strings test
!
program tester
  use fruit
  use iso_c_binding
  use strings_mod
  implicit none
  logical ok

  call init_fruit

  call test_charargs
  call test_charargs_c
  call test_functions

  call fruit_summary
  call fruit_finalize

  call is_all_successful(ok)
  if (.not. ok) then
     call exit(1)
  endif

contains

  subroutine test_charargs
    ! test C++ functions

    character(30) str
    character ch

    call set_case_name("test_charargs")

    call pass_char("w")

    ch = return_char()
    call assert_true( ch == "w")

    ! character(*) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call pass_char_ptr(dest=str, src="bird")
    call assert_true( str == "bird")

    ! call C version directly via the interface
    ! caller is responsible for nulls
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call c_pass_char_ptr(dest=str, src="mouse" // C_NULL_CHAR)
    call assert_true( str(1:5) == "mouse")
    call assert_true( str(6:6) == C_NULL_CHAR)

    str = 'dog'
    call pass_char_ptr_in_out(str)
    call assert_true( str == "DOG")

  end subroutine test_charargs

  subroutine test_charargs_c
    ! test extern "C" functions

    character(30) str
    character ch

    call set_case_name("test_charargs_c")

    call cpass_char("w")

    ch = creturn_char()
    call assert_true( ch == "w")

    ! character(*) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call cpass_char_ptr(dest=str, src="bird")
    call assert_true( str == "bird")

    ! call C version directly via the interface
    ! caller is responsible for nulls
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call c_cpass_char_ptr(dest=str, src="mouse" // C_NULL_CHAR)
    call assert_true( str(1:5) == "mouse")
    call assert_true( str(6:6) == C_NULL_CHAR)

  end subroutine test_charargs_c

  subroutine test_functions

    character(30) str
    character(30), parameter :: static_str = "dog                         "

    call set_case_name("test_functions")

    ! problem with pgi
    ! character(*) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_char_ptr1()
    call assert_true( str == "bird")

    ! character(30) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_char_ptr2()
    call assert_true( str == "bird")

    ! string_result_as_arg
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call get_char_ptr3(str)
    call assert_true( str == "bird")
 
!--------------------------------------------------

    ! character(:), allocatable function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_result()
    call assert_true(str == "getConstStringResult", "getConstStringResult")

    ! character(30) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_len()
    call assert_true(str == static_str, "getConstStringLen")

    ! string_result_as_arg
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call get_const_string_as_arg(str)
    call assert_true(str == static_str, "getConstStringAsArg")

    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_alloc()
    call assert_true(str == "getConstStringAlloc", "getConstStringAlloc")
 
!--------------------------------------------------

    ! problem with pgi
    ! character(*) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ref_pure()
    call assert_true( str == static_str, "getConstStringRefPure")

    ! character(30) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ref_len()
    call assert_true( str == static_str, "getConstStringRefLen")

    ! string_result_as_arg
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    call get_const_string_ref_as_arg(str)
    call assert_true( str == static_str, "getConstStringRefAsArg")
 
    ! character(30) function
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ref_len_empty()
    call assert_true( str == " ", "getConstStringRefLenEmpty")

    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ref_alloc()
    call assert_true( str == static_str, "getConstStringRefAlloc")

!--------------------------------------------------

    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ptr_len()
    call assert_true(str == "getConstStringPtrLen", "getConstStringPtrLen")

    ! string_result_as_arg
 
    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ptr_alloc()
    call assert_true( str == static_str, "getConstStringPtrAlloc")

    str = 'XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX'
    str = get_const_string_ptr_owns_alloc()
    call assert_true( str == "getConstStringPtrOwnsAlloc", "getConstStringPtrOwnsAlloc")

!--------------------------------------------------

    call accept_string_const_reference("cat")
!    check global_str == "cat"

    str = " "
    call accept_string_reference_out(str)
    call assert_true( str == "dog")

    str = "cat"
    call accept_string_reference(str)
    call assert_true( str == "catdog")

    ! call C version directly via the interface
    ! caller is responsible for nulls
    ! str must be long enough for the result from the function
    str = "cat" // C_NULL_CHAR
    call c_accept_string_reference(str)
    call assert_true( str(1:6) == "catdog")
    call assert_true( str(7:7) == C_NULL_CHAR)

    str = "bird"
    call accept_string_pointer(str)
    call assert_true( str == "birddog")

  end subroutine test_functions

end program tester
