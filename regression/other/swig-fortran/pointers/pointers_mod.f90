! This file was automatically generated by SWIG (http://www.swig.org).
! Version 4.0.2
!
! Do not make changes to this file unless you know what you are doing--modify
! the SWIG interface file instead.
module pointers_mod
 use, intrinsic :: ISO_C_BINDING
 implicit none
 private

 ! DECLARATION CONSTRUCTS
 type, bind(C) :: SwigArrayWrapper
  type(C_PTR), public :: data = C_NULL_PTR
  integer(C_SIZE_T), public :: size = 0
 end type
 public :: fill_with_zeros
 public :: accumulate

! WRAPPER DECLARATIONS
interface
subroutine swigc_fill_with_zeros(farg1) &
bind(C, name="_wrap_fill_with_zeros")
use, intrinsic :: ISO_C_BINDING
import :: swigarraywrapper
type(SwigArrayWrapper) :: farg1
end subroutine

function swigc_accumulate(farg1) &
bind(C, name="_wrap_accumulate") &
result(fresult)
use, intrinsic :: ISO_C_BINDING
import :: swigarraywrapper
type(SwigArrayWrapper) :: farg1
integer(C_INT) :: fresult
end function

end interface


contains
 ! MODULE SUBPROGRAMS
subroutine SWIGTM_fin_double_Sb__SB_(finp, iminp)
  use, intrinsic :: ISO_C_BINDING
  real(C_DOUBLE), dimension(:), intent(in), target :: finp
  type(SwigArrayWrapper), intent(out) :: iminp
  integer(C_SIZE_T) :: sz
  real(C_DOUBLE), pointer :: imtemp

  sz = size(finp, kind=C_SIZE_T)
  if (sz > 0_c_size_t) then
    imtemp => finp(1)
    iminp%data = c_loc(imtemp)
  else
    iminp%data = c_null_ptr
  end if
  iminp%size = sz
end subroutine
subroutine fill_with_zeros(x)
use, intrinsic :: ISO_C_BINDING
real(C_DOUBLE), dimension(:), target :: x
type(SwigArrayWrapper) :: farg1 

call SWIGTM_fin_double_Sb__SB_(x, farg1)
call swigc_fill_with_zeros(farg1)
end subroutine

subroutine SWIGTM_fin_int_Sb__SB_(finp, iminp)
  use, intrinsic :: ISO_C_BINDING
  integer(C_INT), dimension(:), intent(in), target :: finp
  type(SwigArrayWrapper), intent(out) :: iminp
  integer(C_SIZE_T) :: sz
  integer(C_INT), pointer :: imtemp

  sz = size(finp, kind=C_SIZE_T)
  if (sz > 0_c_size_t) then
    imtemp => finp(1)
    iminp%data = c_loc(imtemp)
  else
    iminp%data = c_null_ptr
  end if
  iminp%size = sz
end subroutine
function accumulate(arr) &
result(swig_result)
use, intrinsic :: ISO_C_BINDING
integer(C_INT) :: swig_result
integer(C_INT), dimension(:), intent(in), target :: arr
integer(C_INT) :: fresult 
type(SwigArrayWrapper) :: farg1 

call SWIGTM_fin_int_Sb__SB_(arr, farg1)
fresult = swigc_accumulate(farg1)
swig_result = fresult
end function


end module
