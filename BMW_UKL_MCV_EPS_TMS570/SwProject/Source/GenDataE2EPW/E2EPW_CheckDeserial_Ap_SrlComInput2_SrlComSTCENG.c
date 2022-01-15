/** Generated code, do not change!
 ** Written by Protection Wrapper Generator (V 1.1.0)
 ** Module: E2EPW_CheckDeserial_Ap_SrlComInput2_SrlComSTCENG.c
 ** Thu, 19-May-2016, 09:57:18
 **/

/* ------------------------------------------------------- */
/*                 SUPRESSED MISRA VIOLATONS               */
/* ------------------------------------------------------- */
/* Error Message : Msg(4:5087) #include statements in a    */
/*   file should only be preceded by other preprocessor    */
/*   directives or comments. MISRA-C:2004 Rule 19.1        */
/* Justification : Inclusion of memmap.h is AUTOSAR        */
/*   specific.                                             */
/* PRQA S 5087 EOF                                         */

#include "E2EPW_CheckDeserial_Ap_SrlComInput2_SrlComSTCENG.h"

#define E2EPW_START_SEC_CODE_LIB
#include "Memmap.h"

/*****************************************************************
 * Function name      : E2EPW_CheckDeserial_SrlComSTCENG
 * Description        : Checks if the signals in the de-serialized
 *                      protected data element are in a valid
 *                      range, considering their bit length in the
 *                      protected pdu area.
 * Parameter pde (in) : pointer to protected data element
 * Return value       : 0                    deserial check passed
 *                      E2EPW_DESERIAL_ERR   deserial check failed
 * Remarks            : none
 ****************************************************************/
FUNC (uint8, E2EPW_CODE) E2EPW_CheckDeserial_SrlComSTCENG
    ( P2CONST (SG_ST_CENG, AUTOMATIC, E2EPW_APPL_DATA) pde )
{
    VAR (uint8, AUTOMATIC) ret = 0;

    if ((pde->ST_ANO_MSA_ENG_STOP & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->CTR_LED_PUBU_MSA & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ST_CENG_0x2A_0x16 & 0xffc00000u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ST_MOT_DRV & 0xfcu) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ST_UDP & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ST_CENG_DRV & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ALIV_ST_CENG & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->TR_HHASS_MSA & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    if ((pde->ST_CENG_0x0C_0x04 & 0xf0u) != 0)
    {
        ret = E2EPW_DESERIAL_ERR;
    }

    return ret;
}

#define E2EPW_STOP_SEC_CODE_LIB
#include "Memmap.h"

/*  << EOF >>  */