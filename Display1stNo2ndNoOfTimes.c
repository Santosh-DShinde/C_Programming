/*Accept two numbers from user and display first number in second number of times.

Input : 12 5
Output : 12 12 12 12 12

Input : -2 3
Output : -2 -2 -2

Input : 21 -3 
Output : 21 21 21
*/

#include<stdio.h>
void Display( int iNo, int iFrequency)
{
	int i = 0;
	    // if(iNo < 0)			//input updater
		//  {
		// 		iNo = -iNo
		//  }
	for(i=1 ; i<=iFrequency; i++)
	{
		printf(" %d ",iNo, iFrequency);
	}

}
int main()
{
	int iValue = 0;
	int iCount = 0;
	printf("Enter number : ");
	scanf("%d" ,&iValue);
	printf("Enter frequency : ");
	scanf("%d" ,&iCount);
	Display(iValue,iCount);
	
	return 0;
}