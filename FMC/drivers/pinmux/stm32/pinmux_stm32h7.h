/*
 * Copyright (c) 2019 Linaro Limited
 * Copyright (c) 2020 Teslabs Engineering S.L.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32H7_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32H7_H_

/**
 * @file Header for STM32H7 pin multiplexing helper
 */

/* Port A */
#define STM32H7_PINMUX_FUNC_PA0_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA0_PWM5_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA0_USART2_CTS    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA0_UART4_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA1_PWM2_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA1_PWM5_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA1_PWM15_CH1N \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA1_USART2_RTS    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA1_UART4_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PA2_PWM2_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA2_PWM5_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA2_PWM15_CH1 \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA2_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)


#define STM32H7_PINMUX_FUNC_PA3_PWM2_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA3_PWM5_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA3_PWM15_CH2 \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA3_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PA5_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA5_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA6_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA6_PWM13_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA7_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA7_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA7_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA7_PWM14_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA8_PWM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA8_I2C3_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PA9_PWM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA9_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA9_SPI2_SCK   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PA10_PWM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA10_USART1_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PA11_PWM1_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA11_UART4_RX    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32H7_PINMUX_FUNC_PA11_USART1_CTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA12_UART4_RX    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32H7_PINMUX_FUNC_PA12_USART1_RTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PA15_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PA15_USART4_RTS \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port B */
#define STM32H7_PINMUX_FUNC_PB0_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB0_PWM3_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB0_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB1_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB1_PWM3_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB1_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB3_PWM2_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB4_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB5_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB6_PWM16_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB6_PWM4_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB6_I2C1_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB6_I2C4_SCL    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB6_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB6_LPUART1_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PB7_PWM17_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB7_PWM4_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB7_I2C1_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB7_I2C4_SDA    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB7_USART1_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32H7_PINMUX_FUNC_PB7_LPUART1_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PB8_PWM16_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB8_PWM4_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB8_I2C1_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB8_I2C4_SCL    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PB9_PWM17_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB9_PWM4_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB9_I2C1_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB9_I2C4_SDA    \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PB10_PWM2_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB10_I2C2_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PB11_PWM2_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB11_I2C2_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB11_USART3_RX	\
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PB13_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB12_UART5_RX    \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PB13_UART5_TX	\
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PB14_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB14_PWM12_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB14_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB14_UART3_RTS	\
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PB15_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB15_PWM12_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PB15_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

/* Port C */
#define STM32H7_PINMUX_FUNC_PC6_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC6_PWM8_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC6_USART6_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PC7_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC7_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC7_USART6_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PC8_PWM3_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC8_PWM8_CH3 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC8_UART5_RTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PC9_PWM3_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC9_PWM8_CH4 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC9_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PC9_UART5_CTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PC10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PC10_UART4_TX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PC11_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32H7_PINMUX_FUNC_PC11_UART4_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PC12_UART5_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port D */
#define STM32H7_PINMUX_FUNC_PD2_UART5_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PD3_USART2_CTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PD4_USART2_RTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PD5_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PD6_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PD8_USART3_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PD9_USART3_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PD11_USART3_CTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PD12_PWM4_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PD12_I2C4_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32H7_PINMUX_FUNC_PD12_USART3_RTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PD13_PWM4_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PD13_I2C4_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PD14_PWM4_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PD14_UART8_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PD15_PWM4_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PD15_UART8_RTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port E */
#define STM32H7_PINMUX_FUNC_PE0_UART8_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PE1_UART8_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE4_PWM15_CH1N \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE5_PWM15_CH1 \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE6_PWM15_CH2 \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE7_UART7_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PE8_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PE8_UART7_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE9_PWM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PE9_UART7_RTS   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE10_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PE10_UART7_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE11_PWM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE12_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE13_PWM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PE14_PWM1_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

/* Port F */
#define STM32H7_PINMUX_FUNC_PF0_I2C2_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PF1_I2C2_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PF6_PWM16_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF6_UART7_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PF7_PWM17_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF7_UART7_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PF8_PWM16_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF8_UART7_RTS    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF8_PWM13_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PF9_PWM17_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF9_UART7_CTS    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PF9_PWM14_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PF14_I2C4_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PF15_I2C4_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

/* Port G */
#define STM32H7_PINMUX_FUNC_PG8_USART6_RTS   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PG9_USART6_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PG12_USART6_RTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PG13_USART6_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PG14_USART6_TX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PG15_USART6_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port H */
#define STM32H7_PINMUX_FUNC_PH4_I2C2_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH5_I2C2_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH6_PWM12_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PH7_I2C3_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH8_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH9_PWM12_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PH10_PWM5_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PH11_PWM5_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PH11_I2C4_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH12_PWM5_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PH12_I2C4_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32H7_PINMUX_FUNC_PH13_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PH14_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PH13_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

/* Port I */
#define STM32H7_PINMUX_FUNC_PI0_PWM5_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PI2_PWM8_CH4 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PI5_PWM8_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PI6_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PI7_PWM8_CH3 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

/* Port J */
#define STM32H7_PINMUX_FUNC_PJ6_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PJ7_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PJ8_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ8_PWM8_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ8_UART8_TX \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PJ9_PWM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ9_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ9_UART8_RX \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32H7_PINMUX_FUNC_PJ10_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ10_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PJ11_PWM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PJ11_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

/* Port K */
#define STM32H7_PINMUX_FUNC_PK0_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PK0_PWM8_CH3 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

#define STM32H7_PINMUX_FUNC_PK1_PWM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32H7_PINMUX_FUNC_PK1_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)

/*FMC-SRAM*/
	//Address A11-A0
	#define STM32H7_PINMUX_FUNC_PF0_FMC_A0 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF1_FMC_A1 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF2_FMC_A2 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF3_FMC_A3 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF4_FMC_A4 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF5_FMC_A5 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF12_FMC_A6 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF13_FMC_A7 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF14_FMC_A8 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PF15_FMC_A9 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PG0_FMC_A10 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)
	#define STM32H7_PINMUX_FUNC_PG1_FMC_A11 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \ 	 			STM32_OSPEEDR_VERY_HIGH_SPEED)

	//Data Bus DB15-DB0
	#define STM32H7_PINMUX_FUNC_PD14_FMC_D0 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD15_FMC_D1 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD0_FMC_D2 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD1_FMC_D3 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE7_FMC_D4 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE8_FMC_D5 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE9_FMC_D6 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE10_FMC_D7 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE11_FMC_D8 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE12_FMC_D9 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE13_FMC_D10 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE14_FMC_D11 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PE15_FMC_D12 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD8_FMC_D13 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD9_FMC_D14 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	#define STM32H7_PINMUX_FUNC_PD10_FMC_D15 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	// Control signals

	//RD#
	#define STM32H7_PINMUX_FUNC_PD4_FMC_NOE \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)
	//WR#
	#define STM32H7_PINMUX_FUNC_PD5_FMC_NWE \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	//WAIT#
	#define STM32H7_PINMUX_FUNC_PD6_FMC_NWAIT \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	//CS1#
	#define STM32H7_PINMUX_FUNC_PD7_FMC_NE1 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	//CS0#
	#define STM32H7_PINMUX_FUNC_PG9_FMC_NE2 \
		(STM32_PINMUX_ALT_FUNC_12 | STM32_PUSHPULL_NOPULL | \
		 STM32_OSPEEDR_VERY_HIGH_SPEED)

	/*End definition FMC-SRAM*/


#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32H7_H_ */