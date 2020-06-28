! wrapfownership.f
! This file is generated by Shroud 0.12.1. Do not edit.
! Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfownership.f
!! \brief Shroud generated wrapper for ownership library
!<
! splicer begin file_top
! splicer end file_top
module ownership_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! helper capsule_data_helper
    type, bind(C) :: SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type SHROUD_capsule_data

    ! helper array_context
    type, bind(C) :: SHROUD_array
        ! address of C++ memory
        type(SHROUD_capsule_data) :: cxx
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
    end type SHROUD_array

    ! helper capsule_helper
    type SHROUD_capsule
        private
        type(SHROUD_capsule_data) :: mem
    contains
        final :: SHROUD_capsule_final
        procedure :: delete => SHROUD_capsule_delete
    end type SHROUD_capsule

    type, bind(C) :: SHROUD_class1_capsule
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type SHROUD_class1_capsule

    type class1
        type(SHROUD_class1_capsule) :: cxxmem
        ! splicer begin class.Class1.component_part
        ! splicer end class.Class1.component_part
    contains
        procedure :: dtor => class1_dtor
        procedure :: get_flag => class1_get_flag
        procedure :: get_instance => class1_get_instance
        procedure :: set_instance => class1_set_instance
        procedure :: associated => class1_associated
        ! splicer begin class.Class1.type_bound_procedure_part
        ! splicer end class.Class1.type_bound_procedure_part
    end type class1

    interface operator (.eq.)
        module procedure class1_eq
    end interface

    interface operator (.ne.)
        module procedure class1_ne
    end interface

    interface

        ! ----------------------------------------
        ! Function:  ~Class1
        ! Requested: c_void_scalar_result
        ! Match:     c_default
        subroutine c_class1_dtor(self) &
                bind(C, name="OWN_Class1_dtor")
            import :: SHROUD_class1_capsule
            implicit none
            type(SHROUD_class1_capsule), intent(IN) :: self
        end subroutine c_class1_dtor

        ! ----------------------------------------
        ! Function:  int getFlag
        ! Requested: c_native_scalar_result
        ! Match:     c_default
        function c_class1_get_flag(self) &
                result(SHT_rv) &
                bind(C, name="OWN_Class1_get_flag")
            use iso_c_binding, only : C_INT
            import :: SHROUD_class1_capsule
            implicit none
            type(SHROUD_class1_capsule), intent(IN) :: self
            integer(C_INT) :: SHT_rv
        end function c_class1_get_flag

        ! splicer begin class.Class1.additional_interfaces
        ! splicer end class.Class1.additional_interfaces

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrRaw +deref(raw)
        ! Requested: c_native_*_result
        ! Match:     c_default
        function c_return_int_ptr_raw() &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_raw")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_raw

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrScalar +deref(scalar)
        ! Requested: c_native_*_result
        ! Match:     c_default
        function return_int_ptr_scalar() &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_scalar")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT) :: SHT_rv
        end function return_int_ptr_scalar

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrPointer +deref(pointer)
        ! Requested: c_native_*_result
        ! Match:     c_default
        function c_return_int_ptr_pointer() &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_pointer")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_pointer

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimRaw +deref(raw)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_raw(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_raw")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_raw

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimPointer +deref(pointer)+dimension(len)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_pointer(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_pointer")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_pointer

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimPointer +context(DSHC_rv)+deref(pointer)+dimension(len)
        ! Exact:     c_native_*_result_buf
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out_buf
        ! Match:     c_default
        function c_return_int_ptr_dim_pointer_bufferify(DSHC_rv, len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_pointer_bufferify")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_array
            implicit none
            type(SHROUD_array), intent(INOUT) :: DSHC_rv
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_pointer_bufferify

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimAlloc +deref(allocatable)+dimension(len)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_alloc(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_alloc")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_alloc

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimAlloc +context(DSHC_rv)+deref(allocatable)+dimension(len)
        ! Exact:     c_native_*_result_buf
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out_buf
        ! Match:     c_default
        function c_return_int_ptr_dim_alloc_bufferify(DSHC_rv, len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_alloc_bufferify")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_array
            implicit none
            type(SHROUD_array), intent(INOUT) :: DSHC_rv
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_alloc_bufferify

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimDefault +deref(pointer)+dimension(len)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_default(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_default")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_default

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimDefault +context(DSHC_rv)+deref(pointer)+dimension(len)
        ! Exact:     c_native_*_result_buf
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out_buf
        ! Match:     c_default
        function c_return_int_ptr_dim_default_bufferify(DSHC_rv, len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_default_bufferify")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_array
            implicit none
            type(SHROUD_array), intent(INOUT) :: DSHC_rv
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_default_bufferify

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimRawNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_raw_new(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_raw_new")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_raw_new

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimPointerNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_pointer_new(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_pointer_new")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_pointer_new

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimPointerNew +capsule(Crv)+context(DSHC_rv)+deref(pointer)+dimension(len)+owner(caller)
        ! Exact:     c_native_*_result_buf
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out_buf
        ! Match:     c_default
        function c_return_int_ptr_dim_pointer_new_bufferify(DSHC_rv, &
                len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_pointer_new_bufferify")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_array
            implicit none
            type(SHROUD_array), intent(INOUT) :: DSHC_rv
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_pointer_new_bufferify

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimAllocNew +deref(allocatable)+dimension(len)+owner(caller)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_alloc_new(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_alloc_new")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_alloc_new

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimDefaultNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
        ! Requested: c_native_*_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out
        ! Match:     c_default
        function c_return_int_ptr_dim_default_new(len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_default_new")
            use iso_c_binding, only : C_INT, C_PTR
            implicit none
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_default_new

        ! ----------------------------------------
        ! Function:  int * ReturnIntPtrDimDefaultNew +capsule(Crv)+context(DSHC_rv)+deref(pointer)+dimension(len)+owner(caller)
        ! Exact:     c_native_*_result_buf
        ! ----------------------------------------
        ! Argument:  int * len +hidden+intent(out)
        ! Requested: c_native_*_out_buf
        ! Match:     c_default
        function c_return_int_ptr_dim_default_new_bufferify(DSHC_rv, &
                len) &
                result(SHT_rv) &
                bind(C, name="OWN_return_int_ptr_dim_default_new_bufferify")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_array
            implicit none
            type(SHROUD_array), intent(INOUT) :: DSHC_rv
            integer(C_INT), intent(OUT) :: len
            type(C_PTR) SHT_rv
        end function c_return_int_ptr_dim_default_new_bufferify

        ! ----------------------------------------
        ! Function:  void createClassStatic
        ! Requested: c_void_scalar_result
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int flag +intent(in)+value
        ! Requested: c_native_scalar_in
        ! Match:     c_default
        subroutine create_class_static(flag) &
                bind(C, name="OWN_create_class_static")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: flag
        end subroutine create_class_static

        ! ----------------------------------------
        ! Function:  Class1 * getClassStatic +owner(library)
        ! Requested: c_shadow_*_result
        ! Match:     c_shadow_result
        function c_get_class_static(SHT_crv) &
                result(SHT_rv) &
                bind(C, name="OWN_get_class_static")
            use iso_c_binding, only : C_PTR
            import :: SHROUD_class1_capsule
            implicit none
            type(SHROUD_class1_capsule), intent(OUT) :: SHT_crv
            type(C_PTR) SHT_rv
        end function c_get_class_static

        ! ----------------------------------------
        ! Function:  Class1 * getClassNew +owner(caller)
        ! Requested: c_shadow_*_result
        ! Match:     c_shadow_result
        ! ----------------------------------------
        ! Argument:  int flag +intent(in)+value
        ! Requested: c_native_scalar_in
        ! Match:     c_default
        function c_get_class_new(flag, SHT_crv) &
                result(SHT_rv) &
                bind(C, name="OWN_get_class_new")
            use iso_c_binding, only : C_INT, C_PTR
            import :: SHROUD_class1_capsule
            implicit none
            integer(C_INT), value, intent(IN) :: flag
            type(SHROUD_class1_capsule), intent(OUT) :: SHT_crv
            type(C_PTR) SHT_rv
        end function c_get_class_new

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

    interface
        ! helper capsule_dtor
        ! Delete memory in a capsule.
        subroutine SHROUD_capsule_dtor(ptr) &
            bind(C, name="OWN_SHROUD_memory_destructor")
            import SHROUD_capsule_data
            implicit none
            type(SHROUD_capsule_data), intent(INOUT) :: ptr
        end subroutine SHROUD_capsule_dtor
    end interface

    interface
        ! helper copy_array_int
        ! Copy contents of context into c_var.
        subroutine SHROUD_copy_array_int(context, c_var, c_var_size) &
            bind(C, name="OWN_ShroudCopyArray")
            use iso_c_binding, only : C_INT, C_SIZE_T
            import SHROUD_array
            type(SHROUD_array), intent(IN) :: context
            integer(C_INT), intent(OUT) :: c_var(*)
            integer(C_SIZE_T), value :: c_var_size
        end subroutine SHROUD_copy_array_int
    end interface

contains

    ! ----------------------------------------
    ! Function:  ~Class1
    ! ~Class1
    ! Requested: f_shadow_dtor
    ! Match:     f_default
    ! Exact:     c_shadow_dtor
    subroutine class1_dtor(obj)
        class(class1) :: obj
        ! splicer begin class.Class1.method.dtor
        call c_class1_dtor(obj%cxxmem)
        ! splicer end class.Class1.method.dtor
    end subroutine class1_dtor

    ! ----------------------------------------
    ! Function:  int getFlag
    ! int getFlag
    ! Requested: f_native_scalar_result
    ! Match:     f_default
    ! Requested: c_native_scalar_result
    ! Match:     c_default
    function class1_get_flag(obj) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        class(class1) :: obj
        integer(C_INT) :: SHT_rv
        ! splicer begin class.Class1.method.get_flag
        SHT_rv = c_class1_get_flag(obj%cxxmem)
        ! splicer end class.Class1.method.get_flag
    end function class1_get_flag

    ! Return pointer to C++ memory.
    function class1_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(class1), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function class1_get_instance

    subroutine class1_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(class1), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine class1_set_instance

    function class1_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(class1), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function class1_associated

    ! splicer begin class.Class1.additional_functions
    ! splicer end class.Class1.additional_functions

    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrPointer +deref(pointer)
    ! int * ReturnIntPtrPointer +deref(pointer)
    ! Exact:     f_native_*_result_pointer
    ! Requested: c_native_*_result
    ! Match:     c_default
    function return_int_ptr_pointer() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, c_f_pointer
        integer(C_INT), pointer :: SHT_rv
        ! splicer begin function.return_int_ptr_pointer
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_pointer()
        call c_f_pointer(SHT_ptr, SHT_rv)
        ! splicer end function.return_int_ptr_pointer
    end function return_int_ptr_pointer

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrDimPointer +deref(pointer)+dimension(len)
    ! int * ReturnIntPtrDimPointer +deref(pointer)+dimension(len)
    ! Exact:     f_native_*_result_pointer
    ! Function:  int * ReturnIntPtrDimPointer +context(DSHC_rv)+deref(pointer)+dimension(len)
    ! Exact:     c_native_*_result_buf
    ! ----------------------------------------
    ! Argument:  int * len +hidden+intent(out)
    ! Requested: f_native_*_out
    ! Match:     f_default
    ! Requested: c_native_*_out_buf
    ! Match:     c_default
    function return_int_ptr_dim_pointer() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, c_f_pointer
        type(SHROUD_array) :: DSHC_rv
        integer(C_INT) :: len
        integer(C_INT), pointer :: SHT_rv(:)
        ! splicer begin function.return_int_ptr_dim_pointer
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_dim_pointer_bufferify(DSHC_rv, len)
        call c_f_pointer(SHT_ptr, SHT_rv, DSHC_rv%shape(1:1))
        ! splicer end function.return_int_ptr_dim_pointer
    end function return_int_ptr_dim_pointer

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrDimAlloc +deref(allocatable)+dimension(len)
    ! int * ReturnIntPtrDimAlloc +deref(allocatable)+dimension(len)
    ! Exact:     f_native_*_result_allocatable
    ! Function:  int * ReturnIntPtrDimAlloc +context(DSHC_rv)+deref(allocatable)+dimension(len)
    ! Exact:     c_native_*_result_buf
    ! ----------------------------------------
    ! Argument:  int * len +hidden+intent(out)
    ! Requested: f_native_*_out
    ! Match:     f_default
    ! Requested: c_native_*_out_buf
    ! Match:     c_default
    function return_int_ptr_dim_alloc() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR
        type(SHROUD_array) :: DSHC_rv
        integer(C_INT) :: len
        integer(C_INT), allocatable :: SHT_rv(:)
        ! splicer begin function.return_int_ptr_dim_alloc
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_dim_alloc_bufferify(DSHC_rv, len)
        allocate(SHT_rv(len))
        call SHROUD_copy_array_int(DSHC_rv, SHT_rv, size(SHT_rv, kind=C_SIZE_T))
        ! splicer end function.return_int_ptr_dim_alloc
    end function return_int_ptr_dim_alloc

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrDimDefault +deref(pointer)+dimension(len)
    ! int * ReturnIntPtrDimDefault +deref(pointer)+dimension(len)
    ! Exact:     f_native_*_result_pointer
    ! Function:  int * ReturnIntPtrDimDefault +context(DSHC_rv)+deref(pointer)+dimension(len)
    ! Exact:     c_native_*_result_buf
    ! ----------------------------------------
    ! Argument:  int * len +hidden+intent(out)
    ! Requested: f_native_*_out
    ! Match:     f_default
    ! Requested: c_native_*_out_buf
    ! Match:     c_default
    function return_int_ptr_dim_default() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, c_f_pointer
        type(SHROUD_array) :: DSHC_rv
        integer(C_INT) :: len
        integer(C_INT), pointer :: SHT_rv(:)
        ! splicer begin function.return_int_ptr_dim_default
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_dim_default_bufferify(DSHC_rv, len)
        call c_f_pointer(SHT_ptr, SHT_rv, DSHC_rv%shape(1:1))
        ! splicer end function.return_int_ptr_dim_default
    end function return_int_ptr_dim_default

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrDimPointerNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
    ! int * ReturnIntPtrDimPointerNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
    ! Exact:     f_native_*_result_pointer_caller
    ! Function:  int * ReturnIntPtrDimPointerNew +capsule(Crv)+context(DSHC_rv)+deref(pointer)+dimension(len)+owner(caller)
    ! Exact:     c_native_*_result_buf
    ! ----------------------------------------
    ! Argument:  int * len +hidden+intent(out)
    ! Requested: f_native_*_out
    ! Match:     f_default
    ! Requested: c_native_*_out_buf
    ! Match:     c_default
    function return_int_ptr_dim_pointer_new(Crv) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, c_f_pointer
        type(SHROUD_array) :: DSHC_rv
        integer(C_INT) :: len
        integer(C_INT), pointer :: SHT_rv(:)
        type(SHROUD_capsule), intent(OUT) :: Crv
        ! splicer begin function.return_int_ptr_dim_pointer_new
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_dim_pointer_new_bufferify(DSHC_rv, &
            len)
        call c_f_pointer(SHT_ptr, SHT_rv, DSHC_rv%shape(1:1))
        Crv%mem = DSHC_rv%cxx
        ! splicer end function.return_int_ptr_dim_pointer_new
    end function return_int_ptr_dim_pointer_new

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int * ReturnIntPtrDimDefaultNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
    ! int * ReturnIntPtrDimDefaultNew +capsule(Crv)+deref(pointer)+dimension(len)+owner(caller)
    ! Exact:     f_native_*_result_pointer_caller
    ! Function:  int * ReturnIntPtrDimDefaultNew +capsule(Crv)+context(DSHC_rv)+deref(pointer)+dimension(len)+owner(caller)
    ! Exact:     c_native_*_result_buf
    ! ----------------------------------------
    ! Argument:  int * len +hidden+intent(out)
    ! Requested: f_native_*_out
    ! Match:     f_default
    ! Requested: c_native_*_out_buf
    ! Match:     c_default
    function return_int_ptr_dim_default_new(Crv) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, c_f_pointer
        type(SHROUD_array) :: DSHC_rv
        integer(C_INT) :: len
        integer(C_INT), pointer :: SHT_rv(:)
        type(SHROUD_capsule), intent(OUT) :: Crv
        ! splicer begin function.return_int_ptr_dim_default_new
        type(C_PTR) :: SHT_ptr
        SHT_ptr = c_return_int_ptr_dim_default_new_bufferify(DSHC_rv, &
            len)
        call c_f_pointer(SHT_ptr, SHT_rv, DSHC_rv%shape(1:1))
        Crv%mem = DSHC_rv%cxx
        ! splicer end function.return_int_ptr_dim_default_new
    end function return_int_ptr_dim_default_new

    ! ----------------------------------------
    ! Function:  Class1 * getClassStatic +owner(library)
    ! Class1 * getClassStatic +owner(library)
    ! Requested: f_shadow_*_result_library
    ! Match:     f_shadow_result
    ! Requested: c_shadow_*_result
    ! Match:     c_shadow_result
    function get_class_static() &
            result(SHT_rv)
        use iso_c_binding, only : C_PTR
        type(class1) :: SHT_rv
        ! splicer begin function.get_class_static
        type(C_PTR) :: SHT_prv
        SHT_prv = c_get_class_static(SHT_rv%cxxmem)
        ! splicer end function.get_class_static
    end function get_class_static

    ! ----------------------------------------
    ! Function:  Class1 * getClassNew +owner(caller)
    ! Class1 * getClassNew +owner(caller)
    ! Requested: f_shadow_*_result_caller
    ! Match:     f_shadow_result
    ! Requested: c_shadow_*_result
    ! Match:     c_shadow_result
    ! ----------------------------------------
    ! Argument:  int flag +intent(in)+value
    ! Requested: f_native_scalar_in
    ! Match:     f_default
    ! Requested: c_native_scalar_in
    ! Match:     c_default
    !>
    !! \brief Return pointer to new Class1 instance.
    !!
    !<
    function get_class_new(flag) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR
        integer(C_INT), value, intent(IN) :: flag
        type(class1) :: SHT_rv
        ! splicer begin function.get_class_new
        type(C_PTR) :: SHT_prv
        SHT_prv = c_get_class_new(flag, SHT_rv%cxxmem)
        ! splicer end function.get_class_new
    end function get_class_new

    ! splicer begin additional_functions
    ! splicer end additional_functions

    function class1_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class1), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class1_eq

    function class1_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class1), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class1_ne

    ! helper capsule_helper
    ! finalize a static SHROUD_capsule_data
    subroutine SHROUD_capsule_final(cap)
        type(SHROUD_capsule), intent(INOUT) :: cap
        call SHROUD_capsule_dtor(cap%mem)
    end subroutine SHROUD_capsule_final

    subroutine SHROUD_capsule_delete(cap)
        class(SHROUD_capsule) :: cap
        call SHROUD_capsule_dtor(cap%mem)
    end subroutine SHROUD_capsule_delete

end module ownership_mod
