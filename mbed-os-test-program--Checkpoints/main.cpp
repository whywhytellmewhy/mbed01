#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED3(LED3);

void Led1(DigitalOut &ledpin);
void Led3(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED3 = 1;
   while (true)
   {
      Led1(myLED);
      Led3(myLED3);
   }
}