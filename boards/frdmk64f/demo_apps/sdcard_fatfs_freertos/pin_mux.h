/*
 * Copyright 2019 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define SOPT5_UART0TXSRC_UART_TX 0x00u /*!<@brief UART 0 transmit data source select: UART0_TX pin */

/*! @name PORTE3 (number 4), J15[P3]/SDHC0_CMD
  @{ */
#define BOARD_SDHC0_CMD_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_CMD_PIN 3U     /*!<@brief PORTE pin index: 3 */
                                   /* @} */

/*! @name PORTE1 (number 2), J15[P7]/SDHC0_D0
  @{ */
#define BOARD_SDHC0_D0_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_D0_PIN 1U     /*!<@brief PORTE pin index: 1 */
                                  /* @} */

/*! @name PORTE0 (number 1), J15[P8]/SDHC0_D1
  @{ */
#define BOARD_SDHC0_D1_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_D1_PIN 0U     /*!<@brief PORTE pin index: 0 */
                                  /* @} */

/*! @name PORTE5 (number 6), J15[P1]/SDHC0_D2
  @{ */
#define BOARD_SDHC0_D2_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_D2_PIN 5U     /*!<@brief PORTE pin index: 5 */
                                  /* @} */

/*! @name PORTE4 (number 5), J15[P2]/SDHC0_D3
  @{ */
#define BOARD_SDHC0_D3_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_D3_PIN 4U     /*!<@brief PORTE pin index: 4 */
                                  /* @} */

/*! @name PORTE2 (number 3), J15[P5]/SDHC0_DCLK
  @{ */
#define BOARD_SDHC0_DCLK_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC0_DCLK_PIN 2U     /*!<@brief PORTE pin index: 2 */
                                    /* @} */

/*! @name PORTE6 (number 7), J15[G1]/SD_CARD_DETECT
  @{ */
#define BOARD_SDHC_CD_GPIO GPIOE /*!<@brief GPIO device name: GPIOE */
#define BOARD_SDHC_CD_PORT PORTE /*!<@brief PORT device name: PORTE */
#define BOARD_SDHC_CD_PIN 6U     /*!<@brief PORTE pin index: 6 */
                                 /* @} */

/*! @name PORTB16 (number 62), U7[4]/UART0_RX
  @{ */
#define BOARD_DEBUG_UART_RX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_RX_PIN 16U    /*!<@brief PORTB pin index: 16 */
                                       /* @} */

/*! @name PORTB17 (number 63), U10[1]/UART0_TX
  @{ */
#define BOARD_DEBUG_UART_TX_PORT PORTB /*!<@brief PORT device name: PORTB */
#define BOARD_DEBUG_UART_TX_PIN 17U    /*!<@brief PORTB pin index: 17 */
                                       /* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
