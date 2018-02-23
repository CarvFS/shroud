! wrapfClass1.f
! This is generated code, do not edit
! #######################################################################
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
!>
!! \file wrapfClass1.f
!! \brief Shroud generated wrapper for Class1 class
!<
module class1_mod
    use iso_c_binding, only : C_PTR
    implicit none



    type class1
        type(C_PTR), private :: voidptr
    contains
        procedure :: method1 => class1_method1
        procedure :: dtor => class1_dtor
        procedure :: get_instance => class1_get_instance
        procedure :: set_instance => class1_set_instance
        procedure :: associated => class1_associated
    end type class1

    interface operator (.eq.)
        module procedure class1_eq
    end interface

    interface operator (.ne.)
        module procedure class1_ne
    end interface

    interface

        subroutine c_class1_method1(self, arg1) &
                bind(C, name="DEF_class1_method1")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            type(C_PTR), value, intent(IN) :: self
            integer(C_INT), value, intent(IN) :: arg1
        end subroutine c_class1_method1

        function c_class1_ctor() &
                result(SHT_rv) &
                bind(C, name="DEF_class1_ctor")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) :: SHT_rv
        end function c_class1_ctor

        subroutine c_class1_dtor(self) &
                bind(C, name="DEF_class1_dtor")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR), value, intent(IN) :: self
        end subroutine c_class1_dtor

    end interface

contains

    subroutine class1_method1(obj, arg1)
        use iso_c_binding, only : C_INT
        class(class1) :: obj
        integer(C_INT), value, intent(IN) :: arg1
        call c_class1_method1(obj%voidptr, arg1)
    end subroutine class1_method1

    function class1_ctor() &
            result(SHT_rv)
        type(class1) :: SHT_rv
        SHT_rv%voidptr = c_class1_ctor()
    end function class1_ctor

    subroutine class1_dtor(obj)
        use iso_c_binding, only : C_NULL_PTR
        class(class1) :: obj
        call c_class1_dtor(obj%voidptr)
        obj%voidptr = C_NULL_PTR
    end subroutine class1_dtor

    function class1_get_instance(obj) result (voidptr)
        use iso_c_binding, only: C_PTR
        class(class1), intent(IN) :: obj
        type(C_PTR) :: voidptr
        voidptr = obj%voidptr
    end function class1_get_instance

    subroutine class1_set_instance(obj, voidptr)
        use iso_c_binding, only: C_PTR
        class(class1), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: voidptr
        obj%voidptr = voidptr
    end subroutine class1_set_instance

    function class1_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(class1), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%voidptr)
    end function class1_associated


    function class1_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class1), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%voidptr, b%voidptr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class1_eq

    function class1_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class1), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%voidptr, b%voidptr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class1_ne

end module class1_mod
