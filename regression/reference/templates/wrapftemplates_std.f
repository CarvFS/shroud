! wrapftemplates_std.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftemplates_std.f
!! \brief Shroud generated wrapper for std namespace
!<
! splicer begin namespace.std.file_top
! splicer end namespace.std.file_top
module templates_std_mod
    use iso_c_binding, only : C_INT, C_NULL_PTR, C_PTR
    ! splicer begin namespace.std.module_use
    ! splicer end namespace.std.module_use
    implicit none

    ! splicer begin namespace.std.module_top
    ! splicer end namespace.std.module_top

    ! helper capsule_data_helper
    type, bind(C) :: TEM_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type TEM_SHROUD_capsule_data

    type vector_int
        type(TEM_SHROUD_capsule_data) :: cxxmem
        ! splicer begin namespace.std.class.vector_int.component_part
        ! splicer end namespace.std.class.vector_int.component_part
    contains
        procedure :: dtor => vector_int_dtor
        procedure :: push_back => vector_int_push_back
        procedure :: at => vector_int_at
        procedure :: get_instance => vector_int_get_instance
        procedure :: set_instance => vector_int_set_instance
        procedure :: associated => vector_int_associated
        ! splicer begin namespace.std.class.vector_int.type_bound_procedure_part
        ! splicer end namespace.std.class.vector_int.type_bound_procedure_part
    end type vector_int

    type vector_double
        type(TEM_SHROUD_capsule_data) :: cxxmem
        ! splicer begin namespace.std.class.vector_double.component_part
        ! splicer end namespace.std.class.vector_double.component_part
    contains
        procedure :: dtor => vector_double_dtor
        procedure :: push_back => vector_double_push_back
        procedure :: at => vector_double_at
        procedure :: get_instance => vector_double_get_instance
        procedure :: set_instance => vector_double_set_instance
        procedure :: associated => vector_double_associated
        ! splicer begin namespace.std.class.vector_double.type_bound_procedure_part
        ! splicer end namespace.std.class.vector_double.type_bound_procedure_part
    end type vector_double

    interface operator (.eq.)
        module procedure vector_int_eq
        module procedure vector_double_eq
    end interface

    interface operator (.ne.)
        module procedure vector_int_ne
        module procedure vector_double_ne
    end interface

    interface

        ! ----------------------------------------
        ! Function:  vector
        ! Attrs:     +intent(ctor)
        ! Exact:     c_function_shadow_scalar
        subroutine c_vector_int_ctor(SHT_rv) &
                bind(C, name="TEM_vector_int_ctor")
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(OUT) :: SHT_rv
        end subroutine c_vector_int_ctor

        ! ----------------------------------------
        ! Function:  ~vector
        ! Attrs:     +intent(dtor)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine c_vector_int_dtor(self) &
                bind(C, name="TEM_vector_int_dtor")
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(INOUT) :: self
        end subroutine c_vector_int_dtor

        ! ----------------------------------------
        ! Function:  void push_back
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        ! ----------------------------------------
        ! Argument:  const int & value +intent(in)
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_&
        ! Match:     c_default
        subroutine c_vector_int_push_back(self, value) &
                bind(C, name="TEM_vector_int_push_back")
            use iso_c_binding, only : C_INT
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            integer(C_INT), intent(IN) :: value
        end subroutine c_vector_int_push_back

        ! ----------------------------------------
        ! Function:  int & at
        ! Attrs:     +deref(pointer)+intent(function)
        ! Requested: c_function_native_&_pointer
        ! Match:     c_function_native_&
        ! ----------------------------------------
        ! Argument:  size_type n +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        function c_vector_int_at(self, n) &
                result(SHT_rv) &
                bind(C, name="TEM_vector_int_at")
            use iso_c_binding, only : C_PTR, C_SIZE_T
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            integer(C_SIZE_T), value, intent(IN) :: n
            type(C_PTR) SHT_rv
        end function c_vector_int_at

        ! ----------------------------------------
        ! Function:  int & at
        ! Attrs:     +api(buf)+deref(pointer)+intent(function)
        ! Requested: c_function_native_&_buf_pointer
        ! Match:     c_function_native_&
        ! ----------------------------------------
        ! Argument:  size_type n +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        function c_vector_int_at_bufferify(self, n) &
                result(SHT_rv) &
                bind(C, name="TEM_vector_int_at_bufferify")
            use iso_c_binding, only : C_PTR, C_SIZE_T
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            integer(C_SIZE_T), value, intent(IN) :: n
            type(C_PTR) SHT_rv
        end function c_vector_int_at_bufferify

        ! splicer begin namespace.std.class.vector_int.additional_interfaces
        ! splicer end namespace.std.class.vector_int.additional_interfaces

        ! ----------------------------------------
        ! Function:  vector
        ! Attrs:     +intent(ctor)
        ! Exact:     c_function_shadow_scalar
        subroutine c_vector_double_ctor(SHT_rv) &
                bind(C, name="TEM_vector_double_ctor")
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(OUT) :: SHT_rv
        end subroutine c_vector_double_ctor

        ! ----------------------------------------
        ! Function:  ~vector
        ! Attrs:     +intent(dtor)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine c_vector_double_dtor(self) &
                bind(C, name="TEM_vector_double_dtor")
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(INOUT) :: self
        end subroutine c_vector_double_dtor

        ! ----------------------------------------
        ! Function:  void push_back
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        ! ----------------------------------------
        ! Argument:  const double & value +intent(in)
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_&
        ! Match:     c_default
        subroutine c_vector_double_push_back(self, value) &
                bind(C, name="TEM_vector_double_push_back")
            use iso_c_binding, only : C_DOUBLE
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            real(C_DOUBLE), intent(IN) :: value
        end subroutine c_vector_double_push_back

        ! ----------------------------------------
        ! Function:  double & at
        ! Attrs:     +deref(pointer)+intent(function)
        ! Requested: c_function_native_&_pointer
        ! Match:     c_function_native_&
        ! ----------------------------------------
        ! Argument:  size_type n +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        function c_vector_double_at(self, n) &
                result(SHT_rv) &
                bind(C, name="TEM_vector_double_at")
            use iso_c_binding, only : C_PTR, C_SIZE_T
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            integer(C_SIZE_T), value, intent(IN) :: n
            type(C_PTR) SHT_rv
        end function c_vector_double_at

        ! ----------------------------------------
        ! Function:  double & at
        ! Attrs:     +api(buf)+deref(pointer)+intent(function)
        ! Requested: c_function_native_&_buf_pointer
        ! Match:     c_function_native_&
        ! ----------------------------------------
        ! Argument:  size_type n +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        function c_vector_double_at_bufferify(self, n) &
                result(SHT_rv) &
                bind(C, name="TEM_vector_double_at_bufferify")
            use iso_c_binding, only : C_PTR, C_SIZE_T
            import :: TEM_SHROUD_capsule_data
            implicit none
            type(TEM_SHROUD_capsule_data), intent(IN) :: self
            integer(C_SIZE_T), value, intent(IN) :: n
            type(C_PTR) SHT_rv
        end function c_vector_double_at_bufferify

        ! splicer begin namespace.std.class.vector_double.additional_interfaces
        ! splicer end namespace.std.class.vector_double.additional_interfaces

        ! splicer begin namespace.std.additional_interfaces
        ! splicer end namespace.std.additional_interfaces
    end interface

    interface vector_double
        module procedure vector_double_ctor
    end interface vector_double

    interface vector_int
        module procedure vector_int_ctor
    end interface vector_int

