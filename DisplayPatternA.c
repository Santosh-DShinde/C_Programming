/* Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output : 
* * *
* * *
* * *
* * *

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int iCnt = 0 ,jCnt =0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{ 
			if(iCnt % 2==0)
			{
				printf("# " );
			}
			else 
			{
				printf("* ");
			}
		
	}printf("\n")	; 
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	printf("Enter number of rows:");
	scanf("%d",&iValue1);
	printf("Enter number of column:");
	scanf("%d",&iValue2);
	Pattern(iValue1, iValue2);
	return 0;
}