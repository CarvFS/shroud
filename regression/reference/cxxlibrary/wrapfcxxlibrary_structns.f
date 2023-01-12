! wrapfcxxlibrary_structns.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfcxxlibrary_structns.f
!! \brief Shroud generated wrapper for structns namespace
!<
! splicer begin namespace.structns.file_top
! splicer end namespace.structns.file_top
module cxxlibrary_structns_mod
    use iso_c_binding, only : C_DOUBLE, C_INT
    ! splicer begin namespace.structns.module_use
    ! splicer end namespace.structns.module_use
    implicit none

    ! splicer begin namespace.structns.module_top
    ! splicer end namespace.structns.module_top


    type, bind(C) :: cstruct1
        integer(C_INT) :: ifield
        real(C_DOUBLE) :: dfield
    end type cstruct1

    interface

        ! ----------------------------------------
        ! Function:  int passStructByReference
        ! Attrs:     +intent(function)
        ! Requested: c_function_native_scalar
        ! Match:     c_function
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg
        ! Attrs:     +intent(inout)
        ! Requested: c_inout_struct_&
        ! Match:     c_inout_struct
        function pass_struct_by_reference(arg) &
                result(SHT_rv) &
                bind(C, name="CXX_structns_pass_struct_by_reference")
            use iso_c_binding, only : C_INT
            import :: cstruct1
            implicit none
            type(cstruct1), intent(INOUT) :: arg
            integer(C_INT) :: SHT_rv
        end function pass_struct_by_reference

        ! ----------------------------------------
        ! Function:  int passStructByReferenceIn
        ! Attrs:     +intent(function)
        ! Requested: c_function_native_scalar
        ! Match:     c_function
        ! ----------------------------------------
        ! Argument:  const Cstruct1 & arg
        ! Attrs:     +intent(in)
        ! Requested: c_in_struct_&
        ! Match:     c_in_struct
        function pass_struct_by_reference_in(arg) &
                result(SHT_rv) &
                bind(C, name="CXX_structns_pass_struct_by_reference_in")
            use iso_c_binding, only : C_INT
            import :: cstruct1
            implicit none
            type(cstruct1), intent(IN) :: arg
            integer(C_INT) :: SHT_rv
        end function pass_struct_by_reference_in

        ! ----------------------------------------
        ! Function:  void passStructByReferenceInout
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg +intent(inout)
        ! Attrs:     +intent(inout)
        ! Requested: c_inout_struct_&
        ! Match:     c_inout_struct
        subroutine pass_struct_by_reference_inout(arg) &
                bind(C, name="CXX_structns_pass_struct_by_reference_inout")
            import :: cstruct1
            implicit none
            type(cstruct1), intent(INOUT) :: arg
        end subroutine pass_struct_by_reference_inout

        ! ----------------------------------------
        ! Function:  void passStructByReferenceOut
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg +intent(out)
        ! Attrs:     +intent(out)
        ! Requested: c_out_struct_&
        ! Match:     c_out_struct
        subroutine pass_struct_by_reference_out(arg) &
                bind(C, name="CXX_structns_pass_struct_by_reference_out")
            import :: cstruct1
            implicit none
            type(cstruct1), intent(OUT) :: arg
        end subroutine pass_struct_by_reference_out

        ! splicer begin namespace.structns.additional_interfaces
        ! splicer end namespace.structns.additional_interfaces
    end interface

contains

    ! splicer begin namespace.structns.additional_functions
    ! splicer end namespace.structns.additional_functions

end module cxxlibrary_structns_mod
