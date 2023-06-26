/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 Rockchip Electronics Co. Ltd.
 *
 * Author: Algea Cao <algea.cao@rock-chips.com>
 */

#ifndef _rk630_H
#define _rk630_H

#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/regmap.h>
#include <linux/mfd/core.h>

#ifndef HIWORD_UPDATE
#define UPDATE(x, h, l)		(((x) << (l)) & GENMASK((h), (l)))
#define HIWORD_MASK(h, l)	((GENMASK((h), (l)) << 16) | GENMASK((h), (l)))
#define HIWORD_UPDATE(v, h, l)	((((v) << (l)) & GENMASK((h), (l))) | (GENMASK((h), (l)) << 16))
#endif

#define RTC_REG(x)			((x) + 0x60000)
#define RTC_SET_SECONDS			RTC_REG(0x0)
#define RTC_SET_MINUTES			RTC_REG(0x4)
#define RTC_SET_HOURS			RTC_REG(0x8)
#define RTC_SET_DAYS			RTC_REG(0xc)
#define RTC_SET_MONTHS			RTC_REG(0x10)
#define RTC_SET_YEARL			RTC_REG(0x14)
#define RTC_SET_YEARH			RTC_REG(0x18)
#define RTC_SET_WEEKS			RTC_REG(0x1c)
#define RTC_ALARM_SECONDS		RTC_REG(0x20)
#define RTC_ALARM_MINUTES		RTC_REG(0x24)
#define RTC_ALARM_HOURS			RTC_REG(0x28)
#define RTC_ALARM_DAYS			RTC_REG(0x2c)
#define RTC_ALARM_MONTHS		RTC_REG(0x30)
#define RTC_ALARM_YEARL			RTC_REG(0x34)
#define RTC_ALARM_YEARH			RTC_REG(0x38)
#define RTC_CTRL			RTC_REG(0x3C)
#define RTC_STATUS0			RTC_REG(0x40)
#define RTC_STATUS1			RTC_REG(0x44)
#define RTC_INT0_EN			RTC_REG(0x48)
#define RTC_INT1_EN			RTC_REG(0x4c)
#define RTC_MSEC_CTRL			RTC_REG(0x50)
#define RTC_MSEC_CNT			RTC_REG(0x54)
#define RTC_COMP_H			RTC_REG(0x58)
#define RTC_COMP_D			RTC_REG(0x5c)
#define RTC_COMP_M			RTC_REG(0x60)
#define RTC_ANALOG_CTRL			RTC_REG(0x64)
#define RTC_ANALOG_TEST			RTC_REG(0x68)
#define RTC_LDO_CTRL			RTC_REG(0x6c)
#define RTC_XO_TRIM0			RTC_REG(0x70)
#define RTC_XO_TRIM1			RTC_REG(0x74)
#define RTC_VPTAT_TRIM			RTC_REG(0x78)
#define RTC_ANALOG_EN			RTC_REG(0x7c)
#define RTC_CLK32K_TEST			RTC_REG(0x80)
#define RTC_TEST_ST			RTC_REG(0x84)
#define RTC_TEST_LEN			RTC_REG(0x88)
#define RTC_CNT_0			RTC_REG(0x8c)
#define RTC_CNT_1			RTC_REG(0x90)
#define RTC_CNT_2			RTC_REG(0x94)
#define RTC_CNT_3			RTC_REG(0x98)
#define RTC_MAX_REGISTER		RTC_CNT_3

