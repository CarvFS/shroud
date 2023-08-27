! top.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file top.f
!! \brief Shroud generated wrapper for testnames library
!<
! splicer begin file_top
! splicer end file_top
module top_module
    use iso_c_binding, only : C_INT, C_NULL_PTR, C_PTR
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! helper capsule_data_helper
    type, bind(C) :: TES_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type TES_SHROUD_capsule_data

    !  enum Color
    integer(C_INT), parameter :: red = 0
    integer(C_INT), parameter :: blue = 1
    integer(C_INT), parameter :: white = 2

    type names2
        type(TES_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.Names2.component_part
        ! splicer end class.Names2.component_part
    contains
        procedure :: get_instance => names2_get_instance
        procedure :: set_instance => names2_set_instance
        procedure :: associated => names2_associated
        ! splicer begin class.Names2.type_bound_procedure_part
        ! splicer end class.Names2.type_bound_procedure_part
    end type names2

    type two_ts_0
        type(TES_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.twoTs_0.component_part
        ! splicer end class.twoTs_0.component_part
    contains
        procedure :: get_instance => two_ts_0_get_instance
        procedure :: set_instance => two_ts_0_set_instance
        procedure :: associated => two_ts_0_associated
        ! splicer begin class.twoTs_0.type_bound_procedure_part
        ! splicer end class.twoTs_0.type_bound_procedure_part
    end type two_ts_0

    type two_ts_instantiation4
        type(TES_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.twoTs_instantiation4.component_part
        ! splicer end class.twoTs_instantiation4.component_part
    contains
        procedure :: get_instance_instantiation4 => two_ts_instantiation4_get_instance_instantiation4
        procedure :: set_instance_instantiation4 => two_ts_instantiation4_set_instance_instantiation4
        procedure :: associated_instantiation4 => two_ts_instantiation4_associated_instantiation4
        ! splicer begin class.twoTs_instantiation4.type_bound_procedure_part
        ! splicer end class.twoTs_instantiation4.type_bound_procedure_part
    end type two_ts_instantiation4

    type Fstruct_as_class
        type(TES_SHROUD_capsule_data) :: cxxmem
        ! splicer begin class.Cstruct_as_class.component_part
        ! splicer end class.Cstruct_as_class.component_part
    contains
        procedure :: get_instance => cstruct_as_class_get_instance
        procedure :: set_instance => cstruct_as_class_set_instance
        procedure :: associated => cstruct_as_class_associated
        procedure :: cstruct_as_class_sum
        ! splicer begin class.Cstruct_as_class.type_bound_procedure_part
        ! splicer end class.Cstruct_as_class.type_bound_procedure_part
    end type Fstruct_as_class

    type, extends(Fstruct_as_class) :: Fstruct_as_subclass
        ! splicer begin class.Cstruct_as_subclass.component_part
        ! splicer end class.Cstruct_as_subclass.component_part
    contains
        procedure :: get_instance => cstruct_as_subclass_get_instance
        procedure :: set_instance => cstruct_as_subclass_set_instance
        procedure :: associated => cstruct_as_subclass_associated
        ! splicer begin class.Cstruct_as_subclass.type_bound_procedure_part
        ! splicer end class.Cstruct_as_subclass.type_bound_procedure_part
    end type Fstruct_as_subclass

    interface operator (.eq.)
        module procedure names2_eq
        module procedure two_ts_0_eq
        module procedure two_ts_instantiation4_eq
        module procedure cstruct_as_class_eq
        module procedure cstruct_as_subclass_eq
    end interface

    interface operator (.ne.)
        module procedure names2_ne
        module procedure two_ts_0_ne
        module procedure two_ts_instantiation4_ne
        module procedure cstruct_as_class_ne
        module procedure cstruct_as_subclass_ne
    end interface

    abstract interface

        subroutine external_funcs_afree(arr) bind(C)
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE), intent(INOUT) :: arr
        end subroutine external_funcs_afree

        subroutine external_funcs_alloc(arr, err) bind(C)
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), intent(INOUT) :: arr
            integer(C_INT), intent(OUT) :: err
        end subroutine external_funcs_alloc

        subroutine external_funcs_assoc(arr, err) bind(C)
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), intent(IN) :: arr
            integer(C_INT), intent(OUT) :: err
        end subroutine external_funcs_assoc

    end interface

    interface

        ! ----------------------------------------
        ! Function:  void getName
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  char * name +len(worklen)+len_trim(worktrim)
        ! Attrs:     +intent(inout)
        ! Requested: c_inout_char_*
        ! Match:     c_default
        subroutine c_get_name(name) &
                bind(C, name="TES_getName")
            use iso_c_binding, only : C_CHAR
            implicit none
            character(kind=C_CHAR), intent(INOUT) :: name(*)
        end subroutine c_get_name

        ! ----------------------------------------
        ! Function:  void getName
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  char * name +len(worklen)+len_trim(worktrim)
        ! Attrs:     +api(buf)+intent(inout)
        ! Exact:     c_inout_char_*_buf
        subroutine c_get_name_bufferify(name, SHT_name_len) &
                bind(C, name="TES_getName_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(INOUT) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
        end subroutine c_get_name_bufferify

        ! ----------------------------------------
        ! Function:  void function1
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        subroutine YYY_TES_function1() &
                bind(C, name="YYY_TES_function1")
            implicit none
        end subroutine YYY_TES_function1

        ! ----------------------------------------
        ! Function:  void function2
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        subroutine f_c_name_special() &
                bind(C, name="c_name_special")
            implicit none
        end subroutine f_c_name_special

        ! ----------------------------------------
        ! Function:  void function3a
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int i +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        subroutine YYY_TES_function3a_0(i) &
                bind(C, name="YYY_TES_function3a_0")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: i
        end subroutine YYY_TES_function3a_0

        ! ----------------------------------------
        ! Function:  void function3a
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  long i +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        subroutine YYY_TES_function3a_1(i) &
                bind(C, name="YYY_TES_function3a_1")
            use iso_c_binding, only : C_LONG
            implicit none
            integer(C_LONG), value, intent(IN) :: i
        end subroutine YYY_TES_function3a_1

        ! ----------------------------------------
        ! Function:  int function4
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  const std::string & rv
        ! Attrs:     +intent(in)
        ! Exact:     c_in_string_&
        function YYY_TES_function4(rv) &
                result(SHT_rv) &
                bind(C, name="YYY_TES_function4")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: rv(*)
            integer(C_INT) :: SHT_rv
        end function YYY_TES_function4

        ! ----------------------------------------
        ! Function:  int function4
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  const std::string & rv
        ! Attrs:     +api(buf)+intent(in)
        ! Exact:     c_in_string_&_buf
        function YYY_TES_function4_bufferify(rv, SHT_rv_len) &
                result(SHT_rv) &
                bind(C, name="YYY_TES_function4_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: rv(*)
            integer(C_INT), value, intent(IN) :: SHT_rv_len
            integer(C_INT) :: SHT_rv
        end function YYY_TES_function4_bufferify

        ! ----------------------------------------
        ! Function:  void function5 +name(fiveplus)
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        subroutine YYY_TES_fiveplus() &
                bind(C, name="YYY_TES_fiveplus")
            implicit none
        end subroutine YYY_TES_fiveplus

        ! ----------------------------------------
        ! Function:  void TestMultilineSplicer
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name
        ! Attrs:     +intent(inout)
        ! Exact:     c_inout_string_&
        ! ----------------------------------------
        ! Argument:  int * value +intent(out)
        ! Attrs:     +intent(out)
        ! Exact:     c_out_native_*
        subroutine c_test_multiline_splicer(name, value) &
                bind(C, name="TES_TestMultilineSplicer")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(INOUT) :: name(*)
            integer(C_INT), intent(OUT) :: value
        end subroutine c_test_multiline_splicer

        ! ----------------------------------------
        ! Function:  void TestMultilineSplicer
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name
        ! Attrs:     +api(buf)+intent(inout)
        ! Exact:     c_inout_string_&_buf
        ! ----------------------------------------
        ! Argument:  int * value +intent(out)
        ! Attrs:     +intent(out)
        ! Exact:     c_out_native_*
        subroutine c_test_multiline_splicer_bufferify(name, &
                SHT_name_len, value) &
                bind(C, name="TES_TestMultilineSplicer_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(INOUT) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            integer(C_INT), intent(OUT) :: value
        end subroutine c_test_multiline_splicer_bufferify

        ! ----------------------------------------
        ! Function:  void FunctionTU
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int arg1 +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        ! ----------------------------------------
        ! Argument:  long arg2 +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        subroutine f_c_name_instantiation1(arg1, arg2) &
                bind(C, name="c_name_instantiation1")
            use iso_c_binding, only : C_INT, C_LONG
            implicit none
            integer(C_INT), value, intent(IN) :: arg1
            integer(C_LONG), value, intent(IN) :: arg2
        end subroutine f_c_name_instantiation1

        ! ----------------------------------------
        ! Function:  void FunctionTU
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  float arg1 +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        ! ----------------------------------------
        ! Argument:  double arg2 +value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_scalar
        subroutine c_function_tu_instantiation2(arg1, arg2) &
                bind(C, name="TES_FunctionTU_instantiation2")
            use iso_c_binding, only : C_DOUBLE, C_FLOAT
            implicit none
            real(C_FLOAT), value, intent(IN) :: arg1
            real(C_DOUBLE), value, intent(IN) :: arg2
        end subroutine c_function_tu_instantiation2

        ! ----------------------------------------
        ! Function:  int UseImplWorker
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        function c_use_impl_worker_instantiation3() &
                result(SHT_rv) &
                bind(C, name="TES_UseImplWorker_instantiation3")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT) :: SHT_rv
        end function c_use_impl_worker_instantiation3

        ! ----------------------------------------
        ! Function:  int Cstruct_as_class_sum
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  const Cstruct_as_class * point +pass
        ! Attrs:     +intent(in)
        ! Exact:     c_in_shadow_*
        function c_cstruct_as_class_sum(point) &
                result(SHT_rv) &
                bind(C, name="TES_Cstruct_as_class_sum")
            use iso_c_binding, only : C_INT
            import :: TES_SHROUD_capsule_data
            implicit none
            type(TES_SHROUD_capsule_data), intent(IN) :: point
            integer(C_INT) :: SHT_rv
        end function c_cstruct_as_class_sum

        ! ----------------------------------------
        ! Function:  void external_funcs
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  const char * rdbase
        ! Attrs:     +intent(in)
        ! Requested: c_in_char_*
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  const char * pkg
        ! Attrs:     +intent(in)
        ! Requested: c_in_char_*
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  const char * name
        ! Attrs:     +intent(in)
        ! Requested: c_in_char_*
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  void ( * alloc)(double * arr +intent(inout), int * err +intent(out)) +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_void_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  void ( * afree)(double * arr +intent(inout)) +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_void_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  void ( * assoc)(double * arr +intent(in), int * err +intent(out)) +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_void_scalar
        ! Match:     c_default
        subroutine c_external_funcs(rdbase, pkg, name, alloc, afree, &
                assoc) &
                bind(C, name="TES_external_funcs")
            use iso_c_binding, only : C_CHAR
            import :: external_funcs_afree, external_funcs_alloc, &
                external_funcs_assoc
            implicit none
            character(kind=C_CHAR), intent(IN) :: rdbase(*)
            character(kind=C_CHAR), intent(IN) :: pkg(*)
            character(kind=C_CHAR), intent(IN) :: name(*)
            procedure(external_funcs_alloc) :: alloc
            procedure(external_funcs_afree) :: afree
            procedure(external_funcs_assoc) :: assoc
        end subroutine c_external_funcs
    end interface

    interface function_tu
        module procedure f_name_instantiation1
        module procedure function_tu_instantiation2
    end interface function_tu

    interface generic3
        module procedure F_name_function3a_int
        module procedure F_name_function3a_long
    end interface generic3

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

    ! Return pointer to C++ memory.
    function names2_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(names2), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function names2_get_instance

    subroutine names2_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(names2), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine names2_set_instance

    function names2_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(names2), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function names2_associated

    ! splicer begin class.Names2.additional_functions
    ! splicer end class.Names2.additional_functions

    ! Return pointer to C++ memory.
    function two_ts_0_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(two_ts_0), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function two_ts_0_get_instance

    subroutine two_ts_0_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(two_ts_0), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine two_ts_0_set_instance

    function two_ts_0_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(two_ts_0), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function two_ts_0_associated

    ! splicer begin class.twoTs_0.additional_functions
    ! splicer end class.twoTs_0.additional_functions

    ! Return pointer to C++ memory.
    function two_ts_instantiation4_get_instance_instantiation4(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(two_ts_instantiation4), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function two_ts_instantiation4_get_instance_instantiation4

    subroutine two_ts_instantiation4_set_instance_instantiation4(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(two_ts_instantiation4), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine two_ts_instantiation4_set_instance_instantiation4

    function two_ts_instantiation4_associated_instantiation4(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(two_ts_instantiation4), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function two_ts_instantiation4_associated_instantiation4

    ! splicer begin class.twoTs_instantiation4.additional_functions
    ! splicer end class.twoTs_instantiation4.additional_functions

    ! Return pointer to C++ memory.
    function cstruct_as_class_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(Fstruct_as_class), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function cstruct_as_class_get_instance

    subroutine cstruct_as_class_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(Fstruct_as_class), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine cstruct_as_class_set_instance

    function cstruct_as_class_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(Fstruct_as_class), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function cstruct_as_class_associated

    ! splicer begin class.Cstruct_as_class.additional_functions
    ! splicer end class.Cstruct_as_class.additional_functions

    ! Return pointer to C++ memory.
    function cstruct_as_subclass_get_instance(obj) result (cxxptr)
        use iso_c_binding, only: C_PTR
        class(Fstruct_as_subclass), intent(IN) :: obj
        type(C_PTR) :: cxxptr
        cxxptr = obj%cxxmem%addr
    end function cstruct_as_subclass_get_instance

    subroutine cstruct_as_subclass_set_instance(obj, cxxmem)
        use iso_c_binding, only: C_PTR
        class(Fstruct_as_subclass), intent(INOUT) :: obj
        type(C_PTR), intent(IN) :: cxxmem
        obj%cxxmem%addr = cxxmem
        obj%cxxmem%idtor = 0
    end subroutine cstruct_as_subclass_set_instance

    function cstruct_as_subclass_associated(obj) result (rv)
        use iso_c_binding, only: c_associated
        class(Fstruct_as_subclass), intent(IN) :: obj
        logical rv
        rv = c_associated(obj%cxxmem%addr)
    end function cstruct_as_subclass_associated

    ! splicer begin class.Cstruct_as_subclass.additional_functions
    ! splicer end class.Cstruct_as_subclass.additional_functions

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void getName
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  char * name +len(worklen)+len_trim(worktrim)
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_char_*_buf
    ! Attrs:     +api(buf)+intent(inout)
    ! Exact:     c_inout_char_*_buf
    subroutine get_name(name)
        use iso_c_binding, only : C_INT
        character(len=*), intent(INOUT) :: name
        ! splicer begin function.get_name
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        call c_get_name_bufferify(name, SHT_name_len)
        ! splicer end function.get_name
    end subroutine get_name

    ! ----------------------------------------
    ! Function:  void function1
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine testnames_function1()
        ! splicer begin function.function1
        call YYY_TES_function1()
        ! splicer end function.function1
    end subroutine testnames_function1

    ! ----------------------------------------
    ! Function:  void function2
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine f_name_special()
        ! splicer begin function.function2
        call f_c_name_special()
        ! splicer end function.function2
    end subroutine f_name_special

    ! ----------------------------------------
    ! Function:  void function3a
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  int i +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    subroutine F_name_function3a_int(i)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: i
        ! splicer begin function.function3a_0
        call YYY_TES_function3a_0(i)
        ! splicer end function.function3a_0
    end subroutine F_name_function3a_int

    ! ----------------------------------------
    ! Function:  void function3a
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  long i +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    subroutine F_name_function3a_long(i)
        use iso_c_binding, only : C_LONG
        integer(C_LONG), value, intent(IN) :: i
        ! splicer begin function.function3a_1
        call YYY_TES_function3a_1(i)
        ! splicer end function.function3a_1
    end subroutine F_name_function3a_long

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int function4
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     c_function_native_scalar
    ! ----------------------------------------
    ! Argument:  const std::string & rv
    ! Attrs:     +intent(in)
    ! Exact:     f_in_string_&_buf
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     c_in_string_&_buf
    function testnames_function4(rv) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        character(len=*), intent(IN) :: rv
        integer(C_INT) :: SHT_rv
        ! splicer begin function.function4
        integer(C_INT) SHT_rv_len
        SHT_rv_len = len(rv, kind=C_INT)
        SHT_rv = YYY_TES_function4_bufferify(rv, SHT_rv_len)
        ! splicer end function.function4
    end function testnames_function4

    ! ----------------------------------------
    ! Function:  void function5 +name(fiveplus)
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine testnames_fiveplus()
        ! splicer begin function.fiveplus
        call YYY_TES_fiveplus()
        ! splicer end function.fiveplus
    end subroutine testnames_fiveplus

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void TestMultilineSplicer
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  std::string & name
    ! Attrs:     +intent(inout)
    ! Exact:     f_inout_string_&_buf
    ! Attrs:     +api(buf)+intent(inout)
    ! Exact:     c_inout_string_&_buf
    ! ----------------------------------------
    ! Argument:  int * value +intent(out)
    ! Attrs:     +intent(out)
    ! Exact:     f_out_native_*
    ! Attrs:     +intent(out)
    ! Exact:     c_out_native_*
    !>
    !! Use std::string argument to get bufferified function.
    !<
    subroutine test_multiline_splicer(name, value)
        use iso_c_binding, only : C_INT
        character(len=*), intent(INOUT) :: name
        integer(C_INT), intent(OUT) :: value
        ! splicer begin function.test_multiline_splicer
        ! line 1
        ! line 2
        ! splicer end function.test_multiline_splicer
    end subroutine test_multiline_splicer

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  void FunctionTU
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  int arg1 +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    ! ----------------------------------------
    ! Argument:  long arg2 +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    !>
    !! \brief Function template with two template parameters.
    !!
    !<
    subroutine f_name_instantiation1(arg1, arg2)
        use iso_c_binding, only : C_INT, C_LONG
        integer(C_INT), value, intent(IN) :: arg1
        integer(C_LONG), value, intent(IN) :: arg2
        ! splicer begin function.function_tu_0
        call f_c_name_instantiation1(arg1, arg2)
        ! splicer end function.function_tu_0
    end subroutine f_name_instantiation1

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  void FunctionTU
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  float arg1 +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    ! ----------------------------------------
    ! Argument:  double arg2 +value
    ! Attrs:     +intent(in)
    ! Exact:     f_in_native_scalar
    ! Attrs:     +intent(in)
    ! Exact:     c_in_native_scalar
    !>
    !! \brief Function template with two template parameters.
    !!
    !<
    subroutine function_tu_instantiation2(arg1, arg2)
        use iso_c_binding, only : C_DOUBLE, C_FLOAT
        real(C_FLOAT), value, intent(IN) :: arg1
        real(C_DOUBLE), value, intent(IN) :: arg2
        ! splicer begin function.function_tu_instantiation2
        call c_function_tu_instantiation2(arg1, arg2)
        ! splicer end function.function_tu_instantiation2
    end subroutine function_tu_instantiation2

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  int UseImplWorker
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     c_function_native_scalar
    !>
    !! \brief Function which uses a templated T in the implemetation.
    !!
    !<
    function use_impl_worker_instantiation3() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_impl_worker_instantiation3
        SHT_rv = c_use_impl_worker_instantiation3()
        ! splicer end function.use_impl_worker_instantiation3
    end function use_impl_worker_instantiation3

    ! ----------------------------------------
    ! Function:  int Cstruct_as_class_sum
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     c_function_native_scalar
    ! ----------------------------------------
    ! Argument:  const Cstruct_as_class * point +pass
    ! Attrs:     +intent(in)
    ! Exact:     f_in_shadow_*
    ! Attrs:     +intent(in)
    ! Exact:     c_in_shadow_*
    function cstruct_as_class_sum(point) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        class(Fstruct_as_class), intent(IN) :: point
        integer(C_INT) :: SHT_rv
        ! splicer begin function.cstruct_as_class_sum
        SHT_rv = c_cstruct_as_class_sum(point%cxxmem)
        ! splicer end function.cstruct_as_class_sum
    end function cstruct_as_class_sum

    ! ----------------------------------------
    ! Function:  void external_funcs
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine external_funcs(rdbase, pkg, name, alloc, afree, assoc)
        use iso_c_binding, only : C_NULL_CHAR
        character(len=*), intent(IN) :: rdbase
        character(len=*), intent(IN) :: pkg
        character(len=*), intent(IN) :: name
        procedure(external_funcs_alloc) :: alloc
        procedure(external_funcs_afree) :: afree
        procedure(external_funcs_assoc) :: assoc
        ! splicer begin function.external_funcs
        call c_external_funcs(trim(rdbase)//C_NULL_CHAR, &
            trim(pkg)//C_NULL_CHAR, trim(name)//C_NULL_CHAR, alloc, &
            afree, assoc)
        ! splicer end function.external_funcs
    end subroutine external_funcs

    ! splicer begin additional_functions
    ! splicer end additional_functions

    function names2_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(names2), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function names2_eq

    function names2_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(names2), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function names2_ne

    function two_ts_0_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(two_ts_0), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function two_ts_0_eq

    function two_ts_0_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(two_ts_0), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function two_ts_0_ne

    function two_ts_instantiation4_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(two_ts_instantiation4), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function two_ts_instantiation4_eq

    function two_ts_instantiation4_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(two_ts_instantiation4), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function two_ts_instantiation4_ne

    function cstruct_as_class_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(Fstruct_as_class), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function cstruct_as_class_eq

    function cstruct_as_class_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(Fstruct_as_class), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function cstruct_as_class_ne

    function cstruct_as_subclass_eq(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(Fstruct_as_subclass), intent(IN) ::a,b
        logical :: rv
        if (c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function cstruct_as_subclass_eq

    function cstruct_as_subclass_ne(a,b) result (rv)
        use iso_c_binding, only: c_associated
        type(Fstruct_as_subclass), intent(IN) ::a,b
        logical :: rv
        if (.not. c_associated(a%cxxmem%addr, b%cxxmem%addr)) then
            rv = .true.
        else
            rv = .false.
        endif
    end function cstruct_as_subclass_ne

end module top_module
