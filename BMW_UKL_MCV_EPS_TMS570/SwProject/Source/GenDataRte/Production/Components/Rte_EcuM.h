/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2011 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Components/Rte_EcuM.h
 *     Workspace:  c:/Build/BMW/ses_dev_ea3/BMW_MCV_UKL_EPS_TMS570_F40_Working/BMW_UKL_MCV_EPS_TMS570/Tools/AsrProject/Config/DCF/EPS.dcf
 *   ECU-Project:  EPS
 *  Generated at:  Tue Feb  9 10:51:20 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 2.19.1
 *       License:  License CBD1010124 valid for CBD1010124 Nexteer  Package: BMW MSR SIP BAC3.0     Micro: TI TMS570 TMS570LS30306  Compiler: Code Composer Studio 4.9.0
 *
 *   Description:  Application header file for SW-C
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ECUM_H
# define _RTE_ECUM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"


# ifndef RTE_CORE
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"

/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
extern VAR(Rte_ModeType_EcuM_Mode, RTE_VAR_NOINIT) Rte_ModeMachine_EcuM_currentMode_currentMode;

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h"
# endif /* !defined(RTE_CORE) */



# define RTE_START_SEC_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_EcuM_currentMode_currentMode(Rte_ModeType_EcuM_Mode nextMode);
FUNC(Std_ReturnType, RTE_CODE) Rte_Feedback_EcuM_currentMode_currentMode(void);

# define RTE_STOP_SEC_CODE
# include "MemMap.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_currentMode_currentMode() Rte_ModeMachine_EcuM_currentMode_currentMode


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_currentMode_currentMode Rte_Switch_EcuM_currentMode_currentMode


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_Feedback_currentMode_currentMode Rte_Feedback_EcuM_currentMode_currentMode


# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_ECUM_APPL_CODE
# include "MemMap.h"

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

FUNC(void, RTE_ECUM_APPL_CODE) EcuM_MainFunction(void);

FUNC(Std_ReturnType, RTE_ECUM_APPL_CODE) EcuM_GetStateWrapper(EcuM_UserType parg0, P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) state);

FUNC(Std_ReturnType, RTE_ECUM_APPL_CODE) EcuM_ReleasePOST_RUN(EcuM_UserType parg0);

FUNC(Std_ReturnType, RTE_ECUM_APPL_CODE) EcuM_ReleaseRUN(EcuM_UserType parg0);

FUNC(Std_ReturnType, RTE_ECUM_APPL_CODE) EcuM_RequestPOST_RUN(EcuM_UserType parg0);

FUNC(Std_ReturnType, RTE_ECUM_APPL_CODE) EcuM_RequestRUN(EcuM_UserType parg0);

# define RTE_STOP_SEC_ECUM_APPL_CODE
# include "MemMap.h"


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_StateRequest_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1455040902
#    error "The magic number of the generated file <c:/Build/BMW/ses_dev_ea3/BMW_MCV_UKL_EPS_TMS570_F40_Working/BMW_UKL_MCV_EPS_TMS570/SwProject/Source/GenDataRte/Production/Components/Rte_EcuM.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1455040902
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_ECUM_H */