#define GRF_REG(x)			((x) + 0x20000)
#define PLUMAGE_GRF_GPIO0A_IOMUX	GRF_REG(0x0000)
#define PLUMAGE_GRF_GPIO0B_IOMUX	GRF_REG(0x0008)
#define PLUMAGE_GRF_GPIO0C_IOMUX	GRF_REG(0x0010)
#define PLUMAGE_GRF_GPIO0D_IOMUX	GRF_REG(0x0018)
#define PLUMAGE_GRF_GPIO1A_IOMUX	GRF_REG(0x0020)
#define PLUMAGE_GRF_GPIO1B_IOMUX	GRF_REG(0x0028)
#define PIN0_SEL_MASK			HIWORD_MASK(1, 0)
#define PIN0_SEL(x)			HIWORD_UPDATE(x, 1, 0)
#define PIN1_SEL_MASK			HIWORD_MASK(3, 2)
#define PIN1_SEL(x)			HIWORD_UPDATE(x, 3, 2)
#define PIN2_SEL_MASK			HIWORD_MASK(5, 4)
#define PIN2_SEL(x)			HIWORD_UPDATE(x, 5, 4)
#define PIN3_SEL_MASK			HIWORD_MASK(7, 6)
#define PIN3_SEL(x)			HIWORD_UPDATE(x, 7, 6)
#define PIN4_SEL_MASK			HIWORD_MASK(9, 8)
#define PIN4_SEL(x)			HIWORD_UPDATE(x, 9, 8)
#define PIN5_SEL_MASK			HIWORD_MASK(11, 10)
#define PIN5_SEL(x)			HIWORD_UPDATE(x, 11, 10)
#define PIN6_SEL_MASK			HIWORD_MASK(13, 12)
#define PIN6_SEL(x)			HIWORD_UPDATE(x, 13, 12)
#define PIN7_SEL_MASK			HIWORD_MASK(15, 14)
#define PIN7_SEL(x)			HIWORD_UPDATE(x, 15, 14)
#define PLUMAGE_GRF_GPIO0A_P		GRF_REG(0x0080)
#define PLUMAGE_GRF_GPIO0B_P		GRF_REG(0x0084)
#define PLUMAGE_GRF_GPIO0C_P		GRF_REG(0x0088)
#define PLUMAGE_GRF_GPIO0D_P		GRF_REG(0x008C)
#define PLUMAGE_GRF_GPIO1A_P		GRF_REG(0x0090)
#define PLUMAGE_GRF_GPIO1B_P		GRF_REG(0x0094)
#define PLUMAGE_GRF_GPIO1B_SR		GRF_REG(0x00D4)
#define PLUMAGE_GRF_GPIO1B_E		GRF_REG(0x0154)
#define PLUMAGE_GRF_SOC_CON0		GRF_REG(0x0400)
#define RTC_CLAMP_EN_MASK		HIWORD_MASK(13, 13)
#define RTC_CLAMP_EN(x)			HIWORD_UPDATE(x, 13, 13)
#define SW_TVE_DCLK_POL_MASK		HIWORD_MASK(4, 4)
#define SW_TVE_DCLK_POL(x)		HIWORD_UPDATE(x, 4, 4)
#define SW_TVE_DCLK_POL_MASK		HIWORD_MASK(4, 4)
#define SW_TVE_DCLK_POL(x)		HIWORD_UPDATE(x, 4, 4)
#define SW_TVE_DCLK_EN_MASK		HIWORD_MASK(3, 3)
#define SW_TVE_DCLK_EN(x)		HIWORD_UPDATE(x, 3, 3)
#define SW_DCLK_UPSAMPLE_EN_MASK	HIWORD_MASK(2, 2)
#define SW_DCLK_UPSAMPLE_EN(x)		HIWORD_UPDATE(x, 2, 2)
#define SW_TVE_MODE_MASK		HIWORD_MASK(1, 1)
#define SW_TVE_MODE(x)			HIWORD_UPDATE(x, 1, 1)
#define SW_TVE_EN_MASK			HIWORD_MASK(0, 0)
#define SW_TVE_EN(x)			HIWORD_UPDATE(x, 0, 0)
#define PLUMAGE_GRF_SOC_CON1		GRF_REG(0x0404)
#define PLUMAGE_GRF_SOC_CON2		GRF_REG(0x0408)
#define PLUMAGE_GRF_SOC_CON3		GRF_REG(0x040C)
#define DCLK_UPSAMPLE_2X4X_MASK		HIWORD_MASK(15, 15)
#define DCLK_UPSAMPLE_2X4X(x)		HIWORD_UPDATE(x, 15, 15)
#define VDAC_ENVBG_MASK			HIWORD_MASK(12, 12)
#define VDAC_ENVBG(x)			HIWORD_UPDATE(x, 12, 12)
#define VDAC_ENSC0_MASK			HIWORD_MASK(11, 11)
#define VDAC_ENSC0(x)			HIWORD_UPDATE(x, 11, 11)
#define VDAC_ENEXTREF_MASK		HIWORD_MASK(10, 10)
#define VDAC_ENEXTREF(x)		HIWORD_UPDATE(x, 10, 10)
#define VDAC_ENDAC0_MASK		HIWORD_MASK(9, 9)
#define VDAC_ENDAC0(x)			HIWORD_UPDATE(x, 9, 9)
#define VDAC_ENCTR2_MASK		HIWORD_MASK(8, 8)
#define VDAC_ENCTR2(x)			HIWORD_UPDATE(x, 8, 8)
#define VDAC_ENCTR1_MASK		HIWORD_MASK(7, 7)
#define VDAC_ENCTR1(x)			HIWORD_UPDATE(x, 7, 7)
#define VDAC_ENCTR0_MASK		HIWORD_MASK(6, 6)
#define VDAC_ENCTR0(x)			HIWORD_UPDATE(x, 6, 6)
#define VDAC_GAIN_MASK			GENMASK(x, 5, 0)
#define VDAC_GAIN(x)			HIWORD_UPDATE(x, 5, 0)
#define PLUMAGE_GRF_SOC_CON4		GRF_REG(0x0410)
#define PLUMAGE_GRF_SOC_STATUS		GRF_REG(0x0480)
#define PLUMAGE_GRF_GPIO0_REN0		GRF_REG(0x0500)
#define PLUMAGE_GRF_GPIO0_REN1		GRF_REG(0x0504)
#define PLUMAGE_GRF_GPIO1_REN0		GRF_REG(0x0508)
#define PLUMAGE_GRF_RTC_STATUS		GRF_REG(0x0610)

