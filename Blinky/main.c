#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"
#include "main.h"


int main(void) 
{
	LEDS_CONFIGURE(LEDS_MASK);
  // Configure LED-pins as outputs.
	LEDS_OFF(LEDS_MASK);
	while (true){
		LEDS_INVERT(BSP_LED_0_MASK);
		nrf_delay_ms(500);
	}
}
