/* add user code begin Header */
/**
  **************************************************************************
  * @file     wk_debug.c
  * @brief    work bench config program
  **************************************************************************
  *
  * Copyright (c) 2025, Artery Technology, All rights reserved.
  * SPDX-License-Identifier: BSD-3-Clause
  *
  **************************************************************************
  */
/* add user code end Header */

/* Includes ------------------------------------------------------------------*/
#include "wk_debug.h"

/* add user code begin 0 */

/* add user code end 0 */

/**
  * @brief  init debug function.
  * @param  none
  * @retval none
  */
void wk_debug_config(void)
{
  /* jtag-dp disabled and sw-dp enabled */
  gpio_pin_remap_config(SWJTAG_GMUX_010, TRUE);
}

/* add user code begin 1 */

/* add user code end 1 */