#ifndef GRF_MAX_REGISTER
#define GRF_MAX_REGISTER		PLUMAGE_GRF_RTC_STATUS
#endif

#define CRU_REG(x)			((x) + 0x140000)
#define CRU_SPLL_CON0			CRU_REG(0x0000)
#define POSTDIV1_MASK			HIWORD_MASK(14, 12)
#define POSTDIV1(x)			HIWORD_UPDATE(x, 14, 12)
#define FBDIV_MASK			HIWORD_MASK(14, 12)
#define FBDIV(x)			HIWORD_UPDATE(x, 14, 12)
#define CRU_SPLL_CON1			CRU_REG(0x0004)
#define PLLPD0_MASK			HIWORD_MASK(13, 13)
#define PLLPD0(x)			HIWORD_UPDATE(x, 13, 13)
#define PLL_LOCK			BIT(10)
#define POSTDIV2_MASK			HIWORD_MASK(8, 6)
#define POSTDIV2(x)			HIWORD_UPDATE(x, 8, 6)
#define REFDIV_MASK			HIWORD_MASK(5, 0)
#define REFDIV(x)			HIWORD_UPDATE(x, 5, 0)
#define CRU_SPLL_CON2			CRU_REG(0x0008)
#define CRU_MODE_CON			CRU_REG(0x0020)
#define CLK_SPLL_MODE_MASK		HIWORD_MASK(2, 0)
#define CLK_SPLL_MODE(x)		HIWORD_UPDATE(x, 2, 0)
#define CRU_CLKSEL_CON0			CRU_REG(0x0030)
#define CRU_CLKSEL_CON1			CRU_REG(0x0034)
#define DCLK_CVBS_4X_DIV_CON_MASK	HIWORD_MASK(12, 8)
#define DCLK_CVBS_4X_DIV_CON(x)		HIWORD_UPDATE(x, 12, 8)
#define CRU_CLKSEL_CON2			CRU_REG(0x0038)
#define CRU_CLKSEL_CON3			CRU_REG(0x003c)
#define CRU_GATE_CON0			CRU_REG(0x0040)
#define PCLK_EFUSE_EN_MASK		BIT(14 + 16)
#define PCLK_EFUSE_DISABLE		BIT(14)
#define DCLK_CVBS_1X_PLL_CLK_GATE_MASK	HIWORD_MASK(12, 12)
#define DCLK_CVBS_1X_PLL_CLK_GATE(x)	HIWORD_UPDATE(x, 12, 12)
#define DCLK_CVBS_4X_PLL_CLK_GATE_MASK	HIWORD_MASK(11, 11)
#define DCLK_CVBS_4X_PLL_CLK_GATE(x)	HIWORD_UPDATE(x, 11, 11)
#define CRU_SOFTRST_CON0		CRU_REG(0x0050)
#define DRESETN_CVBS_1X_MASK		HIWORD_MASK(10, 10)
#define DRESETN_CVBS_1X(x)		HIWORD_UPDATE(x, 10, 10)
#define DRESETN_CVBS_4X_MASK		HIWORD_MASK(9, 9)
#define DRESETN_CVBS_4X(x)		HIWORD_UPDATE(x, 9, 9)
#define PRESETN_CVBS_MASK		HIWORD_MASK(8, 8)
#define PRESETN_CVBS(x)			HIWORD_UPDATE(x, 8, 8)
#define PRESETN_GRF_MASK		HIWORD_MASK(3, 3)
#define PRESETN_GRF(x)			HIWORD_UPDATE(x, 3, 3)
#define CRU_MAX_REGISTER		CRU_SOFTRST_CON0

