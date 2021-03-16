! wrapfforward.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfforward.f
!! \brief Shroud generated wrapper for forward namespace
!<
! splicer begin file_top
! splicer end file_top
module forward_mod
    use iso_c_binding, only : C_INT, C_NULL_PTR, C_PTR
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! helper capsule_data_helper
    type, bind(C) :: FOR_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type FOR_SHROUD_capsule_data

    type class3
        type(FOR_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.Class3.component_part
        ! splicer end class.Class3.component_part
    contains
        procedure :: get_instance => class3_get_instance
        procedure :: set_instance => class3_set_instance
        procedure :: associated => class3_associated
        ! splicer begin class.Class3.type_bound_procedure_part
        ! splicer end class.Class3.type_bound_procedure_part
    end type class3

    type class2
        type(FOR_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.Class2.component_part
        ! splicer end class.Class2.component_part
    contains
        procedure :: dtor => class2_dtor
        procedure :: func1 => class2_func1
        procedure :: accept_class3 => class2_accept_class3
        procedure :: get_instance => class2_get_instance
        procedure :: set_instance => class2_set_instance
        procedure :: associated => class2_associated
        ! splicer begin class.Class2.type_bound_procedure_part
        ! splicer end class.Class2.type_bound_procedure_part
    end type class2

    interface operator (.eq.)
        module procedure class3_eq
        module procedure class2_eq
    end interface

    interface operator (.ne.)
        module procedure class3_ne
        module procedure class2_ne
    end interface

    interface

        ! splicer begin class.Class3.additional_interfaces
        ! splicer end class.Class3.additional_interfaces

        ! ----------------------------------------
        ! Function:  Class2
        ! Attrs:     +intent(ctor)
        ! Exact:     c_function_shadow_scalar
        function c_class2_ctor(SHT_crv) &
                result(SHT_rv) &
                bind(C, name="FOR_Class2_ctor")
            use iso_c_binding, only : C_PTR
            import :: FOR_SHROUD_capsule_data
            implicit none
            type(FOR_SHROUD_capsule_data), intent(OUT) :: SHT_crv
            type(C_PTR) SHT_rv
        end function c_class2_ctor

        ! ----------------------------------------
        ! Function:  ~Class2
        ! Attrs:     +intent(dtor)
        ! Requested: c_function_void_scalar
        ! Match:     c_default
        subroutine c_class2_dtor(self) &
                bind(C, name="FOR_Class2_dtor")
            import :: FOR_SHROUD_capsule_data
            implicit none
            type(FOR_SHROUD_capsule_data), intent(IN) :: self
        end subroutine c_class2_dtor

        ! ----------------------------------------
        ! Function:  void func1
        ! Requested: c_function_void_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  tutorial::Class1 * arg +intent(in)
        ! Attrs:     +intent(in)
        ! Requested: c_in_shadow_*
        ! Match:     c_in_shadow
        subroutine c_class2_func1(self, arg) &
                bind(C, name="FOR_Class2_func1")
            use tutorial_mod, only : SHROUD_class1_capsule
            import :: FOR_SHROUD_capsule_data
            implicit none
            type(FOR_SHROUD_capsule_data), intent(IN) :: self
            type(SHROUD_class1_capsule), intent(IN) :: arg
        end subroutine c_class2_func1

        ! ----------------------------------------
        ! Function:  void acceptClass3
        ! Requested: c_function_void_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  Class3 * arg +intent(in)
        ! Attrs:     +intent(in)
        ! Requested: c_in_shadow_*
        ! Match:     c_in_shadow
        subroutine c_class2_accept_class3(self, arg) &
                bind(C, name="FOR_Class2_accept_class3")
            import :: FOR_SHROUD_capsule_data
            implicit none
            type(FOR_SHROUD_capsule_data), intent(IN) :: self
            type(FOR_SHROUD_capsule_data), intent(IN) :: arg
        end subroutine c_class2_accept_class3

        ! splicer begin class.Class2.additional_interfaces
        ! splicer end class.Class2.additional_interfaces

        ! ----------------------------------------
        ! Function:  int passStruct1
        ! Attrs:     +intent(function)
        ! Requested: c_function_native_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  const Cstruct1 * arg
        ! Attrs:     +intent(in)
        ! Requested: c_in_struct_*
        ! Match:     c_in_struct
        function c_pass_struct1(arg) &
                result(SHT_rv) &
                bind(C, name="FOR_pass_struct1")
            use iso_c_binding, only : C_INT
            use struct_mod, only : cstruct1
            implicit none
            type(Cstruct1), intent(IN) :: arg
            integer(C_INT) :: SHT_rv
        end function c_pass_struct1

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

    interface class2
        module procedure class2_ctor
    end interface class2

contains

    ! Return pointer to C++ memory.
    function class3_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(class3), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function class3_get_instance

    subroutine class3_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(class3), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine class3_set_instance

    function class3_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(class3), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function class3_associated

    ! splicer begin class.Class3.additional_functions
    ! splicer end class.Class3.additional_functions

    ! ----------------------------------------
    ! Function:  Class2
    ! Attrs:     +intent(ctor)
    ! Exact:     f_ctor_shadow
    ! Attrs:     +intent(ctor)
    ! Exact:     c_ctor_shadow
    function class2_ctor() &
            result(SHT_rv)
        use iso_c_binding, only : C_PTR
        type(class2) :: SHT_rv
        ! splicer begin class.Class2.method.ctor
        type(C_PTR) :: SHT_prv
        SHT_prv = c_class2_ctor(SHT_rv%cxxmem)
        ! splicer end class.Class2.method.ctor
    end function class2_ctor

    ! ----------------------------------------
    ! Function:  ~Class2
    ! Attrs:     +intent(dtor)
    ! Requested: f_dtor_shadow
    ! Match:     f_default
    ! Attrs:     +intent(dtor)
    ! Exact:     c_dtor_shadow
    subroutine class2_dtor(obj)
        class(class2) :: obj
        ! splicer begin class.Class2.method.dtor
        call c_class2_dtor(obj%cxxmem)
        ! splicer end class.Class2.method.dtor
    end subroutine class2_dtor

    ! ----------------------------------------
    ! Function:  void func1
    ! Exact:     f_subroutine
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  tutorial::Class1 * arg +intent(in)
    ! Attrs:     +intent(in)
    ! Requested: f_in_shadow_*
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_shadow_*
    ! Match:     c_in_shadow
    subroutine class2_func1(obj, arg)
        use tutorial_mod, only : class1
        class(class2) :: obj
        type(class1), intent(IN) :: arg
        ! splicer begin class.Class2.method.func1
        call c_class2_func1(obj%cxxmem, arg%cxxmem)
        ! splicer end class.Class2.method.func1
    end subroutine class2_func1

    ! ----------------------------------------
    ! Function:  void acceptClass3
    ! Exact:     f_subroutine
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  Class3 * arg +intent(in)
    ! Attrs:     +intent(in)
    ! Requested: f_in_shadow_*
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_shadow_*
    ! Match:     c_in_shadow
    subroutine class2_accept_class3(obj, arg)
        class(class2) :: obj
        type(class3), intent(IN) :: arg
        ! splicer begin class.Class2.method.accept_class3
        call c_class2_accept_class3(obj%cxxmem, arg%cxxmem)
        ! splicer end class.Class2.method.accept_class3
    end subroutine class2_accept_class3

    ! Return pointer to C++ memory.
    function class2_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(class2), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function class2_get_instance

    subroutine class2_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(class2), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine class2_set_instance

    function class2_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(class2), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function class2_associated

    ! splicer begin class.Class2.additional_functions
    ! splicer end class.Class2.additional_functions

    ! ----------------------------------------
    ! Function:  int passStruct1
    ! Attrs:     +intent(function)
    ! Requested: f_function_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  const Cstruct1 * arg
    ! Attrs:     +intent(in)
    ! Requested: f_in_struct_*
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_struct_*
    ! Match:     c_in_struct
    function pass_struct1(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        use struct_mod, only : cstruct1
        type(Cstruct1), intent(IN) :: arg
        integer(C_INT) :: SHT_rv
        ! splicer begin function.pass_struct1
        SHT_rv = c_pass_struct1(arg)
        ! splicer end function.pass_struct1
    end function pass_struct1

    ! splicer begin additional_functions
    ! splicer end additional_functions

    function class3_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class3), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class3_eq

    function class3_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class3), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class3_ne

    function class2_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class2), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class2_eq

    function class2_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(class2), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function class2_ne

end module forward_mod
