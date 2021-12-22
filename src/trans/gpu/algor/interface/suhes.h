INTERFACE
SUBROUTINE SUHES(KLX,KVX,KVXS,PD,PE,PF,PA,PB,PC)
USE PARKIND1 ,ONLY : JPIM ,JPRB
INTEGER(KIND=JPIM),INTENT(IN) :: KLX
INTEGER(KIND=JPIM),INTENT(IN) :: KVXS
INTEGER(KIND=JPIM),INTENT(IN) :: KVX
REAL(KIND=JPRB) ,INTENT(IN) :: PD(KVXS,KLX)
REAL(KIND=JPRB) ,INTENT(IN) :: PE(KVXS,KLX)
REAL(KIND=JPRB) ,INTENT(IN) :: PF(KVXS,KLX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PA(KVXS,KLX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PB(KVXS,KLX)
REAL(KIND=JPRB) ,INTENT(INOUT) :: PC(KVXS,KLX)
END SUBROUTINE SUHES
END INTERFACE