#define GPIO0_BASE			0x30000
#define GPIO1_BASE			0x40000
#define GPIO_SWPORT_DR_L		0x00
#define GPIO_SWPORT_DR_H		0x04
#define GPIO_SWPORT_DDR_L		0x08
#define GPIO_SWPORT_DDR_H		0x0c
#define GPIO_INT_EN_L			0x10
#define GPIO_INT_EN_H			0x14
#define GPIO_INT_MASK_L			0x18
#define GPIO_INT_MASK_H			0x1c
#define GPIO_INT_TYPE_L			0x20
#define GPIO_INT_TYPE_H			0x24
#define GPIO_INT_POLARITY_L		0x28
#define GPIO_INT_POLARITY_H		0x2c
#define GPIO_INT_BOTHEDGE_L		0x30
#define GPIO_INT_BOTHEDGE_H		0x34
#define GPIO_DEBOUNCE_L			0x38
#define GPIO_DEBOUNCE_H			0x3c
#define GPIO_DBCLK_DIV_EN_L		0x40
#define GPIO_DBCLK_DIV_EN_H		0x44
#define GPIO_DBCLK_DIV_CON		0x48
#define GPIO_INT_STATUS			0x50
#define GPIO_INT_RAWSTATUS		0x58
#define GPIO_PORT_EOI_L			0x60
#define GPIO_PORT_EOI_H			0x64
#define GPIO_EXT_PORT			0x70
#define GPIO_VER_ID			0x78
#define GPIO_MAX_REGISTER		(GPIO1_BASE + GPIO_VER_ID)

