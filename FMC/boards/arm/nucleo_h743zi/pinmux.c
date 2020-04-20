/*
 * Copyright (c) 2020 Teslabs Engineering S.L.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <device.h>
#include <init.h>
#include <drivers/pinmux.h>
#include <sys/sys_io.h>

#include <pinmux/stm32/pinmux_stm32.h>

/* NUCLEO-H743ZI pin configurations */
static const struct pin_config pinconf[] = {
#ifdef CONFIG_UART_3
	{ STM32_PIN_PD8, STM32H7_PINMUX_FUNC_PD8_USART3_TX },
	{ STM32_PIN_PD9, STM32H7_PINMUX_FUNC_PD9_USART3_RX },
#endif /* CONFIG_UART_3 */

#ifdef CONFIG_UART_2
	{ STM32_PIN_PD5, STM32H7_PINMUX_FUNC_PD5_USART2_TX },
	{ STM32_PIN_PD6, STM32H7_PINMUX_FUNC_PD6_USART2_RX },
#endif /* CONFIG_UART_2 */

#ifdef CONFIG_FMC_0
	{ STM32_PIN_PF0, STM32H7_PINMUX_FUNC_PF0_FMC_A0 },
	{ STM32_PIN_PF1, STM32H7_PINMUX_FUNC_PF1_FMC_A1 },
	{ STM32_PIN_PF2, STM32H7_PINMUX_FUNC_PF2_FMC_A2 },
	{ STM32_PIN_PF3, STM32H7_PINMUX_FUNC_PF3_FMC_A3 },
	{ STM32_PIN_PF4, STM32H7_PINMUX_FUNC_PF4_FMC_A4 },
	{ STM32_PIN_PF5, STM32H7_PINMUX_FUNC_PF5_FMC_A5 },
	{ STM32_PIN_PF12, STM32H7_PINMUX_FUNC_PF12_FMC_A6 },
	{ STM32_PIN_PF13, STM32H7_PINMUX_FUNC_PF13_FMC_A7 },
	{ STM32_PIN_PF14, STM32H7_PINMUX_FUNC_PF14_FMC_A8 },
	{ STM32_PIN_PF15, STM32H7_PINMUX_FUNC_PF15_FMC_A9 },
	{ STM32_PIN_PG0, STM32H7_PINMUX_FUNC_PG0_FMC_A10 },
	{ STM32_PIN_PG1, STM32H7_PINMUX_FUNC_PG1_FMC_A11 },
	{ STM32_PIN_PD14, STM32H7_PINMUX_FUNC_PD14_FMC_D0 },
	{ STM32_PIN_PD15, STM32H7_PINMUX_FUNC_PD15_FMC_D1 },
	{ STM32_PIN_PD0, STM32H7_PINMUX_FUNC_PD0_FMC_D2 },
	{ STM32_PIN_PD1, STM32H7_PINMUX_FUNC_PD1_FMC_D3 },
	{ STM32_PIN_PE7, STM32H7_PINMUX_FUNC_PE7_FMC_D4 },
	{ STM32_PIN_PE8, STM32H7_PINMUX_FUNC_PE8_FMC_D5 },
	{ STM32_PIN_PE9, STM32H7_PINMUX_FUNC_PE9_FMC_D6 },
	{ STM32_PIN_PE10, STM32H7_PINMUX_FUNC_PE10_FMC_D7 },
	{ STM32_PIN_PE11, STM32H7_PINMUX_FUNC_PE11_FMC_D8 },
	{ STM32_PIN_PE12, STM32H7_PINMUX_FUNC_PE12_FMC_D9 },
	{ STM32_PIN_PE13, STM32H7_PINMUX_FUNC_PE13_FMC_D10 },
	{ STM32_PIN_PE14, STM32H7_PINMUX_FUNC_PE14_FMC_D11 },
	{ STM32_PIN_PE15, STM32H7_PINMUX_FUNC_PE15_FMC_D12 },
	{ STM32_PIN_PD8, STM32H7_PINMUX_FUNC_PD8_FMC_D13 },
	{ STM32_PIN_PD9, STM32H7_PINMUX_FUNC_PD9_FMC_D14 },
	{ STM32_PIN_PD10, STM32H7_PINMUX_FUNC_PD10_FMC_D15 },
	{ STM32_PIN_PD4, STM32H7_PINMUX_FUNC_PD4_FMC_NOE },
	{ STM32_PIN_PD5, STM32H7_PINMUX_FUNC_PD5_FMC_NWE },
	{ STM32_PIN_PD6, STM32H7_PINMUX_FUNC_PD6_FMC_NWAIT },
	{ STM32_PIN_PD7, STM32H7_PINMUX_FUNC_PD7_FMC_NE1 },
	{ STM32_PIN_PG9, STM32H7_PINMUX_FUNC_PG9_FMC_NE2 },

#endif /* CONFIG_FMC_0 */

};

static int pinmux_stm32_init(struct device *port)
{
	ARG_UNUSED(port);

	stm32_setup_pins(pinconf, ARRAY_SIZE(pinconf));

	return 0;
}

SYS_INIT(pinmux_stm32_init, PRE_KERNEL_1,
	 CONFIG_PINMUX_STM32_DEVICE_INITIALIZATION_PRIORITY);
