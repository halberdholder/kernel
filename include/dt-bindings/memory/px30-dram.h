/*
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier: (GPL-2.0+ OR MIT)
 */

#ifndef _DT_BINDINGS_DRAM_ROCKCHIP_PX30_H
#define _DT_BINDINGS_DRAM_ROCKCHIP_PX30_H

#define DDR2_DS_FULL			(0)
#define DDR2_DS_REDUCE			(1)

#define DDR2_ODT_DIS			(0)
#define DDR2_ODT_50ohm			(50)	/* optional */
#define DDR2_ODT_75ohm			(75)
#define DDR2_ODT_150ohm			(150)

#define DDR3_DS_34ohm			(34)
#define DDR3_DS_40ohm			(40)

#define DDR3_ODT_DIS			(0)
#define DDR3_ODT_40ohm			(40)
#define DDR3_ODT_60ohm			(60)
#define DDR3_ODT_120ohm			(120)

#define LP2_DS_34ohm			(34)
#define LP2_DS_40ohm			(40)
#define LP2_DS_48ohm			(48)
#define LP2_DS_60ohm			(60)
#define LP2_DS_68_6ohm			(68)	/* optional */
#define LP2_DS_80ohm			(80)
#define LP2_DS_120ohm			(120)	/* optional */

#define LP3_DS_34ohm			(34)
#define LP3_DS_40ohm			(40)
#define LP3_DS_48ohm			(48)
#define LP3_DS_60ohm			(60)
#define LP3_DS_80ohm			(80)
#define LP3_DS_34D_40U			(3440)
#define LP3_DS_40D_48U			(4048)
#define LP3_DS_34D_48U			(3448)

#define LP3_ODT_DIS			(0)
#define LP3_ODT_60ohm			(60)
#define LP3_ODT_120ohm			(120)
#define LP3_ODT_240ohm			(240)

#define LP4_PDDS_40ohm			(40)
#define LP4_PDDS_48ohm			(48)
#define LP4_PDDS_60ohm			(60)
#define LP4_PDDS_80ohm			(80)
#define LP4_PDDS_120ohm			(120)
#define LP4_PDDS_240ohm			(240)

#define LP4_DQ_ODT_40ohm		(40)
#define LP4_DQ_ODT_48ohm		(48)
#define LP4_DQ_ODT_60ohm		(60)
#define LP4_DQ_ODT_80ohm		(80)
#define LP4_DQ_ODT_120ohm		(120)
#define LP4_DQ_ODT_240ohm		(240)
#define LP4_DQ_ODT_DIS			(0)

#define LP4_CA_ODT_40ohm		(40)
#define LP4_CA_ODT_48ohm		(48)
#define LP4_CA_ODT_60ohm		(60)
#define LP4_CA_ODT_80ohm		(80)
#define LP4_CA_ODT_120ohm		(120)
#define LP4_CA_ODT_240ohm		(240)
#define LP4_CA_ODT_DIS			(0)

#define DDR4_DS_34ohm			(34)
#define DDR4_DS_48ohm			(48)
#define DDR4_RTT_NOM_DIS		(0)
#define DDR4_RTT_NOM_60ohm		(60)
#define DDR4_RTT_NOM_120ohm		(120)
#define DDR4_RTT_NOM_40ohm		(40)
#define DDR4_RTT_NOM_240ohm		(240)
#define DDR4_RTT_NOM_48ohm		(48)
#define DDR4_RTT_NOM_80ohm		(80)
#define DDR4_RTT_NOM_34ohm		(34)

#define PHY_DDR3_RON_RTT_DISABLE	(0)
#define PHY_DDR3_RON_RTT_451ohm		(1)
#define PHY_DDR3_RON_RTT_225ohm		(2)
#define PHY_DDR3_RON_RTT_150ohm		(3)
#define PHY_DDR3_RON_RTT_112ohm		(4)
#define PHY_DDR3_RON_RTT_90ohm		(5)
#define PHY_DDR3_RON_RTT_75ohm		(6)
#define PHY_DDR3_RON_RTT_64ohm		(7)
#define PHY_DDR3_RON_RTT_56ohm		(16)
#define PHY_DDR3_RON_RTT_50ohm		(17)
#define PHY_DDR3_RON_RTT_45ohm		(18)
#define PHY_DDR3_RON_RTT_41ohm		(19)
#define PHY_DDR3_RON_RTT_37ohm		(20)
#define PHY_DDR3_RON_RTT_34ohm		(21)
#define PHY_DDR3_RON_RTT_33ohm		(22)
#define PHY_DDR3_RON_RTT_30ohm		(23)
#define PHY_DDR3_RON_RTT_28ohm		(24)
#define PHY_DDR3_RON_RTT_26ohm		(25)
#define PHY_DDR3_RON_RTT_25ohm		(26)
#define PHY_DDR3_RON_RTT_23ohm		(27)
#define PHY_DDR3_RON_RTT_22ohm		(28)
#define PHY_DDR3_RON_RTT_21ohm		(29)
#define PHY_DDR3_RON_RTT_20ohm		(30)
#define PHY_DDR3_RON_RTT_19ohm		(31)

#define PHY_DDR4_LPDDR3_2_RON_RTT_DISABLE (0)
#define PHY_DDR4_LPDDR3_2_RON_RTT_480ohm	(1)
#define PHY_DDR4_LPDDR3_2_RON_RTT_240ohm	(2)
#define PHY_DDR4_LPDDR3_2_RON_RTT_160ohm	(3)
#define PHY_DDR4_LPDDR3_2_RON_RTT_120ohm	(4)
#define PHY_DDR4_LPDDR3_2_RON_RTT_96ohm	(5)
#define PHY_DDR4_LPDDR3_2_RON_RTT_80ohm	(6)
#define PHY_DDR4_LPDDR3_2_RON_RTT_68ohm	(7)
#define PHY_DDR4_LPDDR3_2_RON_RTT_60ohm	(16)
#define PHY_DDR4_LPDDR3_2_RON_RTT_53ohm	(17)
#define PHY_DDR4_LPDDR3_2_RON_RTT_48ohm	(18)
#define PHY_DDR4_LPDDR3_2_RON_RTT_43ohm	(19)
#define PHY_DDR4_LPDDR3_2_RON_RTT_40ohm	(20)
#define PHY_DDR4_LPDDR3_2_RON_RTT_37ohm	(21)
#define PHY_DDR4_LPDDR3_2_RON_RTT_34ohm	(22)
#define PHY_DDR4_LPDDR3_2_RON_RTT_32ohm	(23)
#define PHY_DDR4_LPDDR3_2_RON_RTT_30ohm	(24)
#define PHY_DDR4_LPDDR3_2_RON_RTT_28ohm	(25)
#define PHY_DDR4_LPDDR3_2_RON_RTT_26ohm	(26)
#define PHY_DDR4_LPDDR3_2_RON_RTT_25ohm	(27)
#define PHY_DDR4_LPDDR3_2_RON_RTT_24ohm	(28)
#define PHY_DDR4_LPDDR3_2_RON_RTT_22ohm	(29)
#define PHY_DDR4_LPDDR3_2_RON_RTT_21ohm	(30)
#define PHY_DDR4_LPDDR3_2_RON_RTT_20ohm	(31)

#define LP4_VDDQ_2_5			(0)
#define LP4_VDDQ_3			(1)

#define LP4X_VDDQ_0_6			(0)
#define LP4X_VDDQ_0_5			(1)

#define IGNORE_THIS			(0)

#endif /*_DT_BINDINGS_DRAM_ROCKCHIP_PX30_H*/
