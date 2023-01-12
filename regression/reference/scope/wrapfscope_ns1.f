! wrapfscope_ns1.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfscope_ns1.f
!! \brief Shroud generated wrapper for ns1 namespace
!<
! splicer begin namespace.ns1.file_top
! splicer end namespace.ns1.file_top
module scope_ns1_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin namespace.ns1.module_use
    ! splicer end namespace.ns1.module_use
    implicit none

    ! splicer begin namespace.ns1.module_top
    ! splicer end namespace.ns1.module_top

    ! helper capsule_data_helper
    type, bind(C) :: SCO_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type SCO_SHROUD_capsule_data

    ! helper array_context
    type, bind(C) :: SCO_SHROUD_array
        ! address of C++ memory
        type(SCO_SHROUD_capsule_data) :: cxx
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
    end type SCO_SHROUD_array

    !  enum ns1::Color
    integer(C_INT), parameter :: red = 20
    integer(C_INT), parameter :: blue = 21
    integer(C_INT), parameter :: white = 22


    type, bind(C) :: datapointer
        integer(C_INT) :: nitems
        type(C_PTR) :: items
    end type datapointer

    interface

        ! ----------------------------------------
        ! Function:  int * DataPointer_get_items
        ! Attrs:     +api(cdesc)+deref(pointer)+intent(getter)+struct(ns1_DataPointer)
        ! Requested: c_getter_native_*_cdesc_pointer
        ! Match:     c_getter_native_*_cdesc
        ! ----------------------------------------
        ! Argument:  ns1::DataPointer * SH_this
        ! Attrs:     +intent(in)+struct(ns1_DataPointer)
        ! Requested: c_in_struct_*
        ! Match:     c_in_struct
        subroutine c_data_pointer_get_items_bufferify(SH_this, SHT_rv) &
                bind(C, name="SCO_ns1_data_pointer_get_items_bufferify")
            import :: SCO_SHROUD_array, datapointer
            implicit none
            type(datapointer), intent(IN) :: SH_this
            type(SCO_SHROUD_array), intent(OUT) :: SHT_rv
        end subroutine c_data_pointer_get_items_bufferify

        ! ----------------------------------------
        ! Function:  void DataPointer_set_items
        ! Attrs:     +intent(setter)
        ! Requested: c_setter_void_scalar
        ! Match:     c_setter
        ! ----------------------------------------
        ! Argument:  ns1::DataPointer * SH_this
        ! Attrs:     +intent(inout)+struct(ns1_DataPointer)
        ! Requested: c_inout_struct_*
        ! Match:     c_inout_struct
        ! ----------------------------------------
        ! Argument:  int * val +intent(in)+rank(1)
        ! Attrs:     +intent(setter)
        ! Exact:     c_setter_native_*
        subroutine data_pointer_set_items(SH_this, val) &
                bind(C, name="SCO_ns1_data_pointer_set_items")
            use iso_c_binding, only : C_INT
            import :: datapointer
            implicit none
            type(datapointer), intent(INOUT) :: SH_this
            integer(C_INT), intent(IN) :: val(*)
        end subroutine data_pointer_set_items

        ! splicer begin namespace.ns1.additional_interfaces
        ! splicer end namespace.ns1.additional_interfaces
    end interface

contains

    ! Generated by getter/setter - arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * DataPointer_get_items
    ! Attrs:     +deref(pointer)+intent(getter)+struct(ns1_DataPointer)
    ! Exact:     f_getter_native_*_cdesc_pointer
    ! Attrs:     +api(cdesc)+deref(pointer)+intent(getter)+struct(ns1_DataPointer)
    ! Requested: c_getter_native_*_cdesc_pointer
    ! Match:     c_getter_native_*_cdesc
    ! ----------------------------------------
    ! Argument:  ns1::DataPointer * SH_this
    ! Attrs:     +intent(in)+struct(ns1_DataPointer)
    ! Requested: f_in_struct_*
    ! Match:     f_default
    ! Attrs:     +intent(in)+struct(ns1_DataPointer)
    ! Requested: c_in_struct_*
    ! Match:     c_in_struct
    function data_pointer_get_items(SH_this) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, c_f_pointer
        type(datapointer), intent(IN) :: SH_this
        integer(C_INT), pointer :: SHT_rv(:)
        ! splicer begin namespace.ns1.function.data_pointer_get_items
        type(SCO_SHROUD_array) :: SHT_rv_cdesc
        call c_data_pointer_get_items_bufferify(SH_this, SHT_rv_cdesc)
        call c_f_pointer(SHT_rv_cdesc%base_addr, SHT_rv, &
            SHT_rv_cdesc%shape(1:1))
        ! splicer end namespace.ns1.function.data_pointer_get_items
    end function data_pointer_get_items

    ! splicer begin namespace.ns1.additional_functions
    ! splicer end namespace.ns1.additional_functions

end module scope_ns1_mod
