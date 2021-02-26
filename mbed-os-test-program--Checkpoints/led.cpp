#include "mbed.h"

void Led1(DigitalOut &ledpin)
{
   for (int i = 0; i < 4; ++i)
   {                     //blink for 4 times
      ledpin = !ledpin; // toggle led1
      ThisThread::sleep_for(100ms);
   }
}


void Led3(DigitalOut &ledpin)
{
   for (int i = 0; i < 6; ++i)
   {                     //blink for 6 times
      ledpin = !ledpin; // toggle led3
      ThisThread::sleep_for(100ms);
   }
}