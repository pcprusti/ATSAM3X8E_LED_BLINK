/*
 * ATSAM3X8E_LED_BLINK.c
 *
 * Created: 07-Sep-25 8:14:36 PM
 * Author : P C Prusti
 */ 

#define F_CPU 84000000UL // 84 MHz
#include "sam.h"

#define LED_INIT() PIOB->PIO_OER |= PIO_PB27
#define LEDON() (PIOB->PIO_SODR |= PIO_PB27)
#define LEDOFF() (PIOB->PIO_CODR |= PIO_PB27)

void delay_ms(uint32_t ms)
{
	// Each iteration takes roughly 9 CPU cycles
	// So we calculate loop count as: (F_CPU / 9000) * ms
	volatile uint32_t count = (F_CPU / 9000)*ms;
	
	while (count--)
		{
			__asm__ __volatile__("nop");
		}
}

int main(void)
{
    /* Initialize the SAM system */
    SystemInit();

    LED_INIT();
    /* Replace with your application code */
    while (1)
    {
	    LEDON();
	    delay_ms(100);
	    
	    LEDOFF();
	    delay_ms(100);
    }
}
