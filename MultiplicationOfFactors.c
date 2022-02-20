 /*
 Write a program which accept number from user and display its multiplication of
factors.
input :- 10
output :-(1*2*5)
*/

#include <stdio.h>
 
int Multfact(int iNo)
{
	int iSum=1;
	int iCnt=0;
	
	
	 if (iNo<0)				//updater
	{
		iNo = -iNo ;
	}	 
	 for(iCnt=1;iCnt<iNo;iCnt++)
	 {
		 if((iNo % iCnt) ==0)
		 {
		  printf("  %d \n",iCnt);
	iSum=iSum * iCnt;
		 }
		}
		return iSum;
	// printf("addition is : %d\n",iSum);
}
int main()
{
	int iValue = 0,iRet=0;
	
	printf("Enter The The Number:  ");
	scanf("%d",&iValue);
	 
	 iRet= Multfact(iValue);
	 printf("the Multiplication of Factors Is: %d \n",iRet);
		return 0;	
}