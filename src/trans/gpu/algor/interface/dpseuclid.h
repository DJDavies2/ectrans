INTERFACE
subroutine dpseuclid (K_N,YD_X,YD_Y,P_SP)
USE PARKIND1 ,ONLY : JPIM ,JPRB
USE PARKIND2 ,ONLY : JPRH
USE CONTROL_VECTORS_MOD
INTEGER(KIND=JPIM) :: K_N
TYPE(CONTROL_VECTOR),INTENT(IN) :: YD_X
TYPE(CONTROL_VECTOR),INTENT(IN) :: YD_Y
REAL(KIND=JPRH) ,INTENT(OUT) :: P_SP
end subroutine dpseuclid
END INTERFACE