#define TVE_REG(x)			((x) + 0x10000)
#define BT656_DECODER_CTRL		TVE_REG(0x3D00)
#define BT656_DECODER_CROP		TVE_REG(0x3D04)
#define BT656_DECODER_SIZE		TVE_REG(0x3D08)
#define BT656_DECODER_HTOTAL_HS_END	TVE_REG(0x3D0C)
#define BT656_DECODER_VACT_ST_HACT_ST	TVE_REG(0x3D10)
#define BT656_DECODER_VTOTAL_VS_END	TVE_REG(0x3D14)
#define BT656_DECODER_VS_ST_END_F1	TVE_REG(0x3D18)
#define BT656_DECODER_DBG_REG		TVE_REG(0x3D1C)
#define TVE_MODE_CTRL			TVE_REG(0x3E00)
#define TVE_HOR_TIMING1			TVE_REG(0x3E04)
#define TVE_HOR_TIMING2			TVE_REG(0x3E08)
#define TVE_HOR_TIMING3			TVE_REG(0x3E0C)
#define TVE_SUB_CAR_FRQ			TVE_REG(0x3E10)
#define TVE_LUMA_FILTER1		TVE_REG(0x3E14)
#define TVE_LUMA_FILTER2		TVE_REG(0x3E18)
#define TVE_LUMA_FILTER3		TVE_REG(0x3E1C)
#define TVE_LUMA_FILTER4		TVE_REG(0x3E20)
#define TVE_LUMA_FILTER5		TVE_REG(0x3E24)
#define TVE_LUMA_FILTER6		TVE_REG(0x3E28)
#define TVE_LUMA_FILTER7		TVE_REG(0x3E2C)
#define TVE_LUMA_FILTER8		TVE_REG(0x3E30)
#define TVE_IMAGE_POSITION		TVE_REG(0x3E34)
#define TVE_ROUTING			TVE_REG(0x3E38)
#define TVE_SYNC_ADJUST			TVE_REG(0x3E50)
#define TVE_STATUS			TVE_REG(0x3E54)
#define TVE_CTRL			TVE_REG(0x3E68)
#define TVE_INTR_STATUS			TVE_REG(0x3E6C)
#define TVE_INTR_EN			TVE_REG(0x3E70)
#define TVE_INTR_CLR			TVE_REG(0x3E74)
#define TVE_COLOR_BUSRT_SAT		TVE_REG(0x3E78)
#define TVE_CHROMA_BANDWIDTH		TVE_REG(0x3E8C)
#define TVE_BRIGHTNESS_CONTRAST		TVE_REG(0x3E90)
#define TVE_ID				TVE_REG(0x3E98)
#define TVE_REVISION			TVE_REG(0x3E9C)
#define TVE_CLAMP			TVE_REG(0x3EA0)
#define TVE_MAX_REGISTER		TVE_CLAMP

/* RK630 IRQ Definitions */
#define RK630_IRQ_RTC_ALARM		0
#define RK630_IRQ_SYS_INT		1

#define RK630_IRQ_RTC_ALARM_MSK		BIT(7)
#define RK630_IRQ_SYS_MSK		BIT(4)

struct rk630 {
	struct device *dev;
	struct i2c_client *client;
	struct clk *ref_clk;
	struct regmap *grf;
	struct regmap *pinctrl;
	struct regmap *cru;
	struct regmap *tve;
	struct regmap *rtc;
	struct regmap *efuse;
	struct regmap *codec;
	struct gpio_desc *reset_gpio;
	int irq;
	struct regmap_irq_chip_data *irq_data;
	const struct regmap_irq_chip *regmap_irq_chip;
};

extern const struct regmap_config rk630_efuse_regmap_config;
extern const struct regmap_config rk630_rtc_regmap_config;
extern const struct regmap_config rk630_grf_regmap_config;
extern const struct regmap_config rk630_pinctrl_regmap_config;
extern const struct regmap_config rk630_cru_regmap_config;
extern const struct regmap_config rk630_tve_regmap_config;
extern const struct regmap_config rk630_codec_regmap_config;

int rk630_core_probe(struct rk630 *rk630);
int rk630_core_remove(struct rk630 *rk630);

#endif
