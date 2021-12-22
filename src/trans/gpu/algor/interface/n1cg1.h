INTERFACE
subroutine n1cg1 (simul,K_N,YD_X,P_EPSNEG,P_EPS,K_ITER,K_IMP,K_IO,K_MODE,&
 & K_PRECO,K_M0,K_ILM0,K_NILM0,YD_YBAR0,YD_SBAR0,P_SIZE0,&
 & K_BFGSB,K_M1,K_ILM1,K_NILM1,YD_YBAR1,YD_SBAR1,P_SIZE1,&
 & K_SELECT,K_NUPTRA,P_F,YD_R,YD_YS,YD_YRS) 
USE PARKIND1 ,ONLY : JPIM ,JPRB
USE CONTROL_VECTORS_MOD

EXTERNAL SIMUL
INTEGER(KIND=JPIM),INTENT(IN)       :: K_NILM0
INTEGER(KIND=JPIM),INTENT(IN)       :: K_NILM1
INTEGER(KIND=JPIM),INTENT(IN)       :: K_N
TYPE(CONTROL_VECTOR),INTENT(INOUT)  :: YD_X
REAL(KIND=JPRB)   ,INTENT(IN)       :: P_EPSNEG
REAL(KIND=JPRB)   ,INTENT(IN)       :: P_EPS 
INTEGER(KIND=JPIM),INTENT(INOUT)    :: K_ITER
INTEGER(KIND=JPIM),INTENT(IN)       :: K_IMP
INTEGER(KIND=JPIM),INTENT(IN)       :: K_IO 
INTEGER(KIND=JPIM),INTENT(OUT)      :: K_MODE
INTEGER(KIND=JPIM),INTENT(IN)       :: K_PRECO
INTEGER(KIND=JPIM),INTENT(IN)       :: K_M0 
INTEGER(KIND=JPIM),INTENT(IN)       :: K_ILM0(K_NILM0)
TYPE(CONTROL_VECTOR),INTENT(IN)     :: YD_YBAR0(K_M0)
TYPE(CONTROL_VECTOR),INTENT(IN)     :: YD_SBAR0(K_M0)
REAL(KIND=JPRB)   ,INTENT(IN)       :: P_SIZE0
INTEGER(KIND=JPIM),INTENT(IN)       :: K_BFGSB
INTEGER(KIND=JPIM),INTENT(INOUT)    :: K_M1 
INTEGER(KIND=JPIM),INTENT(INOUT)    :: K_ILM1(K_NILM1)
TYPE(CONTROL_VECTOR),INTENT(INOUT)  :: YD_YBAR1(K_M1)
TYPE(CONTROL_VECTOR),INTENT(INOUT)  :: YD_SBAR1(K_M1)
REAL(KIND=JPRB)   ,INTENT(OUT)      :: P_SIZE1
INTEGER(KIND=JPIM),INTENT(IN)       :: K_SELECT
INTEGER(KIND=JPIM),INTENT(IN)       :: K_NUPTRA
REAL(KIND=JPRB)   ,INTENT(IN)       :: P_F
TYPE(CONTROL_VECTOR),INTENT(INOUT)  :: YD_R
TYPE(CONTROL_VECTOR) ,INTENT(IN)    :: YD_YS
TYPE(CONTROL_VECTOR) ,INTENT(IN)    :: YD_YRS

end subroutine n1cg1
END INTERFACE
