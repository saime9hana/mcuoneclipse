/*
 * main.c
 *
 *  Created on: 12.03.2019
 *      Author: Erich Styger Local
 */
#include "fsl_debug_console.h"
#include "board.h"
#include "math.h"
#include "fsl_lpi2c.h"
#include "fsl_tpm.h"
#include "fsl_fxos.h"

#include "fsl_common.h"
#include "pin_mux.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
#include "fsl_intmux.h"

static int i;

int main(void) {
    /* Board pin, clock, debug console init */
    CLOCK_EnableClock(kCLOCK_Rgpio1);
    BOARD_InitPins();
    BOARD_BootClockRUN();
    //BOARD_I2C_ReleaseBus();
    BOARD_I2C_ConfigurePins();
    BOARD_InitDebugConsole();

	for(;;) {
		i++;
		__asm("nop");
	}
	return 0;
}
