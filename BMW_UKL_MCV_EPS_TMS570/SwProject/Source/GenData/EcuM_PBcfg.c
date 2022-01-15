/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2006-2009 by Vector Informatik GmbH, all rights reserved
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  EcuM_PBcfg.c
 *    Component:  SysService_AsrEcuM
 *       Module:  EcuM
 *    Generator:  EAD
 *
 *  Description:  The ECU State Manager is responsible for
 *                  - initialization of the entire BSW Modules (including OS and RTE
 *                  - configuration of the entire ECU for sleep mode
 *                  - fast and systematic wakeup behavior
 *                  - shutdown of the ECU
 *
 *                To be very independent of different system designs e.g. different Modules to initialize,
 *                external/internal Watchdog, etc., the ECU State Manager provides over a mechanism named "callouts"
 *                a way to adapt the startup and shutdown behavior. The system designer must fill the proper code into
 *                the callouts.
 *********************************************************************************************************************/

/**********************************************************************************************************************
    Bswmd Version : 4.08.01
    Project       : EPS.ecuc
    Generated     : 2011-12-23 02:46 pm
    Licensee      : Nexteer Automotive Corporation (2502600702)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.67.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Christian Marchl              Chm           Vector Informatik GmbH
 *  Bethina Mausz                 Bmz           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  03.00.01  2007-09-26  Chm     ESCAN00022372 Quality assurance activities necessary for Component
 *                                              SysService_EcuM
 *  03.00.02  2007-11-21  Chm     ESCAN00023354 No Changes here
 *  03.00.03  2007-12-06  Chm     ESCAN00022871 No changes here
 *                                -             Added Revision History
 *                                -             rework of code review issues
 *  04.00.00  2008-03-01  Chm     ESCAN00024563 No Changes here
 *                                ESCAN00023356 No changes here
 *                                ESCAN00024323 No Changes here
 *                                ESCAN00027863 No Changes here
 *  04.00.01  2008-04-16  Chm     ESCAN00026037 No Changes here
 *                                ESCAN00026537 No Changes here
 *                                ESCAN00026471 No changes here
 *  04.01.00  2008-05-15  Chm     -             No Changes here
 *  04.01.01  2008-06-02  Chm     -             No Changes here
 *  04.01.02  2008-06-06  Chm     ESCAN00027459 No Changes here
 *                                ESCAN00027313 No changes here
 *  04.01.03  2008-06-17  Chm     ESCAN00027659 No Changes here
 *  04.02.00  2008-06-30  Chm     ESCAN00027955 Added preprocessor version check for generator library version
 *  04.03.00  2008-07-23  Chm     ESCAN00028372 No Changes here
 *                                ESCAN00028511 No Changes here
 *  04.03.01  2008-08-08  Bmz     -             No changes here
 *  04.03.02  2008-08-13  Bmz     ESCAN00029221 No changes here
 *  04.03.03  2008-09-01  Chm     ESCAN00029621 No changes here
 *                                ESCAN00029300 No changes here
 *  04.03.04  2008-09-24  Chm     ESCAN00027708 No changes here
 *                                ESCAN00029799 No changes here
 *                                ESCAN00029815 No changes here
 *                                ESCAN00029313 No changes here
 *  04.04.00  2008-10-22  Chm     ESCAN00030516 Added PreCompile Variant support
 *  05.00.00  2008-11-28  Chm     ESCAN00031216 No changes here
 *                                ESCAN00031214 Added file EcuM_PrivateCfg.h to component
 *                                ESCAN00030497 No changes here
 *                                ESCAN00030132 No changes here
 *                                ESCAN00031520 No changes here
 *                                ESCAN00031786 No changes here
 *                                ESCAN00031787 No changes here
 *  05.01.00  2009-02-19  Chm     ESCAN00032011 No changes here
 *            2009-02-19  Chm     ESCAN00032502 No changes here
 *            2009-02-19  Chm     ESCAN00033069 No changes here
 *            2009-02-20  Chm     ESCAN00031852 No changes here
 *            2009-02-23  Chm     ESCAN00029165 No changes here
 *            2009-02-24  Chm     ESCAN00031789 No changes here
 *            2009-03-04  Chm     ESCAN00033480 No changes here
 *            2009-03-09  Chm     ESCAN00033718 Added V_USE_DUMMY_STATEMENT
 *            2009-03-16  Chm     ESCAN00033834 No changes here
 *  05.02.00  2009-05-19  Chm     ESCAN00035001 No changes here
 *            2009-07-07  Chm     ESCAN00036192 No changes here
 *  05.03.00  2009-07-13  Chm     ESCAN00036369 No changes here
 *            2009-07-13  Chm     ESCAN00036370 No changes here
 *            2009-07-13  Chm     ESCAN00035287 No changes here
 *            2009-07-15  Chm     ESCAN00036441 Add memory section <MSN>_PBCFG_ROOT
 *            2009-07-16  Chm     ESCAN00035917 No changes here
 *            2009-07-16  Chm     ESCAN00035535 No changes here
 *            2009-07-17  Chm     ESCAN00036348 No changes here
 *            2009-07-16  Chm     ESCAN00035536 No changes here
 *            2009-07-21  Chm     ESCAN00034788 No changes here
 *  05.03.01  2009-10-22  Chm     ESCAN00037381 No changes here
 *  05.03.02  2009-12-11  Chm     ESCAN00039720 No changes here
 *            2009-12-11  Chm     ESCAN00037612 No changes here
 *            2009-12-14  Chm     ESCAN00039748 No changes here
 *            2009-12-15  Chm     ESCAN00034936 No changes here
 *            2009-12-21  Chm     ESCAN00039882 No changes here
 *            2010-02-19  Chm     ESCAN00040987 No changes here
 *            2010-02-23  Chm     ESCAN00041075 No changes here
 *  05.03.03  2010-04-14  Chm     ESCAN00041836 No changes here
 *            2010-04-19  Chm     ESCAN00041426 No changes here
 *            2010-04-24  Chm     ESCAN00041446 No changes here
 *            2010-04-24  Chm     ESCAN00041827 No changes here
 *  05.03.04  2010-07-29  Bmz     ESCAN00044245 No changes here
 *            2010-07-29  Bmz     ESCAN00044246 No changes here
 *            2010-07-29  Bmz     ESCAN00043065 No changes here
 *  05.04.00  2010-10-18  Bmz     ESCAN00044990 No changes here
 *                                ESCAN00046061 EcuM_Mcu_SetMode removed because it is replaced with the coresponding callout
 *  05.06.00  2010-11-26  Bmz     ESCAN00046158 added Rte wait mechanism
 *                                ESCAN00047183 No changes here
 *                                ESCAN00047434 Add two new internal functions for NvM_CancelWriteAll Waiting mechanism
 *                                ESCAN00045138 Add defines for standard AUTOSAR WKupSources, needed in case they are not
 *                                              defined with <Msn_> prefix
 *            2011-01-26  Bmz     Prefix generation for DEM-ERRORS inserted in GenerationS.xml
 *                                G601 updated
 *            2011-02-03  Bmz     ESCAN00048364 No changes here
 *  05.06.01  2011-03-14  Bmz     ESCAN00049201 update version number
 *  05.07.00  2011-04-26  Bmz     ESCAN00049111 No changes here
 *  05.07.01  2011-05-12  Bmz     ESCAN00049989 No changes here
 *********************************************************************************************************************/

#define ECUM_PBCFG_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "EcuM_Cbk.h"

#define ECUM_PRIVATE_CFG_INCLUDE
#include "EcuM_PrivateCfg.h"
#undef ECUM_PRIVATE_CFG_INCLUDE /* PRQA S 0841 *//* MISRA-C:2004 Rule 19.6: The ndef keyword is required to verify that the header file EcuM_PrivateCfg.h is only included in the expected sources. */

/*<ECUM_RTE_COMPONENT_HEADER_FILE>*/
#include "Rte_EcuM.h"
/*</ECUM_RTE_COMPONENT_HEADER_FILE>*/

/*<ECUM_RTE_HEADER_FILE>*/
#include "Rte.h"
/*</ECUM_RTE_HEADER_FILE>*/

/***********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#if !defined ( V_SUPPRESS_EXTENDED_VERSION_CHECK )
# if ( SYSSERVICE_ASRECUM_GENTOOL_EAD_MAJOR_VERSION != (5u))
#  error "EcuM_PBCfg.c : Incompatible SYSSERVICE_ASRECUM_GENTOOL_EAD_MAJOR_VERSION with generated file!"
# endif
# if ( SYSSERVICE_ASRECUM_GENTOOL_EAD_MINOR_VERSION != (7u))
#  error "EcuM_PBCfg.c : Incompatible SYSSERVICE_ASRECUM_GENTOOL_EAD_MINOR_VERSION with generated file!"
# endif
# if ( SYSSERVICE_ASRECUM_GENTOOL_EAD_PATCH_VERSION != (1u))
#  error "EcuM_PBCfg.c : Incompatible SYSSERVICE_ASRECUM_GENTOOL_EAD_PATCH_VERSION with generated file!"
# endif
#else
# if (ECUM_CFG_MAJOR_VERSION != (5u))
#  error "EcuM_PBCfg.c : Incompatible ECUM_CFG_MAJOR_VERSION with generated file!"
# endif
# if (ECUM_CFG_MINOR_VERSION != (7u))
#  error "EcuM_PBCfg.c : Incompatible ECUM_CFG_MINOR_VERSION  with generated file!"
# endif
#endif

#if (ECUM_CBK_MAJOR_VERSION != (5u))
# error "Incompatible ECUM_CBK_MAJOR_VERSION with this EcuM_PBcfg.c Implementation!"
#endif

#if (ECUM_CBK_MINOR_VERSION != (7u))
# error "Incompatible ECUM_CBK_MINOR_VERSION with this EcuM_PBcfg.c Implementation!"
#endif

#if (ECUM_PRIVATE_CFG_MAJOR_VERSION != (5u))
# error "Incompatible ECUM_PRIVATE_CFG_MAJOR_VERSION with this EcuM_PBcfg.c Implementation!"
#endif

#if (ECUM_PRIVATE_CFG_MINOR_VERSION != (7u))
# error "Incompatible ECUM_PRIVATE_CFG_MINOR_VERSION with this EcuM_PBcfg.c Implementation!"
#endif

#if !defined (V_USE_DUMMY_STATEMENT)
# error "The define V_USE_DUMMY_STATEMENT shall be defined either in Compiler_Cfg.h or as parameter for the Compiler"
#endif

#define ECUM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/* define the AUTOSAR standard wakeup sources with prefix, if they are not available, because they are used within EcuM code */
#ifndef EcuM_ECUM_WKSOURCE_POWER
  #define  EcuM_ECUM_WKSOURCE_POWER          ECUM_WKSOURCE_POWER
#endif
#ifndef EcuM_ECUM_WKSOURCE_RESET
  #define  EcuM_ECUM_WKSOURCE_RESET          ECUM_WKSOURCE_RESET
#endif
#ifndef EcuM_ECUM_WKSOURCE_INTERNAL_RESET
  #define  EcuM_ECUM_WKSOURCE_INTERNAL_RESET ECUM_WKSOURCE_INTERNAL_RESET
#endif
#ifndef EcuM_ECUM_WKSOURCE_INTERNAL_WDG
  #define  EcuM_ECUM_WKSOURCE_INTERNAL_WDG   ECUM_WKSOURCE_INTERNAL_WDG
#endif
#ifndef EcuM_ECUM_WKSOURCE_EXTERNAL_WDG
  #define  EcuM_ECUM_WKSOURCE_EXTERNAL_WDG   ECUM_WKSOURCE_EXTERNAL_WDG
#endif

/*<ECUM_DRIVER_INIT_DECLARATION>*/
/*</ECUM_DRIVER_INIT_DECLARATION>*/

/*<ECUM_MODE_EVENT_CBK_DELARATION>*/
/*</ECUM_MODE_EVENT_CBK_DELARATION>*/

#define ECUM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_IMPL_VARIANT_CONST_SECTION_START>*/
#define ECUM_START_SEC_CONST_UNSPECIFIED
/*</ECUM_IMPL_VARIANT_CONST_SECTION_START>*/
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_TTII_SUCCESSOR_LIST>*/
/*</ECUM_TTII_SUCCESSOR_LIST>*/

/*<ECUM_TTII_DIVISOR_LIST>*/
/*</ECUM_TTII_DIVISOR_LIST>*/

/*<ECUM_WAKEUP_SOURCE_LIST>*/
CONST(struct EcuM_WakeupSourceDefType, ECUM_CONST) EcuM_WakeupSourceList_at[] =
{
     {
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
    ,{
        0    /* validation timeout */
        ,MCU_RESET_UNDEFINED    /* MCU reset reason */
        ,255    /* network channel handle */
    }
};
/*</ECUM_WAKEUP_SOURCE_LIST>*/

/*<ECUM_SLEEP_MODE_CONFIGURATION>*/
CONST(EcuM_SleepModeConfigType,ECUM_CONST) EcuM_SleepModeList_at[] =
{
     {
        /* Settings of EcuMSleepMode */
         (0x00000002u)
        |(0x00000004u)
        |(0x00000010u)
        |(0x00000008u)
        |(0x00000001u)
        |(0x00000020u)
        ,0
        , 255
    }
};
/*</ECUM_SLEEP_MODE_CONFIGURATION>*/

/*<ECUM_IMPL_VARIANT_CONST_SECTION_STOP>*/
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
/*</ECUM_IMPL_VARIANT_CONST_SECTION_STOP>*/
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */
/*<ECUM_DEM_CONSTANT_DEFINITION>*/
/*</ECUM_DEM_CONSTANT_DEFINITION>*/
#define ECUM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/* constant declaration for setting the mode switch events */
#if (ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)
  CONST(uint8, ECUM_CONST) EcuM_ModePostRun_u8 = ECUM_INT_MODE_POST_RUN;
  CONST(uint8, ECUM_CONST) EcuM_ModeRun_u8 = ECUM_INT_MODE_RUN;
  CONST(uint8, ECUM_CONST) EcuM_ModeShutdown_u8 = ECUM_INT_MODE_SHUTDOWN;
  CONST(uint8, ECUM_CONST) EcuM_ModeSleep_u8 = ECUM_INT_MODE_SLEEP;
  CONST(uint8, ECUM_CONST) EcuM_ModeStartup_u8 = ECUM_INT_MODE_STARTUP;
  CONST(uint8, ECUM_CONST) EcuM_ModeWakeSleep_u8 = ECUM_INT_MODE_WAKE_SLEEP;
#endif

#define ECUM_STOP_SEC_CONST_8BIT
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_CONST_PBCFG
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_WDGM_MODE_LIST>*/
/*</ECUM_WDGM_MODE_LIST>*/

/*<ECUM_INTERNAL_CALL_ID_LISTS>*/
/*</ECUM_INTERNAL_CALL_ID_LISTS>*/

#define ECUM_STOP_SEC_CONST_PBCFG
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_CONST_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_CONFIGURATION>*/
/*</ECUM_CONFIGURATION>*/

#define ECUM_STOP_SEC_CONST_PBCFG_ROOT
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_WAKEUP_TIME_OUT_TABLE>*/
VAR(EcuM_WakeupTimeoutCtrlType, ECUM_VAR_NOINIT) EcuM_WakeupTimeoutTable_at[(9u)];
/*</ECUM_WAKEUP_TIME_OUT_TABLE>*/

/*<ECUM_USER_TABLE>*/
VAR(EcuM_UserType, ECUM_VAR_NOINIT) EcuM_UserTable_at[(2u)];
/*</ECUM_USER_TABLE>*/

/*<ECUM_COMM_NOTIFICATION_QUEUE>*/
STATIC VAR(uint8, ECUM_VAR) EcuM_ComMChannelIdBuffer_au8[(1u)];
/*</ECUM_COMM_NOTIFICATION_QUEUE>*/

#define ECUM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/*<ECUM_COMM_NOTIFICATION_CTRL>*/
VAR(EcuM_WakeupNotificationType, ECUM_VAR) EcuM_ComMNotifyCtrl_t =
{
    EcuM_ComMChannelIdBuffer_au8,
    0,
    FALSE
};
/*</ECUM_COMM_NOTIFICATION_CTRL>*/

#define ECUM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#define ECUM_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

#if (ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)
/*<ECUM_INTERNAL_FUNC_CALL>*/
/*</ECUM_INTERNAL_FUNC_CALL>*/

/*<ECUM_COMM_INTERNAL_FUNC_CALL>*/
FUNC(void, ECUM_CODE) EcuM_ComM_WakeUpIndication(uint8 channel_u8)
{
    ComM_EcuM_WakeUpIndication((NetworkHandleType)channel_u8);
} /*FUNC(void, ECUM_CODE) EcuM_ComM_WakeUpIndication(uint8 channel_u8)*/
/*</ECUM_COMM_INTERNAL_FUNC_CALL>*/

FUNC(void, ECUM_CODE) EcuM_StartOs(AppModeType appMode_t)
{
  StartOS(appMode_t);
  return;
}


FUNC(void, ECUM_CODE) EcuM_WdgM_SetMode(uint8 mode_u8)
{
/*<ECUM_WDGM_SET_MODE_CALL>*/
    mode_u8 = mode_u8; /* PRQA S 3199 *//* MISRA-C:2004 redundancy: dummy assignment for unused parameter */
/*</ECUM_WDGM_SET_MODE_CALL>*/
}
#endif

#if (ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)
FUNC(EcuM_WakeupSourceType, ECUM_CODE) EcuM_MapResetReason(P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_APPL_CONFIG) ConfigPtr)
#else
FUNC(EcuM_WakeupSourceType, ECUM_CODE) EcuM_MapResetReason(void)
#endif
{
  /* Predefine the return value. If no matching wakeup source will be found, ECUM_WKSOURCE_RESET shall be returned*/
  EcuM_WakeupSourceType retVal = (EcuM_WakeupSourceType)EcuM_ECUM_WKSOURCE_RESET;
  uint8 loopCounter_u8;

  /* retrieve the reset reason from the Mcu module */
  Mcu_ResetType McuResetReason_tloc = Mcu_GetResetReason();

#if (ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)
    for (loopCounter_u8 = 0; loopCounter_u8 < ConfigPtr->MaxNumberOfWakeupSources_u8; loopCounter_u8++)
#else
    for (loopCounter_u8 = 0; loopCounter_u8 < ECUM_MAX_WAKEUP_SOURCES; loopCounter_u8++)
#endif
    {
#if (ECUM_CONFIG_VARIANT == ECUM_VARIANT_POSTBUILD)
        Mcu_ResetType ConfigResetReason_tloc = ConfigPtr->WakeupSourceList_pt[loopCounter_u8].EcuM_McuResetType_t;
#else
        Mcu_ResetType ConfigResetReason_tloc = EcuM_WakeupSourceList_at[loopCounter_u8].EcuM_McuResetType_t;
#endif

      if ((ConfigResetReason_tloc == McuResetReason_tloc) && (ConfigResetReason_tloc != MCU_RESET_UNDEFINED))
      {
        retVal = (EcuM_WakeupSourceType)(1u << loopCounter_u8);
        break;
      }
    }

  return retVal;
}

/*<ECUM_DRIVER_INIT_I_DEFINITION>*/
FUNC(void, ECUM_CODE) EcuM_AL_DriverInitOne(P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_APPL_CONFIG) ConfigPtr)
{
    EcuStartup_Init1();
#   if (V_USE_DUMMY_STATEMENT == STD_ON)
      ConfigPtr = ConfigPtr; /* PRQA S 3199 *//* MISRA-C:2004 redundancy: dummy assignment for unused parameter */
#   endif
}
/*</ECUM_DRIVER_INIT_I_DEFINITION>*/

