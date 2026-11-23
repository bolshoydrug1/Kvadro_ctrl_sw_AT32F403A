/* add user code begin Header */
/**
  **************************************************************************
  * @file     main.c
  * @brief    main program
  **************************************************************************
  *
  * Copyright (c) 2025, Artery Technology, All rights reserved.
  * SPDX-License-Identifier: BSD-3-Clause
  *
  **************************************************************************
  */
/* add user code end Header */

/* Includes ------------------------------------------------------------------*/
#include "at32f403a_407_wk_config.h"
#include "wk_adc.h"
#include "wk_debug.h"
#include "wk_i2c.h"
#include "wk_spi.h"
#include "wk_tmr.h"
#include "wk_usart.h"
#include "wk_gpio.h"
#include "wk_system.h"
#include "freertos_app.h"

/* private includes ----------------------------------------------------------*/
/* add user code begin private includes */

/* add user code end private includes */

/* private typedef -----------------------------------------------------------*/
/* add user code begin private typedef */

/* add user code end private typedef */

/* private define ------------------------------------------------------------*/
/* add user code begin private define */

/* add user code end private define */

/* private macro -------------------------------------------------------------*/
/* add user code begin private macro */

/* add user code end private macro */

/* private variables ---------------------------------------------------------*/
/* add user code begin private variables */

/* add user code end private variables */

/* private function prototypes --------------------------------------------*/
/* add user code begin function prototypes */

/* add user code end function prototypes */

/* private user code ---------------------------------------------------------*/
/* add user code begin 0 */

/* add user code end 0 */

/**
  * @brief main function.
  * @param  none
  * @retval none
  */
int main(void)
{
  /* add user code begin 1 */

  /* add user code end 1 */

  /* system clock config. */
  wk_system_clock_config();

  /* config periph clock. */
  wk_periph_clock_config();

  /* init debug function. */
  wk_debug_config();

  /* nvic config. */
  wk_nvic_config();

  /* timebase config for
     void wk_delay_us(uint32_t delay);
     void wk_delay_ms(uint32_t delay); */
  wk_timebase_init();

  /* init gpio function. */
  wk_gpio_config();

  /* init adc1 function. */
  wk_adc1_init();

  /* init usart1 function. */
  wk_usart1_init();

  /* init usart2 function. */
  wk_usart2_init();

  /* init usart3 function. */
  wk_usart3_init();

  /* init spi1 function. */
  wk_spi1_init();

  /* init spi2 function. */
  wk_spi2_init();

  /* init spi3 function. */
  wk_spi3_init();

  /* init i2c1 function. */
  wk_i2c1_init();

  /* init i2c3 function. */
  wk_i2c3_init();

  /* init tmr1 function. */
  wk_tmr1_init();

  /* init tmr2 function. */
  wk_tmr2_init();

  /* add user code begin 2 */

  /* add user code end 2 */

  /* init freertos function. */
  wk_freertos_init();

  while(1)
  {
    /* add user code begin 3 */

    /* add user code end 3 */
  }
}

  /* add user code begin 4 */

  /* add user code end 4 */
