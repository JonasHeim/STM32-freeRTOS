/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include "main.h"

/*
 * Set up the hardware ready to run this demo.
 */
static void prvSetupHardware( void );

RCC_ClocksTypeDef RCC_Clocks;

/*
 * Tasks
 */
portTASK_FUNCTION_PROTO(vApplicationTaskTest, pvParameters);
portTASK_FUNCTION_PROTO(vApplicationTaskTest2, pvParameters);


// ----- main() ---------------------------------------------------------------

// Sample pragmas to cope with warnings. Please note the related line at
// the end of this function, used to pop the compiler diagnostics status.
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#pragma GCC diagnostic ignored "-Wreturn-type"

int
main(int argc, char* argv[])
{
  // At this stage the system clock should have already been configured
  // at high speed.

  // Infinite loop
  while (1)
    {
	  /* Configure the hardware ready to run the test. */
	  prvSetupHardware();

	  xTaskCreate(vApplicationTaskTest, "TestTask", configMINIMAL_STACK_SIZE, (void * ) NULL, tskIDLE_PRIORITY+1UL, NULL);
	  xTaskCreate(vApplicationTaskTest2, "TestTask2", configMINIMAL_STACK_SIZE, (void * ) NULL, tskIDLE_PRIORITY+1UL, NULL);

	  /* Start the scheduler. */
	  vTaskStartScheduler();

	  /* Should never be reached */
	  for( ;; );    }
}

#pragma GCC diagnostic pop

static void prvSetupHardware( void ){

	/* Setup STM32 system (clock, PLL and Flash configuration) */
	SystemInit();

	/* SysTick end of count event each 1ms */
	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency / configTICK_RATE_HZ);

	/* Ensure all priority bits are assigned as preemption priority bits. */
	NVIC_PriorityGroupConfig( NVIC_PriorityGroup_4 );

	/* Initialise peripherals LEDs, Button,... */
	vParTestInitialise();

}

/*
 * Callbacks/Hooks
 */

void vApplicationTickHook( void ){

	//trace_printf("Entered vApplicationTickHook\n");

}

void vApplicationIdleHook( void ){

	//trace_printf("Entered vApplicationIdleHook\n");

}

void vApplicationMallocFailedHook( void ){

	trace_printf("Entered vApplicationMallocFailedHook\n");
	for(;;);
}

void vApplicationStackOverflowHook( TaskHandle_t pxTask, char *pcTaskName){

	( void )pxTask;
	( void )pcTaskName;

	trace_printf("Entered vApplicationStackOverflowHook\n");


	for(;;);
}

/*
 * Tasks
 */

void vApplicationTaskTest( void *pvParameters){

	const portTickType xDelayTime = 300/portTICK_RATE_MS;
	( void* ) pvParameters;

	while(1){
		trace_printf("In Task vApplicationTaskTest\n");
		vTaskDelay(xDelayTime);
		vParTestToggleLED(LED1);
	}
}

void vApplicationTaskTest2( void *pvParameters){

	const portTickType xDelayTime = 600/portTICK_RATE_MS;
	( void* ) pvParameters;

	while(1){
		trace_printf("In Task vApplicationTaskTest2\n");
		vTaskDelay(xDelayTime);
		vParTestToggleLED(LED2);
	}
}



// ----------------------------------------------------------------------------