/*<ECUM_DRIVER_INIT_II_DEFINITION>*/
FUNC(void, ECUM_CODE) EcuM_AL_DriverInitTwo(P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_APPL_CONFIG) ConfigPtr)
{
    EcuStartup_Init2();
EnableFrInterrupt();
#   if (V_USE_DUMMY_STATEMENT == STD_ON)
      ConfigPtr = ConfigPtr; /* PRQA S 3199 *//* MISRA-C:2004 redundancy: dummy assignment for unused parameter */
#   endif
}
/*</ECUM_DRIVER_INIT_II_DEFINITION>*/

/*<ECUM_DRIVER_INIT_III_DEFINITION>*/
FUNC(void, ECUM_CODE) EcuM_AL_DriverInitThree(P2CONST(EcuM_ConfigType, AUTOMATIC, ECUM_APPL_CONFIG) ConfigPtr)
{
    Darh_Init();
    Cdc_Init();
#   if (V_USE_DUMMY_STATEMENT == STD_ON)
      ConfigPtr = ConfigPtr; /* PRQA S 3199 *//* MISRA-C:2004 redundancy: dummy assignment for unused parameter */
#   endif
}
/*</ECUM_DRIVER_INIT_III_DEFINITION>*/

/*<ECUM_DRIVER_RESTART_DEFINITION>*/
void EcuM_AL_DriverRestart(void)
{
    /* JJW: Commentto Eliminate Davinci Gen Errorr*/
}
/*</ECUM_DRIVER_RESTART_DEFINITION>*/

