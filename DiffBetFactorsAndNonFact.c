/*
5.Write a program which accept number from user and return difference between summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt=0,iCn=0, iSum=0,iDiff=0,iAdd=0;               
		
	for (iCnt=1;iCnt<=iNo/2;iCnt++)
	{
			if((iNo % iCnt)==0)
		{
			//	printf("%d\n",iCnt);
				iSum=iSum+iCnt;
		}	
	}		
		for (iCn=1;iCn<iNo ;iCn++)	
		   {
				if((iNo % iCn)!=0)
				 {
					//printf(" %d",iCn);
					iAdd=iAdd+iCn;
				 }
		   }	
		   iDiff=iSum-iAdd;	
	 return iDiff;
	}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = FactDiff(iValue);
 printf("output Is %d",iRet);
return 0;
}