! wrapfns.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfns.f
!! \brief Shroud generated wrapper for ns library
!<
! splicer begin file_top
! splicer end file_top
module ns_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! helper capsule_data_helper
    type, bind(C) :: NS_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type NS_SHROUD_capsule_data

    ! helper array_context
    type, bind(C) :: NS_SHROUD_array
        ! address of C++ memory
        type(NS_SHROUD_capsule_data) :: cxx
        ! address of data in cxx
        type(C_PTR) :: base_addr = C_NULL_PTR
        ! type of element
        integer(C_INT) :: type
        ! bytes-per-item or character len of data in cxx
        integer(C_SIZE_T) :: elem_len = 0_C_SIZE_T
        ! size of data in cxx
        integer(C_SIZE_T) :: size = 0_C_SIZE_T
        ! number of dimensions
        integer(C_INT) :: rank = -1
        integer(C_LONG) :: shape(7) = 0
    end type NS_SHROUD_array

    !  enum upper::Color
    integer(C_INT), parameter :: upper_error = 0
    integer(C_INT), parameter :: upper_warn = 1

    type classwork
        type(NS_SHROUD_capsule_data) :: cxxmem
        ! splicer begin namespace.outer.class.ClassWork.component_part
        ! splicer end namespace.outer.class.ClassWork.component_part
    contains
        procedure :: get_instance => nswork_classwork_get_instance
        procedure :: set_instance => nswork_classwork_set_instance
        procedure :: associated => nswork_classwork_associated
        ! splicer begin namespace.outer.class.ClassWork.type_bound_procedure_part
        ! splicer end namespace.outer.class.ClassWork.type_bound_procedure_part
    end type classwork

    interface operator (.eq.)
        module procedure nswork_classwork_eq
    end interface

    interface operator (.ne.)
        module procedure nswork_classwork_ne
    end interface

    interface

        ! ----------------------------------------
        ! Function:  const std::string & LastFunctionCalled
        ! Attrs:     +deref(allocatable)+intent(function)
        ! Requested: c_function_string_&_allocatable
        ! Match:     c_function_string_&
        function c_last_function_called() &
                result(SHT_rv) &
                bind(C, name="NS_last_function_called")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) SHT_rv
        end function c_last_function_called

        ! ----------------------------------------
        ! Function:  const std::string & LastFunctionCalled
        ! Attrs:     +api(cdesc)+deref(allocatable)+intent(function)
        ! Exact:     c_function_string_&_cdesc_allocatable
        subroutine c_last_function_called_bufferify(SHT_rv) &
                bind(C, name="NS_last_function_called_bufferify")
            import :: NS_SHROUD_array
            implicit none
            type(NS_SHROUD_array), intent(OUT) :: SHT_rv
        end subroutine c_last_function_called_bufferify

        ! ----------------------------------------
        ! Function:  void One
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine one() &
                bind(C, name="NS_one")
            implicit none
        end subroutine one

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces

        ! splicer begin namespace.outer.class.ClassWork.additional_interfaces
        ! splicer end namespace.outer.class.ClassWork.additional_interfaces
    end interface

    interface
        ! helper copy_string
        ! Copy the char* or std::string in context into c_var.
        subroutine NS_SHROUD_copy_string_and_free(context, c_var, c_var_size) &
             bind(c,name="NS_ShroudCopyStringAndFree")
            use, intrinsic :: iso_c_binding, only : C_CHAR, C_SIZE_T
            import NS_SHROUD_array
            type(NS_SHROUD_array), intent(IN) :: context
            character(kind=C_CHAR), intent(OUT) :: c_var(*)
            integer(C_SIZE_T), value :: c_var_size
        end subroutine NS_SHROUD_copy_string_and_free
    end interface

contains

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  const std::string & LastFunctionCalled
    ! Attrs:     +deref(allocatable)+intent(function)
    ! Exact:     f_function_string_&_cdesc_allocatable
    ! Attrs:     +api(cdesc)+deref(allocatable)+intent(function)
    ! Exact:     c_function_string_&_cdesc_allocatable
    function last_function_called() &
            result(SHT_rv)
        character(len=:), allocatable :: SHT_rv
        ! splicer begin function.last_function_called
        type(NS_SHROUD_array) :: SHT_rv_cdesc
        call c_last_function_called_bufferify(SHT_rv_cdesc)
        allocate(character(len=SHT_rv_cdesc%elem_len):: SHT_rv)
        call NS_SHROUD_copy_string_and_free(SHT_rv_cdesc, SHT_rv, &
            SHT_rv_cdesc%elem_len)
        ! splicer end function.last_function_called
    end function last_function_called

    ! splicer begin additional_functions
    ! splicer end additional_functions

    ! Return pointer to C++ memory.
    function nswork_classwork_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(classwork), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function nswork_classwork_get_instance

    subroutine nswork_classwork_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(classwork), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine nswork_classwork_set_instance

    function nswork_classwork_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(classwork), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function nswork_classwork_associated

    ! splicer begin namespace.outer.class.ClassWork.additional_functions
    ! splicer end namespace.outer.class.ClassWork.additional_functions

    function nswork_classwork_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(classwork), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function nswork_classwork_eq

    function nswork_classwork_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(classwork), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function nswork_classwork_ne

end module ns_mod
