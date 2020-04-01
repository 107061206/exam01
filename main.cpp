#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);
PwmOut PWM1(D6);
AnalogIn Ain(A0);
AnalogOut Aout(DAC0_OUT);
int i;
int sample = 128;
float ADCdata[128];
 
       


int main()

{

      uLCD.printf("\n107061206\n"); //Default Green on black text
      wait(1);
      uLCD.rectangle(50, 50, 100, 100, 0x00FF00);

      i=0;
      while(1)
      {
      
       
      //if( i < 1 )
      //
            PWM1.period(i);
            wait(0.1);
            i++;
      //}
      if(i==1)
      {
          PWM1.period(i);
            wait(0.1);
            i--; 
      }
      
       for (i = 0; i < sample; i++)
      {

      ADCdata[i] = PWM1;

      wait(0.1);
      
      
      }


      

}
