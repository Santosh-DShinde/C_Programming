/*
Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit=0,temp=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		//printf("%d",iDigit);
		iNo=iNo/10;		

if(iDigit==0)
{
	temp=iDigit;
}	
if(temp==0)
{
	return TRUE;
}
else
{
	return FALSE ;
}
}
	}	
int main()
{
int iValue = 0;
BOOL bRet = FALSE;

printf("Enter number : ");
scanf("%d",&iValue);
bRet = ChkZero(iValue);
if(bRet == TRUE)
{
printf("It Contains Zero");
}
else
{
printf("There is no Zero");
}
return 0;
}          