/*<ECUM_MODE_EVENT_CBK_DEFINITION>*/
 FUNC(void, ECUM_CODE) EcuM_ModeSwitchEvent(uint8 modeEvent_u8)
{
  (void)Rte_Switch_currentMode_currentMode((Rte_ModeType_EcuM_Mode)modeEvent_u8);
  return;
} /* End of EcuM_ModeSwitchEvent() */
/*</ECUM_MODE_EVENT_CBK_DEFINITION>*/


FUNC(boolean, ECUM_CODE) EcuM_ModeRteWaitOnFeedbackEvent(void)
{
  /* determines whether waiting is necessary or not */
  boolean retVal = FALSE;

  /* Rte is used, Mode ports are used and the Feedback functionality is used from Rte */
#if (ECUM_MODE_SWITCH_RTE_ACK == STD_ON)

  if(Rte_Feedback_currentMode_currentMode() != RTE_E_TRANSMIT_ACK)
  {
    /* if query is TRUE remain in state, therefore TRUE is returned while RTE is not finished */
    retVal = TRUE;
  }
  else
  {
    retVal = FALSE;
  }
#endif

  return retVal;
}

#if (STD_ON == ECUM_INCLUDE_NVRAM_MGR)
FUNC(void, ECUM_CODE) EcuM_NvMKillWriteAll(void)
{


 /*<ECUM_NVM_KILL_WRITE_ALL>*/
/* Parameter not available or set to False, or NvM usage was disabled */
/*</ECUM_NVM_KILL_WRITE_ALL>*/

  return;
}
FUNC(uint32, ECUM_CODE) EcuM_GetNvMCancelWriteAllTimeout(void)
{
  /* returns the configured timeout */
  return((uint32)/*<ECUM_NVM_CANCEL_WRITE_ALL_TIMEOUT>*/(6000u)/*</ECUM_NVM_CANCEL_WRITE_ALL_TIMEOUT>*/);
}

#endif

#define ECUM_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 *//* MISRA-C:2004 Rule 19.1: violation due to AUTOSAR requirement for Memory Mapping */

/**********************************************************************************************************************
 *  END OF FILE: ECUM_PBCFG.C
 *********************************************************************************************************************/

