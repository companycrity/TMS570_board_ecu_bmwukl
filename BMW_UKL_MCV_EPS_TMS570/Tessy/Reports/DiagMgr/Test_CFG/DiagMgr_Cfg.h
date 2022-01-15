
/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : DiagMgr_Cfg.h
* Module Description: Configuration file of DiagMgr module
* Product           : Gen II Plus - EA3.0
* Generator         : artt 2.0.2.0
* Generation Time   : 03.05.2013 15:41:42
*****************************************************************************/
/* Version Control:
 * Date Created:      Fri Jul 13 18:34:17 2012
 * %version:          1 %
 * %date_modified:    Thu Mar  6 13:55:44 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                        SCR #
 * -------   -------  --------  ---------------------------------------------------------------------------  ----------
 * 07/13/12   1       JJW       Initial template creation
 */

#ifndef DIAGMGR_CFG_H
#define DIAGMGR_CFG_H



/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*** Public Part (used by DiagMgr API) *****************************************/

#include "Std_Types.h"                   /* Standard type definitions      */
 
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr10_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr10_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr10_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr10_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr10_ReportNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );

extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr8_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr8_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr8_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr8_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );

extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr9_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr9_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr9_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr9_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr9_ReportNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );

extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr11_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr11_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr11_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr11_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );


extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr7_GetNTCFailed( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCFailed_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr7_GetNTCActive( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(boolean, AUTOMATIC, AUTOMATIC) NTCActive_Ptr_T_lgc );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr7_GetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, P2VAR(uint8, AUTOMATIC, AUTOMATIC) Status_Ptr_T_u08 );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr7_SetNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );
extern FUNC(Std_ReturnType, RTE_AP_DIAGMGR_APPL_CODE) NxtrDiagMgr7_ReportNTCStatus( VAR(NTCNumber, AUTOMATIC) NTC_Cnt_T_enum, VAR(uint8, AUTOMATIC) Param_Cnt_T_u08, VAR(NxtrDiagMgrStatus, AUTOMATIC) Status_Cnt_T_enum );



/*** Private Part (used by DiagMgr.c only) *************************************/
#ifdef DIAGMGR_C
/* Provide access to the direct access S/R port definitions for black box data */
#if defined(DIAGMGR_DEMIF_RTEHEADER)	
#include "Rte_Ap_DiagMgr9.h"

/* Patch Start for CP support in DiagMgr11 */
#undef RTE_APPLICATION_HEADER_FILE
#include "Rte_Ap_DiagMgr11.h"
/* Patch End for CP support in DiagMgr11 */

/* Patch Start for CP support in DiagMgr8 */
#undef RTE_APPLICATION_HEADER_FILE
#include "Rte_Ap_DiagMgr8.h"
/* Patch End for CP support in DiagMgr8 */

#elif defined(DIAGMGR_FAILACTION_RTEHEADER)
/* Provide access to the direct access S/R port definitions for black box data */
#include "Rte_Ap_DiagMgr10.h"
#else
#endif
#define DIAGMGR_DEV_ERROR_DETECT					STD_ON

#define D_NUMOFDEMEVENTS_CNT_U08					82

/* DiagMgr Event Block Configuration Definitions */
typedef struct {
	uint8 Param;
   	uint8 Status;
	uint8 AgingCounter;
} NTCInfo_Str;

typedef struct {
	NTCNumber NTC;
	uint8 Param;
   	NxtrDiagMgrStatus Status;
} NTCInfoQueue_Str;

typedef struct {
	P2VAR(NTCInfo_Str, AUTOMATIC, AUTOMATIC) NTCInfoPtr;
   	uint8 NumElements;
} DiagMgrNtcInfoMap_Str;

typedef struct {
	uint8 AppIdx;	/* Application index, key to DiagMgrNtcInfoMap_Str table */
   	uint8 InfoIdx;  /* NTCInfo index of of table found by using the AppIdx into the DiagMgrNtcInfoMap_Str table */
} DiagMgrNtcAppMap_Str;

 

/* Ap_10 Application SWC Internal Defs*/
#define DIAGMGR_EVENTNUM_10                               64u
#define DIAGMGR_APID_10                                   0u

extern VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts10_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag10_Cnt_M_u08;
extern VAR(uint16, AP_DIAGMGR_VAR) DiagSts10_Cnt_M_b16[2u];
extern VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate10_UlspmS_M_f32[2u];
extern VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp10_Cnt_M_lgc;
extern VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo10_Cnt_M_str[DIAGMGR_EVENTNUM_10];
extern CONST(NTCNumber, AUTOMATIC) T_NTCMapTbl10_Cnt_enum[DIAGMGR_EVENTNUM_10];
extern VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex10_Cnt_M_u08;
extern VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue10_Cnt_M_str[5];

/* Ap_8 Application SWC Internal Defs*/
#define DIAGMGR_EVENTNUM_8                                8u
#define DIAGMGR_APID_8                                    1u

