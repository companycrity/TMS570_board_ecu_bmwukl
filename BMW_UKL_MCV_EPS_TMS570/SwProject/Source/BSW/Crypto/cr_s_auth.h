/*******************************************************************************
**                                                                            **
**  SRC-MODULE: cr_s_auth.h                                                   **
**                                                                            **
**  Copyright (C) BMW Group 2006                                              **
**                                                                            **
**  TARGET    : All                                                           **
**                                                                            **
**  PROJECT   : BMW Standard Core                                             **
**                                                                            **
**  AUTHOR    : 3SOFT                                                         **
**                                                                            **
**  PURPOSE   : symmetrical authentication                                    **
**                                                                            **
**  REMARKS   : ---                                                           **
**                                                                            **
**  PLATFORM DEPENDANT [yes/no]: no                                           **
**                                                                            **
**  TO BE CHANGED BY USER [yes/no]: no                                        **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                      Author Identity                                       **
********************************************************************************
**                                                                            **
** Initials     Name                       Company                            **
** --------     -------------------------  ---------------------------------- **
** jd           Jochen Decker              3SOFT                              **
** mg           Matthias Galota            3SOFT                              **
** am           Alexander Much             3SOFT                              **
** sc           Juergen Scherg             3SOFT                              **
** fs           Frank Stamm                3SOFT                              **
** gema         Markus Gerngross           MB Technology                      **
**                                                                            **
*******************************************************************************/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/

/*
 * V5.0.1: 27.01.2010, gema: CR70529: Crypto: Compiler switches shall have 
 *                                    defined values
 * V5.0.0: 21.09.2006, mg : code clean-ups
 *         11.08.2006, mg : improved formatting, changed macro syntax, made
 *                          local functions static
 * V4.1.0: 22.06.2006, mg : no changes
 * V4.0.0: 03.04.2006, mg : moved configuration options to Crypto_Cfg.h, key
 *                          length configurable independently for authentication
 *                          and signature, cleaned up cr_c_hash.c,
 *                          removed compiler warnings
 *         22.02.2006, fs : added coding functions
 * V3.3.1: 11.11.2005, jd : added support for TriCore, ST30, MAC7100 and MB91
 * V3.3.0: 28.10.2005, jd : adapted to programming guidelines 1.6.1,
 *                          incorporated memory mappings of SC6.5,
 *                          added jumptable for access from application space
 * V3.2.1: 22.07.2005, mg : adapted header files for SC6
 * V3.2.0: 22.07.2005, am : changed type infrastructure from a mixed near/far
 *                          environment to a pure far API
 * V3.1.0: 03.05.2005, mg : adapted file header
 * V3.0.0: 17.02.2005, am : adopted to SC4, MISRA cleanups
 * V2.0.0: 08.10.2004, sc : Adoption from Acryl 2.1. Adapted to 16 bit CPUs.
 */

#if !defined( CR_S_AUTH_H )
#define CR_S_AUTH_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Crypto_Cfg.h"            /* a&s configuration                       */
#include "cr_c_comp_specific.h"    /* compiler and platform specific settings */

/*******************************************************************************
**                      Global Macros                                         **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Global Data                                           **
*******************************************************************************/

/*******************************************************************************
**                      Global Function Prototypes                            **
*******************************************************************************/
#define CRYPTO_START_SEC_CODE
#include "MemMap.h"

extern CR_C_RC_t Crypto_CheckSigSwSymm
(
   uint32 const    numBlocks,
   CR_fpcfpc_uint8 textPtr,
   CR_fpc_uint32   length,
   CR_fpc_uint8    mac
);

extern CR_C_RC_t Crypto_CheckSigNCDSymm
(
   uint32 const    numBlocks,
   CR_fpcfpc_uint8 textPtr,
   CR_fpc_uint32   length,
   CR_fpc_uint8    mac
);

extern CR_C_RC_t Crypto_CheckAuthUStgSymm
(
   CR_fpc_uint8 challenge,
   CR_fpc_uint8 userID,
   CR_fpc_uint8 controllerID,
   uint32       level,
   CR_fpc_uint8 response
);

#if (CR_DEF_STGAUTH == STD_ON)
extern void CR_S_AuthenticateStgSamSymm
(
   CR_fpc_uint8 challenge,
   CR_fpc_uint8 controllerID,
   CR_fpc_uint8 samID,
   CR_fp_uint8  response
);
#endif                                           /* if (CR_DEF_STGAUTH == STD_ON) */

#if (CR_DEF_STGAUTH == STD_ON)
extern CR_C_RC_t CR_S_CheckAuthStgSamSymm
(
   CR_fpc_uint8 challenge,
   CR_fpc_uint8 controllerID,
   CR_fpc_uint8 samID,
   CR_fpc_uint8 response
);
#endif                                           /* if (CR_DEF_STGAUTH == STD_ON) */


#define CRYPTO_STOP_SEC_CODE
#include "MemMap.h"

#endif /* if !defined( CR_S_AUTH_H ) */
/*** End of file **************************************************************/
