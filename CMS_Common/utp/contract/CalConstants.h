/*****************************************************************************
* Copyright 2010 Nexteer Automotive, All Rights Reserved.
* Nexteer Confidential
*
* Module File Name  : CalConstants.h
* Module Description: This file contains the declarations of calibration 
*                     constants used in the EPS Software.
* Product           : Gen II Plus EA3.0
* Author            : Lucas Wendling
*****************************************************************************/
/* Version Control:
 * Date Created:      Wed Apr 13 12:17:00 2011
 * %version:          6 %
 * %derived_by:       gz7pm0 %
 * %date_modified:    Thu Jan 30 10:10:27 2014 %
 *---------------------------------------------------------------------------------------------------------------------
 */

#ifndef CALCONSTANTS_H
#define CALCONSTANTS_H

#include "Std_Types.h"

/************** Manually added cals, not generated by CMS Data Dictionary *******/
/*	k_CalRelNum_Cnt_u8[12], 
	k_SrvcHwTrqLimit_HwNm_f32, 
	k_SrvcVehSpdLimit_Kph_f32
*/
/************** To be kept in this .h file. Used in integration project ********/


/*********************** Start of Auto Generated Code ************************/

/****************** File Generated on 1/29/2014 4:30:41 PM *******************/
/******************************* CMSBMW- Rev 2 *******************************/

extern CONST(uint8, CAL_CONST) k_CalRelNum_Cnt_u8[12];
extern CONST(float32, CAL_CONST) k_SrvcHwTrqLimit_HwNm_f32;
extern CONST(float32, CAL_CONST) k_SrvcVehSpdLimit_Kph_f32;

extern CONST(float32, CAL_CONST) k_NxtrSrvcPosTrajThres_HwDeg_f32;
extern CONST(uint16, CAL_CONST) k_NxtrSrvcPosTrajHoldTime_mS_u16;
extern CONST(uint16, CAL_CONST) k_NxtrSrvcHandsOnTime_mS_u16;
extern CONST(float32, CAL_CONST) k_F00FHandsOnThres_HwNm_f32;
extern CONST(sint8, CAL_CONST) k_CMSGotoPosPol_Cnt_s08;

#endif


