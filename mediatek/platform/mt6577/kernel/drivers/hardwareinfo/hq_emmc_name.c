/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("Huaqin SOFTWARE")
*  RECEIVED FROM Huaqin AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. Huaqin EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES Huaqin PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE Huaqin SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. Huaqin SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY Huaqin SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND Huaqin'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE Huaqin SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT Huaqin'S OPTION, TO REVISE OR REPLACE THE Huaqin SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  Huaqin FOR SUCH Huaqin SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *   custom_emi.c
 *
 * Project:
 * --------
 *   Android
 *
 * Description:
 * ------------
 *   This Module defines the EMI (external memory interface) related setting.
 *
 * Author:
 * -------
 *  EMI auto generator V0.01
 *
 *   Memory Device database last modified on 2012/2/24
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision$
 * $Modtime$
 * $Log$
 *
 *------------------------------------------------------------------------------
 * WARNING!!!  WARNING!!!   WARNING!!!  WARNING!!!  WARNING!!!  WARNING!!! 
 * This file is generated by EMI Auto-gen Tool.
 * Please do not modify the content directly!
 * It could be overwritten!
 *============================================================================
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "hq_emmc_name.h"

#define NUM_EMMC_RECORD (4)

int num_of_emmc_records = NUM_EMMC_RECORD ;

EMMC_NAME_STRUCT emmc_names_table[] =
{
    
	//KMNJS000ZM_B205
	{
		0x0202,		/* TYPE */
		{0x15,0x01,0x00,0x4E,0x4A,0x53,0x30,0x30,0x4D,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{"KMNJS000ZM_B205"},		/* eMMC name */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
	} ,
	//H9TP32A4GDMCPR_KDM
	{
		0x0202,		/* TYPE */
		{0x90,0x01,0x4A,0x20,0x58,0x49,0x4E,0x59,0x48,0x0,0x0,0x0},		/* NAND_EMMC_ID */
		{"H9TP32A4GDMCPR_KDM"},		/* eMMC name */
		{0,0,0,0,0,0,0,0,0,0},		/* reserved 10 */
	},
	//KMKJS000VM_B309
        {
                0x0202,         /* TYPE */
                {0x15,0x01,0x0,0x4b,0x4a,0x53,0x30,0x30,0x4d,0x03,0x0,0x0},             /* NAND_EMMC_ID */
                {"KMKJS000VM_B309"},         /* eMMC name */
                {0,0,0,0,0,0,0,0,0,0},          /* reserved 10 */
        },
        //SD5D28B_4G  
	{
		0x0202, 		/* TYPE */
		{0x45,0x01,0x0,0x53,0x45,0x4d,0x30,0x34,0x47,0x03,0x0,0x0}, 			/* NAND_EMMC_ID   0x45 01 00 53 45 4d 30 34 47 */
		{"SD5D28B_4G_8Gbit"},		 /* eMMC name */
		{0,0,0,0,0,0,0,0,0,0},			/* reserved 10 */
	}

};