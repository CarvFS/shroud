! foo.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file foo.f
!! \brief Shroud generated wrapper for ns0 namespace
!<
! splicer begin namespace.ns0.file_top
! splicer end namespace.ns0.file_top
module name_module
    use iso_c_binding, only : C_INT, C_NULL_PTR, C_PTR
    ! splicer begin namespace.ns0.module_use
    ! splicer end namespace.ns0.module_use
    implicit none

    ! splicer begin namespace.ns0.module_top
    ! splicer end namespace.ns0.module_top

    ! helper capsule_data_helper
    type, bind(C) :: TES_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type TES_SHROUD_capsule_data

    type FNames
        type(TES_SHROUD_capsule_data) :: cxxmem
        ! splicer begin namespace.ns0.class.Names.component_part
        ! splicer end namespace.ns0.class.Names.component_part
    contains
        procedure :: type_method1 => names_method1
        procedure :: method2 => names_method2
        procedure :: get_instance => names_get_instance
        procedure :: set_instance => names_set_instance
        procedure :: associated => names_associated
        ! splicer begin namespace.ns0.class.Names.type_bound_procedure_part
        ! splicer end namespace.ns0.class.Names.type_bound_procedure_part
    end type FNames

    interface operator (.eq.)
        module procedure names_eq
    end interface

    interface operator (.ne.)
        module procedure names_ne
    end interface

    interface

        ! ----------------------------------------
        ! Function:  Names +name(defaultctor)
        ! Attrs:     +api(capsule)+intent(ctor)
        ! Requested: c_ctor_shadow_scalar_capsule
        ! Match:     c_ctor
        subroutine xxx_tes_names_defaultctor(SHT_rv) &
                bind(C, name="XXX_TES_ns0_Names_defaultctor")
            import :: TES_SHROUD_capsule_data
            implicit none
            type(TES_SHROUD_capsule_data), intent(OUT) :: SHT_rv
        end subroutine xxx_tes_names_defaultctor

        ! ----------------------------------------
        ! Function:  void method1
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine xxx_tes_names_method1(self) &
                bind(C, name="XXX_TES_ns0_Names_method1")
            import :: TES_SHROUD_capsule_data
            implicit none
            type(TES_SHROUD_capsule_data), intent(IN) :: self
        end subroutine xxx_tes_names_method1

        ! ----------------------------------------
        ! Function:  void method2
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine xxx_tes_names_method2(self2) &
                bind(C, name="XXX_TES_ns0_Names_method2")
            import :: TES_SHROUD_capsule_data
            implicit none
            type(TES_SHROUD_capsule_data), intent(IN) :: self2
        end subroutine xxx_tes_names_method2

        ! splicer begin namespace.ns0.class.Names.additional_interfaces
        ! splicer end namespace.ns0.class.Names.additional_interfaces

        ! splicer begin namespace.ns0.additional_interfaces
        ! splicer end namespace.ns0.additional_interfaces
    end interface

    interface FNames
        module procedure names_defaultctor
    end interface FNames

contains

    ! ----------------------------------------
    ! Function:  Names +name(defaultctor)
    ! Attrs:     +api(capsule)+intent(ctor)
    ! Exact:     f_ctor
    ! Attrs:     +api(capsule)+intent(ctor)
    ! Exact:     c_ctor
    function names_defaultctor() &
            result(SHT_rv)
        type(FNames) :: SHT_rv
        ! splicer begin namespace.ns0.class.Names.method.defaultctor
        call xxx_tes_names_defaultctor(SHT_rv%cxxmem)
        ! splicer end namespace.ns0.class.Names.method.defaultctor
    end function names_defaultctor

    ! ----------------------------------------
    ! Function:  void method1
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine names_method1(obj)
        class(FNames) :: obj
        ! splicer begin namespace.ns0.class.Names.method.type_method1
        call xxx_tes_names_method1(obj%cxxmem)
        ! splicer end namespace.ns0.class.Names.method.type_method1
    end subroutine names_method1

    ! ----------------------------------------
    ! Function:  void method2
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine names_method2(obj2)
        class(FNames) :: obj2
        ! splicer begin namespace.ns0.class.Names.method.method2
        call xxx_tes_names_method2(obj2%cxxmem)
        ! splicer end namespace.ns0.class.Names.method.method2
    end subroutine names_method2

    ! Return pointer to C++ memory.
    function names_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(FNames), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function names_get_instance

    subroutine names_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(FNames), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine names_set_instance

    function names_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(FNames), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function names_associated

    ! splicer begin namespace.ns0.class.Names.additional_functions
    ! splicer end namespace.ns0.class.Names.additional_functions

    ! splicer begin namespace.ns0.additional_functions
    ! splicer end namespace.ns0.additional_functions

    function names_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(FNames), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function names_eq

    function names_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(FNames), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function names_ne

end module name_module
