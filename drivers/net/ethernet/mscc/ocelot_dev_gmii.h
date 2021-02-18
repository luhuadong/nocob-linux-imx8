/* SPDX-License-Identifier: (GPL-2.0 OR MIT) */
/* Microsemi Ocelot Switch driver
 *
 * Copyright (c) 2017 Microsemi Corporation
 */

#ifndef _MSCC_OCELOT_DEV_GMII_H_
#define _MSCC_OCELOT_DEV_GMII_H_

#define DEV_GMII_PORT_MODE_CLOCK_CFG                      0x0

#define DEV_GMII_PORT_MODE_CLOCK_CFG_MAC_TX_RST           BIT(5)
#define DEV_GMII_PORT_MODE_CLOCK_CFG_MAC_RX_RST           BIT(4)
#define DEV_GMII_PORT_MODE_CLOCK_CFG_PORT_RST             BIT(3)
#define DEV_GMII_PORT_MODE_CLOCK_CFG_PHY_RST              BIT(2)
#define DEV_GMII_PORT_MODE_CLOCK_CFG_LINK_SPEED(x)        ((x) & GENMASK(1, 0))
#define DEV_GMII_PORT_MODE_CLOCK_CFG_LINK_SPEED_M         GENMASK(1, 0)

#define DEV_GMII_PORT_MODE_PORT_MISC                      0x4

#define DEV_GMII_PORT_MODE_PORT_MISC_MPLS_RX_ENA          BIT(5)
#define DEV_GMII_PORT_MODE_PORT_MISC_FWD_ERROR_ENA        BIT(4)
#define DEV_GMII_PORT_MODE_PORT_MISC_FWD_PAUSE_ENA        BIT(3)
#define DEV_GMII_PORT_MODE_PORT_MISC_FWD_CTRL_ENA         BIT(2)
#define DEV_GMII_PORT_MODE_PORT_MISC_GMII_LOOP_ENA        BIT(1)
#define DEV_GMII_PORT_MODE_PORT_MISC_DEV_LOOP_ENA         BIT(0)

#define DEV_GMII_PORT_MODE_EVENTS                         0x8

#define DEV_GMII_PORT_MODE_EEE_CFG                        0xc

#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_ENA                BIT(22)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_AGE(x)       (((x) << 15) & GENMASK(21, 15))
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_AGE_M        GENMASK(21, 15)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_AGE_X(x)     (((x) & GENMASK(21, 15)) >> 15)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_WAKEUP(x)    (((x) << 8) & GENMASK(14, 8))
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_WAKEUP_M     GENMASK(14, 8)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_WAKEUP_X(x)  (((x) & GENMASK(14, 8)) >> 8)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_HOLDOFF(x)   (((x) << 1) & GENMASK(7, 1))
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_HOLDOFF_M    GENMASK(7, 1)
#define DEV_GMII_PORT_MODE_EEE_CFG_EEE_TIMER_HOLDOFF_X(x) (((x) & GENMASK(7, 1)) >> 1)
#define DEV_GMII_PORT_MODE_EEE_CFG_PORT_LPI               BIT(0)

#define DEV_GMII_PORT_MODE_RX_PATH_DELAY                  0x10

#define DEV_GMII_PORT_MODE_TX_PATH_DELAY                  0x14

#define DEV_GMII_PORT_MODE_PTP_PREDICT_CFG                0x18

#define DEV_GMII_MAC_CFG_STATUS_MAC_ENA_CFG               0x1c

#define DEV_GMII_MAC_CFG_STATUS_MAC_ENA_CFG_RX_ENA        BIT(4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_ENA_CFG_TX_ENA        BIT(0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_MODE_CFG              0x20

#define DEV_GMII_MAC_CFG_STATUS_MAC_MODE_CFG_FC_WORD_SYNC_ENA BIT(8)
#define DEV_GMII_MAC_CFG_STATUS_MAC_MODE_CFG_GIGA_MODE_ENA BIT(4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_MODE_CFG_FDX_ENA      BIT(0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_MAXLEN_CFG            0x24

#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG              0x28

#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_TAG_ID(x)    (((x) << 16) & GENMASK(31, 16))
#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_TAG_ID_M     GENMASK(31, 16)
#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_TAG_ID_X(x)  (((x) & GENMASK(31, 16)) >> 16)
#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_PB_ENA       BIT(1)
#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_VLAN_AWR_ENA BIT(0)
#define DEV_GMII_MAC_CFG_STATUS_MAC_TAGS_CFG_VLAN_LEN_AWR_ENA BIT(2)

#define DEV_GMII_MAC_CFG_STATUS_MAC_ADV_CHK_CFG           0x2c

#define DEV_GMII_MAC_CFG_STATUS_MAC_ADV_CHK_CFG_LEN_DROP_ENA BIT(0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG               0x30

