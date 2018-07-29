/*
 * user_main.c
 *
 *  Created on: 29Jul.,2018
 *      Author: gruss
 */

#include "stm32f4xx_hal.h"

#include "user_main.h"
#include "blink_led.h"
#include "visEffect.h"

void user_main(void)
{
	uint32_t start_tick;

	blink_led(125, 125, 5);

	start_tick = HAL_GetTick();
	while (HAL_GetTick() < (start_tick + 1000));

	visHandle();
}

