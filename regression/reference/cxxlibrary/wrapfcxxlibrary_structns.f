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
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg
        ! Attrs:     +intent(inout)
        ! Exact:     c_inout_struct_&
        function pass_struct_by_reference(arg) &
                result(SHT_rv) &
                bind(C, name="CXX_structns_passStructByReference")
            use iso_c_binding, only : C_INT
            import :: cstruct1
            implicit none
            type(cstruct1), intent(INOUT) :: arg
            integer(C_INT) :: SHT_rv
        end function pass_struct_by_reference

        ! ----------------------------------------
        ! Function:  int passStructByReferenceIn
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  const Cstruct1 & arg
        ! Attrs:     +intent(in)
        ! Exact:     c_in_struct_&
        function pass_struct_by_reference_in(arg) &
                result(SHT_rv) &
                bind(C, name="CXX_structns_passStructByReferenceIn")
            use iso_c_binding, only : C_INT
            import :: cstruct1
            implicit none
            type(cstruct1), intent(IN) :: arg
            integer(C_INT) :: SHT_rv
        end function pass_struct_by_reference_in

        ! ----------------------------------------
        ! Function:  void passStructByReferenceInout
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg +intent(inout)
        ! Attrs:     +intent(inout)
        ! Exact:     c_inout_struct_&
        subroutine pass_struct_by_reference_inout(arg) &
                bind(C, name="CXX_structns_passStructByReferenceInout")
            import :: cstruct1
            implicit none
            type(cstruct1), intent(INOUT) :: arg
        end subroutine pass_struct_by_reference_inout

        ! ----------------------------------------
        ! Function:  void passStructByReferenceOut
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  Cstruct1 & arg +intent(out)
        ! Attrs:     +intent(out)
        ! Exact:     c_out_struct_&
        subroutine pass_struct_by_reference_out(arg) &
                bind(C, name="CXX_structns_passStructByReferenceOut")
            import :: cstruct1
            implicit none
            type(cstruct1), intent(OUT) :: arg
        end subroutine pass_struct_by_reference_out
    end interface

    ! splicer begin namespace.structns.additional_declarations
    ! splicer end namespace.structns.additional_declarations

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int passStructByReference
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  Cstruct1 & arg
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_struct_&
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_struct_&
    !>
    !! Argument is modified by library, defaults to intent(inout).
    !<
    function pass_struct_by_reference(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        type(cstruct1), intent(INOUT) :: arg
        integer(C_INT) :: SHT_rv
        ! splicer begin namespace.structns.function.pass_struct_by_reference
        SHT_rv = c_pass_struct_by_reference(arg)
        ! splicer end namespace.structns.function.pass_struct_by_reference
    end function pass_struct_by_reference
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int passStructByReferenceIn
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  const Cstruct1 & arg
    ! Attrs:     +intent(in)
    ! Exact:     f_in_struct_&
    ! Attrs:     +intent(in)
    ! Exact:     f_in_struct_&
    !>
    !! const defaults to intent(in)
    !<
    function pass_struct_by_reference_in(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        type(cstruct1), intent(IN) :: arg
        integer(C_INT) :: SHT_rv
        ! splicer begin namespace.structns.function.pass_struct_by_reference_in
        SHT_rv = c_pass_struct_by_reference_in(arg)
        ! splicer end namespace.structns.function.pass_struct_by_reference_in
    end function pass_struct_by_reference_in
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void passStructByReferenceInout
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  Cstruct1 & arg +intent(inout)
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_struct_&
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_struct_&
    subroutine pass_struct_by_reference_inout(arg)
        type(cstruct1), intent(INOUT) :: arg
        ! splicer begin namespace.structns.function.pass_struct_by_reference_inout
        call c_pass_struct_by_reference_inout(arg)
        ! splicer end namespace.structns.function.pass_struct_by_reference_inout
    end subroutine pass_struct_by_reference_inout
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void passStructByReferenceOut
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  Cstruct1 & arg +intent(out)
    ! Attrs:     +intent(out)
    ! Exact:     f_out_struct_&
    ! Attrs:     +intent(out)
    ! Exact:     f_out_struct_&
    subroutine pass_struct_by_reference_out(arg)
        type(cstruct1), intent(OUT) :: arg
        ! splicer begin namespace.structns.function.pass_struct_by_reference_out
        call c_pass_struct_by_reference_out(arg)
        ! splicer end namespace.structns.function.pass_struct_by_reference_out
    end subroutine pass_struct_by_reference_out
#endif

    ! splicer begin namespace.structns.additional_functions
    ! splicer end namespace.structns.additional_functions

end module cxxlibrary_structns_mod
