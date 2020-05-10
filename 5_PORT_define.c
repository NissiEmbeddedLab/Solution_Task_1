/* 	It is an examole to declare the PORT using #define directive
		MSDelay() function to create 10mSec delay
		Author		:	L.Boaz
		Mail id		:	laxsam89@gmail.com
		Phone no	:	+91 95972 91816	*/

#include<reg51.h>
#define Read_Data P1										//Assign the variable Read_Data for PORT1
#define Write_Data P2										//Assign the variable Write_Data for PORT2
void MSDelay(unsigned int itime);
unsigned int x;
void main(void)
{
for(x=0;x<5;x++)												
{
  Read_Data = 0xFF;											//Pass 0xff
	MSDelay(1);														//Elapse time for 10MilliSec by 10*1msec
	Write_Data = 0xAA;										//Pass 0xAA
	MSDelay(1);														//Elapse time for 10MilliSec by 10*1msec
}
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}