extern VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts8_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag8_Cnt_M_u08;
extern VAR(uint16, AP_DIAGMGR_VAR) DiagSts8_Cnt_M_b16[2u];
extern VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate8_UlspmS_M_f32[2u];
extern VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp8_Cnt_M_lgc;
extern VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo8_Cnt_M_str[DIAGMGR_EVENTNUM_8];
extern CONST(NTCNumber, AUTOMATIC) T_NTCMapTbl8_Cnt_enum[DIAGMGR_EVENTNUM_8];

/* Ap_9 Application SWC Internal Defs*/
#define DIAGMGR_EVENTNUM_9                                32u
#define DIAGMGR_APID_9                                    2u

extern VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts9_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag9_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag_Cnt_M_u08;
extern VAR(uint16, AP_DIAGMGR_VAR) DiagSts9_Cnt_M_b16[2u];
extern VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate9_UlspmS_M_f32[2u];
extern VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp9_Cnt_M_lgc;
extern VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo9_Cnt_M_str[DIAGMGR_EVENTNUM_9];
extern CONST(NTCNumber, AUTOMATIC) T_NTCMapTbl9_Cnt_enum[DIAGMGR_EVENTNUM_9];
extern VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex9_Cnt_M_u08;
extern VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue9_Cnt_M_str[3];

/* Ap_11 Application SWC Internal Defs*/
#define DIAGMGR_EVENTNUM_11                               4u
#define DIAGMGR_APID_11                                   3u

extern VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts11_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag11_Cnt_M_u08;
extern VAR(uint16, AP_DIAGMGR_VAR) DiagSts11_Cnt_M_b16[2u];
extern VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate11_UlspmS_M_f32[2u];
extern VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp11_Cnt_M_lgc;
extern VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo11_Cnt_M_str[DIAGMGR_EVENTNUM_11];
extern CONST(NTCNumber, AUTOMATIC) T_NTCMapTbl11_Cnt_enum[DIAGMGR_EVENTNUM_11];

/* Ap_7 Application SWC Internal Defs*/
#define DIAGMGR_EVENTNUM_7                                29u
#define DIAGMGR_APID_7                                    4u

extern VAR(uint8, AP_DIAGMGR_VAR) ActDiagSts7_Cnt_M_u08;
extern VAR(uint8, AP_DIAGMGR_VAR) ResetNTCFlag7_Cnt_M_u08;
extern VAR(uint16, AP_DIAGMGR_VAR) DiagSts7_Cnt_M_b16[2u];
extern VAR(float32, AP_DIAGMGR_VAR) ActiveRmpRate7_UlspmS_M_f32[2u];
extern VAR(boolean, AP_DIAGMGR_VAR) DiagMgrInitComp7_Cnt_M_lgc;
extern VAR(NTCInfo_Str, AP_DIAGMGR_VAR)	DiagMgr_NTCInfo7_Cnt_M_str[DIAGMGR_EVENTNUM_7];
extern CONST(NTCNumber, AUTOMATIC) T_NTCMapTbl7_Cnt_enum[DIAGMGR_EVENTNUM_7];
extern VAR(uint8, AP_DIAGMGR_VAR) NTCQueueIndex7_Cnt_M_u08;
extern VAR(NTCInfoQueue_Str, AP_DIAGMGR_VAR)	NTCInfoQueue7_Cnt_M_str[1];

#define DIAGMGR_NUMAPPS                                   5u
extern CONST(DiagMgrNtcAppMap_Str, AP_DIAGMGR_CONST) T_DiagMgrNtcAppInfoMap_Cnt_Str[512u];
extern CONST(DiagMgrNtcInfoMap_Str, AP_DIAGMGR_CONST) T_DiagMgrNtcInfoPtr_Cnt_Str[DIAGMGR_NUMAPPS];
extern CONSTP2VAR(uint16, AUTOMATIC, AP_DIAGMGR_CONST) T_DiagMgrDiagSts_Ptr_b16[DIAGMGR_NUMAPPS];
extern CONSTP2VAR(float32, AUTOMATIC, AP_DIAGMGR_CONST) T_DiagMgrRmpRate_Ptr_f32[DIAGMGR_NUMAPPS];

/* DiagMgr9_Per_CP0 Checkpoint is enabled */
/* DiagMgr11_Per_CP0 Checkpoint is enabled */
/* DiagMgr8_Per_CP1 Checkpoint is enabled */

/* Disable all checkpoints that are not enabled */
#define Rte_Call_DiagMgr_Per1_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr_Per1_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr10_Per_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr10_Per_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr8_Per_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr_Per2_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr_Per2_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr9_Per_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr11_Per_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr7_Per_CP0_CheckpointReached()		(void)0 /* Checkpoint disabled */	 
#define Rte_Call_DiagMgr7_Per_CP1_CheckpointReached()		(void)0 /* Checkpoint disabled */	 

#endif /* DIAGMGR_C                                                            */


/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/*** Public Part (DiagMgr API) *****************************************/

/*
 * File version information
 */
#define DIAGMGR_CFG_H_MAJOR_VERSION   1u
#define DIAGMGR_CFG_H_MINOR_VERSION   0u
#define DIAGMGR_CFG_H_PATCH_VERSION   0u

/*
 * API enable settings
 */

   
#endif /* DIAGMGR_CFG_H */

/*** End of file **************************************************************/
