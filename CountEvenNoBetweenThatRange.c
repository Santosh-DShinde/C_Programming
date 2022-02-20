/*
Write a program which accept range from user and display all even numbers in between that range.
Input : 23 35
Output : 24 26 28 30 32 34
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2
Input : 90 18
Output : Invalid range
*/

#include<stdio.h>
void RangeDisplayEven(int iStart , int iEnd)
{
	int i=0,iEven=0;
	if(iStart>iEnd)           //filter
	{
		printf("You Entered Invalid Range ");
	}
	for(i=iStart;i<=iEnd;i++)
	{		
		//printf(" %d ",i);
		  if ((i % 2)==0 )
		{
			printf(" %d ",i);
		}	
	}
}
int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter starting point");
scanf("%d",&iValue1);
printf("Enter ending point");
scanf("%d",&iValue2);
RangeDisplayEven(iValue1, iValue2);
return 0;
}