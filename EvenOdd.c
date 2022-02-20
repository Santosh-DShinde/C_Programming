//  Accept number from user and check whether number is even or odd.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int iNo)
{
	if ((iNo % 2 )==0)
		//return TRUE ;	
printf("the number is even:",iNo) ;
	else 
		//return FALSE ;
		 printf("the number is odd",iNo) ;
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue );
	
return 0;			// Display result
}