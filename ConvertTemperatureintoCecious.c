/*
vWrite a program which accept temperature in Fahrenheit and convert it into celsius.
 (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)
*/
#include<stdio.h>

double FhtoCs(float fTemp)
{
double celsius=0.0f;

  celsius  = ( fTemp - 32) /1.8;
return celsius ;   
}

int main()
{
float fValue = 0.0f;
double dRet = 0.0f;

printf("Enter temperature in Fahrenheit :");
scanf("%f",&fValue);

dRet = FhtoCs(fValue);
printf("temperature in degree celsius %lf", dRet);
return 0;
}