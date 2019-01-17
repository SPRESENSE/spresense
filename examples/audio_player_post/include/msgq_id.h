/*
 * msgq_id.h -- Message queue pool ID and macro definition.
 *
 * This file was created by msgq_layout.conf
 * !!! CAUTION! don't edit this file manually !!!
 *
 *   Notes: (C) Copyright 2018 Sony Semiconductor Solutions Corporation
 */

#ifndef MSGQ_ID_H_INCLUDED
#define MSGQ_ID_H_INCLUDED

/* Message area size: 3808 bytes */
#define MSGQ_TOP_DRM	0xfe000
#define MSGQ_END_DRM	0xfeee0

/* Message area fill value after message poped */
#define MSG_FILL_VALUE_AFTER_POP	0x0

/* Message parameter type match check */
#define MSG_PARAM_TYPE_MATCH_CHECK	false

/* Message queue pool IDs */
#define MSGQ_NULL	0
#define MSGQ_AUD_MNG	1
#define MSGQ_AUD_APP	2
#define MSGQ_AUD_DSP	3
#define MSGQ_AUD_PFDSP0	4
#define MSGQ_AUD_PFDSP1	5
#define MSGQ_AUD_PLY	6
#define MSGQ_AUD_SFX	7
#define MSGQ_AUD_OUTPUT_MIX	8
#define MSGQ_AUD_RND_PLY	9
#define MSGQ_AUD_RND_PLY_SYNC	10
#define MSGQ_AUD_RND_SFX	11
#define MSGQ_AUD_RND_SFX_SYNC	12
#define NUM_MSGQ_POOLS	13

/* User defined constants */

/************************************************************************/
#define MSGQ_AUD_MNG_QUE_BLOCK_DRM	0xfe044
#define MSGQ_AUD_MNG_N_QUE_DRM	0xfe374
#define MSGQ_AUD_MNG_N_SIZE	88
#define MSGQ_AUD_MNG_N_NUM	4
#define MSGQ_AUD_MNG_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_MNG_H_SIZE	0
#define MSGQ_AUD_MNG_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_APP_QUE_BLOCK_DRM	0xfe088
#define MSGQ_AUD_APP_N_QUE_DRM	0xfe4d4
#define MSGQ_AUD_APP_N_SIZE	64
#define MSGQ_AUD_APP_N_NUM	2
#define MSGQ_AUD_APP_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_APP_H_SIZE	0
#define MSGQ_AUD_APP_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_DSP_QUE_BLOCK_DRM	0xfe0cc
#define MSGQ_AUD_DSP_N_QUE_DRM	0xfe554
#define MSGQ_AUD_DSP_N_SIZE	20
#define MSGQ_AUD_DSP_N_NUM	5
#define MSGQ_AUD_DSP_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_DSP_H_SIZE	0
#define MSGQ_AUD_DSP_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_PFDSP0_QUE_BLOCK_DRM	0xfe110
#define MSGQ_AUD_PFDSP0_N_QUE_DRM	0xfe5b8
#define MSGQ_AUD_PFDSP0_N_SIZE	20
#define MSGQ_AUD_PFDSP0_N_NUM	5
#define MSGQ_AUD_PFDSP0_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_PFDSP0_H_SIZE	0
#define MSGQ_AUD_PFDSP0_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_PFDSP1_QUE_BLOCK_DRM	0xfe154
#define MSGQ_AUD_PFDSP1_N_QUE_DRM	0xfe61c
#define MSGQ_AUD_PFDSP1_N_SIZE	20
#define MSGQ_AUD_PFDSP1_N_NUM	5
#define MSGQ_AUD_PFDSP1_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_PFDSP1_H_SIZE	0
#define MSGQ_AUD_PFDSP1_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_PLY_QUE_BLOCK_DRM	0xfe198
#define MSGQ_AUD_PLY_N_QUE_DRM	0xfe680
#define MSGQ_AUD_PLY_N_SIZE	48
#define MSGQ_AUD_PLY_N_NUM	5
#define MSGQ_AUD_PLY_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_PLY_H_SIZE	0
#define MSGQ_AUD_PLY_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_SFX_QUE_BLOCK_DRM	0xfe1dc
#define MSGQ_AUD_SFX_N_QUE_DRM	0xfe770
#define MSGQ_AUD_SFX_N_SIZE	48
#define MSGQ_AUD_SFX_N_NUM	5
#define MSGQ_AUD_SFX_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_SFX_H_SIZE	0
#define MSGQ_AUD_SFX_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_OUTPUT_MIX_QUE_BLOCK_DRM	0xfe220
#define MSGQ_AUD_OUTPUT_MIX_N_QUE_DRM	0xfe860
#define MSGQ_AUD_OUTPUT_MIX_N_SIZE	48
#define MSGQ_AUD_OUTPUT_MIX_N_NUM	8
#define MSGQ_AUD_OUTPUT_MIX_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_OUTPUT_MIX_H_SIZE	0
#define MSGQ_AUD_OUTPUT_MIX_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_RND_PLY_QUE_BLOCK_DRM	0xfe264
#define MSGQ_AUD_RND_PLY_N_QUE_DRM	0xfe9e0
#define MSGQ_AUD_RND_PLY_N_SIZE	32
#define MSGQ_AUD_RND_PLY_N_NUM	16
#define MSGQ_AUD_RND_PLY_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_RND_PLY_H_SIZE	0
#define MSGQ_AUD_RND_PLY_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_RND_PLY_SYNC_QUE_BLOCK_DRM	0xfe2a8
#define MSGQ_AUD_RND_PLY_SYNC_N_QUE_DRM	0xfebe0
#define MSGQ_AUD_RND_PLY_SYNC_N_SIZE	16
#define MSGQ_AUD_RND_PLY_SYNC_N_NUM	8
#define MSGQ_AUD_RND_PLY_SYNC_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_RND_PLY_SYNC_H_SIZE	0
#define MSGQ_AUD_RND_PLY_SYNC_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_RND_SFX_QUE_BLOCK_DRM	0xfe2ec
#define MSGQ_AUD_RND_SFX_N_QUE_DRM	0xfec60
#define MSGQ_AUD_RND_SFX_N_SIZE	32
#define MSGQ_AUD_RND_SFX_N_NUM	16
#define MSGQ_AUD_RND_SFX_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_RND_SFX_H_SIZE	0
#define MSGQ_AUD_RND_SFX_H_NUM	0
/************************************************************************/
#define MSGQ_AUD_RND_SFX_SYNC_QUE_BLOCK_DRM	0xfe330
#define MSGQ_AUD_RND_SFX_SYNC_N_QUE_DRM	0xfee60
#define MSGQ_AUD_RND_SFX_SYNC_N_SIZE	16
#define MSGQ_AUD_RND_SFX_SYNC_N_NUM	8
#define MSGQ_AUD_RND_SFX_SYNC_H_QUE_DRM	0xffffffff
#define MSGQ_AUD_RND_SFX_SYNC_H_SIZE	0
#define MSGQ_AUD_RND_SFX_SYNC_H_NUM	0
#endif /* MSGQ_ID_H_INCLUDED */