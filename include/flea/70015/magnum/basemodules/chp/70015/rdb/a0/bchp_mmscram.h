/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: bchp_mmscram.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:12p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:09 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_mmscram.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:12p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_MMSCRAM_H__
#define BCHP_MMSCRAM_H__

/***************************************************************************
 *MMSCRAM - MMSCRAM Registers
 ***************************************************************************/
#define BCHP_MMSCRAM_RSV_S                       0x000fd000 /* RESERVED */
#define BCHP_MMSCRAM_RSV_E                       0x000feffc /* RESERVED */

/***************************************************************************
 *RSV_S - RESERVED
 ***************************************************************************/
/* MMSCRAM :: RSV_S :: reserved0 [31:00] */
#define BCHP_MMSCRAM_RSV_S_reserved0_MASK                          0xffffffff
#define BCHP_MMSCRAM_RSV_S_reserved0_SHIFT                         0

/***************************************************************************
 *RSV_E - RESERVED
 ***************************************************************************/
/* MMSCRAM :: RSV_E :: reserved0 [31:00] */
#define BCHP_MMSCRAM_RSV_E_reserved0_MASK                          0xffffffff
#define BCHP_MMSCRAM_RSV_E_reserved0_SHIFT                         0

#endif /* #ifndef BCHP_MMSCRAM_H__ */

/* End of File */