#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RESTORE_OLD_IPG_CHECK BIT(17)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_REDUCED_TX_IFG BIT(16)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_TX_IFG(x)     (((x) << 8) & GENMASK(12, 8))
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_TX_IFG_M      GENMASK(12, 8)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_TX_IFG_X(x)   (((x) & GENMASK(12, 8)) >> 8)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RX_IFG2(x)    (((x) << 4) & GENMASK(7, 4))
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RX_IFG2_M     GENMASK(7, 4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RX_IFG2_X(x)  (((x) & GENMASK(7, 4)) >> 4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RX_IFG1(x)    ((x) & GENMASK(3, 0))
#define DEV_GMII_MAC_CFG_STATUS_MAC_IFG_CFG_RX_IFG1_M     GENMASK(3, 0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG               0x34

#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_BYPASS_COL_SYNC BIT(26)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_OB_ENA        BIT(25)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_WEXC_DIS      BIT(24)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_SEED(x)       (((x) << 16) & GENMASK(23, 16))
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_SEED_M        GENMASK(23, 16)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_SEED_X(x)     (((x) & GENMASK(23, 16)) >> 16)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_SEED_LOAD     BIT(12)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_RETRY_AFTER_EXC_COL_ENA BIT(8)
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_LATE_COL_POS(x) ((x) & GENMASK(6, 0))
#define DEV_GMII_MAC_CFG_STATUS_MAC_HDX_CFG_LATE_COL_POS_M GENMASK(6, 0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_DBG_CFG               0x38

#define DEV_GMII_MAC_CFG_STATUS_MAC_DBG_CFG_TBI_MODE      BIT(4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_DBG_CFG_IFG_CRS_EXT_CHK_ENA BIT(0)

#define DEV_GMII_MAC_CFG_STATUS_MAC_FC_MAC_LOW_CFG        0x3c

#define DEV_GMII_MAC_CFG_STATUS_MAC_FC_MAC_HIGH_CFG       0x40

#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY                0x44

#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_RX_IPG_SHRINK_STICKY BIT(9)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_RX_PREAM_SHRINK_STICKY BIT(8)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_RX_CARRIER_EXT_STICKY BIT(7)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_RX_CARRIER_EXT_ERR_STICKY BIT(6)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_RX_JUNK_STICKY BIT(5)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_TX_RETRANSMIT_STICKY BIT(4)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_TX_JAM_STICKY  BIT(3)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_TX_FIFO_OFLW_STICKY BIT(2)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_TX_FRM_LEN_OVR_STICKY BIT(1)
#define DEV_GMII_MAC_CFG_STATUS_MAC_STICKY_TX_ABORT_STICKY BIT(0)

#define DEV_GMII_MM_CONFIG_ENABLE_CONFIG                  0x48

#define DEV_GMII_MM_CONFIG_ENABLE_CONFIG_MM_RX_ENA        BIT(0)
#define DEV_GMII_MM_CONFIG_ENABLE_CONFIG_MM_TX_ENA        BIT(4)
#define DEV_GMII_MM_CONFIG_ENABLE_CONFIG_KEEP_S_AFTER_D   BIT(8)

#define DEV_GMII_MM_CONFIG_VERIF_CONFIG                   0x4c

#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_PRM_VERIFY_DIS    BIT(0)
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_PRM_VERIFY_TIME(x) (((x) << 4) & GENMASK(11, 4))
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_PRM_VERIFY_TIME_M GENMASK(11, 4)
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_PRM_VERIFY_TIME_X(x) (((x) & GENMASK(11, 4)) >> 4)
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_VERIF_TIMER_UNITS(x) (((x) << 12) & GENMASK(13, 12))
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_VERIF_TIMER_UNITS_M GENMASK(13, 12)
#define DEV_GMII_MM_CONFIG_VERIF_CONFIG_VERIF_TIMER_UNITS_X(x) (((x) & GENMASK(13, 12)) >> 12)

#define DEV_GMII_MM_STATISTICS_MM_STATUS                  0x50

#define DEV_GMII_MM_STATISTICS_MM_STATUS_PRMPT_ACTIVE_STATUS BIT(0)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_PRMPT_ACTIVE_STICKY BIT(4)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_PRMPT_VERIFY_STATE(x) (((x) << 8) & GENMASK(10, 8))
#define DEV_GMII_MM_STATISTICS_MM_STATUS_PRMPT_VERIFY_STATE_M GENMASK(10, 8)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_PRMPT_VERIFY_STATE_X(x) (((x) & GENMASK(10, 8)) >> 8)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_UNEXP_RX_PFRM_STICKY BIT(12)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_UNEXP_TX_PFRM_STICKY BIT(16)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_MM_RX_FRAME_STATUS BIT(20)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_MM_TX_FRAME_STATUS BIT(24)
#define DEV_GMII_MM_STATISTICS_MM_STATUS_MM_TX_PRMPT_STATUS BIT(28)

#endif
