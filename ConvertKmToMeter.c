/*
Write a program which accept distance in kilometre and convert it into meter.
 (1kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000
*/
#include<stdio.h>
 #define Meter 1000
int KMtoMeter(int iNo)
{
	int KiloMeter=0;
	
	KiloMeter = iNo*Meter;
	return KiloMeter ;
}
int main()
{
int iValue = 0, iRet = 0;
printf("Enter distance :");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("kilometer is converted into meter : %d ",iRet);

return 0;
}