contains

    ! ----------------------------------------
    ! Function:  vector
    ! Attrs:     +intent(ctor)
    ! Exact:     f_ctor
    ! Attrs:     +intent(ctor)
    ! Exact:     c_ctor
    function vector_int_ctor() &
            result(SHT_rv)
        type(vector_int) :: SHT_rv
        ! splicer begin namespace.std.class.vector_int.method.ctor
        call c_vector_int_ctor(SHT_rv%cxxmem)
        ! splicer end namespace.std.class.vector_int.method.ctor
    end function vector_int_ctor

    ! ----------------------------------------
    ! Function:  ~vector
    ! Attrs:     +intent(dtor)
    ! Exact:     f_dtor
    ! Attrs:     +intent(dtor)
    ! Exact:     c_dtor
    subroutine vector_int_dtor(obj)
        class(vector_int) :: obj
        ! splicer begin namespace.std.class.vector_int.method.dtor
        call c_vector_int_dtor(obj%cxxmem)
        ! splicer end namespace.std.class.vector_int.method.dtor
    end subroutine vector_int_dtor

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  void push_back
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  const int & value +intent(in)
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_&
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_&
    ! Match:     c_default
    subroutine vector_int_push_back(obj, value)
        use iso_c_binding, only : C_INT
        class(vector_int) :: obj
        integer(C_INT), intent(IN) :: value
        ! splicer begin namespace.std.class.vector_int.method.push_back
        call c_vector_int_push_back(obj%cxxmem, value)
        ! splicer end namespace.std.class.vector_int.method.push_back
    end subroutine vector_int_push_back

    ! Generated by cxx_template - arg_to_buffer
    ! ----------------------------------------
    ! Function:  int & at
    ! Attrs:     +deref(pointer)+intent(function)
    ! Exact:     f_function_native_&_buf_pointer
    ! Attrs:     +api(buf)+deref(pointer)+intent(function)
    ! Requested: c_function_native_&_buf_pointer
    ! Match:     c_function_native_&
    ! ----------------------------------------
    ! Argument:  size_type n +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    function vector_int_at(obj, n) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_PTR, C_SIZE_T, c_f_pointer
        class(vector_int) :: obj
        integer(C_SIZE_T), value, intent(IN) :: n
        integer(C_INT), pointer :: SHT_rv
        ! splicer begin namespace.std.class.vector_int.method.at
        type(C_PTR) :: SHC_rv_ptr
        SHC_rv_ptr = c_vector_int_at_bufferify(obj%cxxmem, n)
        call c_f_pointer(SHC_rv_ptr, SHT_rv)
        ! splicer end namespace.std.class.vector_int.method.at
    end function vector_int_at

    ! Return pointer to C++ memory.
    function vector_int_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(vector_int), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function vector_int_get_instance

    subroutine vector_int_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(vector_int), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine vector_int_set_instance

    function vector_int_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(vector_int), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function vector_int_associated

    ! splicer begin namespace.std.class.vector_int.additional_functions
    ! splicer end namespace.std.class.vector_int.additional_functions

    ! ----------------------------------------
    ! Function:  vector
    ! Attrs:     +intent(ctor)
    ! Exact:     f_ctor
    ! Attrs:     +intent(ctor)
    ! Exact:     c_ctor
    function vector_double_ctor() &
            result(SHT_rv)
        type(vector_double) :: SHT_rv
        ! splicer begin namespace.std.class.vector_double.method.ctor
        call c_vector_double_ctor(SHT_rv%cxxmem)
        ! splicer end namespace.std.class.vector_double.method.ctor
    end function vector_double_ctor

    ! ----------------------------------------
    ! Function:  ~vector
    ! Attrs:     +intent(dtor)
    ! Exact:     f_dtor
    ! Attrs:     +intent(dtor)
    ! Exact:     c_dtor
    subroutine vector_double_dtor(obj)
        class(vector_double) :: obj
        ! splicer begin namespace.std.class.vector_double.method.dtor
        call c_vector_double_dtor(obj%cxxmem)
        ! splicer end namespace.std.class.vector_double.method.dtor
    end subroutine vector_double_dtor

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  void push_back
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  const double & value +intent(in)
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_&
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_&
    ! Match:     c_default
    subroutine vector_double_push_back(obj, value)
        use iso_c_binding, only : C_DOUBLE
        class(vector_double) :: obj
        real(C_DOUBLE), intent(IN) :: value
        ! splicer begin namespace.std.class.vector_double.method.push_back
        call c_vector_double_push_back(obj%cxxmem, value)
        ! splicer end namespace.std.class.vector_double.method.push_back
    end subroutine vector_double_push_back

    ! Generated by cxx_template - arg_to_buffer
    ! ----------------------------------------
    ! Function:  double & at
    ! Attrs:     +deref(pointer)+intent(function)
    ! Exact:     f_function_native_&_buf_pointer
    ! Attrs:     +api(buf)+deref(pointer)+intent(function)
    ! Requested: c_function_native_&_buf_pointer
    ! Match:     c_function_native_&
    ! ----------------------------------------
    ! Argument:  size_type n +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    function vector_double_at(obj, n) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE, C_PTR, C_SIZE_T, c_f_pointer
        class(vector_double) :: obj
        integer(C_SIZE_T), value, intent(IN) :: n
        real(C_DOUBLE), pointer :: SHT_rv
        ! splicer begin namespace.std.class.vector_double.method.at
        type(C_PTR) :: SHC_rv_ptr
        SHC_rv_ptr = c_vector_double_at_bufferify(obj%cxxmem, n)
        call c_f_pointer(SHC_rv_ptr, SHT_rv)
        ! splicer end namespace.std.class.vector_double.method.at
    end function vector_double_at

    ! Return pointer to C++ memory.
    function vector_double_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(vector_double), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function vector_double_get_instance

    subroutine vector_double_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(vector_double), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine vector_double_set_instance

    function vector_double_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(vector_double), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function vector_double_associated

    ! splicer begin namespace.std.class.vector_double.additional_functions
    ! splicer end namespace.std.class.vector_double.additional_functions

    ! splicer begin namespace.std.additional_functions
    ! splicer end namespace.std.additional_functions

    function vector_int_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(vector_int), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function vector_int_eq

    function vector_int_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(vector_int), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function vector_int_ne

    function vector_double_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(vector_double), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function vector_double_eq

    function vector_double_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(vector_double), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function vector_double_ne

end module templates_std_mod
