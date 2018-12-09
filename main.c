#include <msp430.h>

int main(void)
{
char stansw;
  WDTCTL = WDTPW + WDTHOLD; 
  P1DIR &= ~0x0C;                // Stop watchdog timer
  P1DIR |= BIT0+BIT6;
  P1REN |= 0x0C;  //BIT3;
  P1OUT |= 0x0C;  //BIT3;                                // Set P1.0 to output direction

  for (;;)
  {
stansw = P1IN & BIT3;
if (stansw ==0){
P1OUT ^= BIT0;
}else{
P1OUT ^= BIT6;
}
    volatile unsigned int i;
    i = 1000000;                              // Delay
    do (i--);
    while (i != 0);
  }
}# projektstudia
# projektstudia
