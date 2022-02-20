/*
Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter)
Input : 5
Output : 0.464515
Input : 7
Output : 0.650321
*/
#include<stdio.h>
#define Smeter 0.0929

double SquareMeter(int iValue)
{
	double SquareFeet=0.0f;
	
	SquareFeet= iValue*Smeter ;
	return SquareFeet ;
}
int main()
{
int iValue = 0;
double dRet = 0.0;
printf("Enter area in square feet");
scanf("%d",& iValue);
dRet = SquareMeter(iValue);
printf("square meter of given Input is : %lf",dRet);
return 0;
}