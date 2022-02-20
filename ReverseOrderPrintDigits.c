/* Write a program which accept number from user and display its digits in reverse order.
Input : 2395
Output : 5 9 3 2  

Input : -1018
Output : 8 1 0 1
*/
#include<stdio.h>

void DisplayDigit(int iNo)
{
	int iDigit = 0;
	if(iNo<0)  //updater
	{
		iNo = -iNo;
	}                    
	/*     DRY RUN :-
	Digit =iNo %10;   printf//digit = // 752%10 // 2
	iNo = iNo/10;           // iNo  = // 750/10 // 75
					  printf//digit = // 75%10 //5
				    	    //iNo   = // 75/10 //7
					  printf//digit = // 7%10  //7
	*/
	while(iNo !=0 )
	{
		iDigit = iNo % 10;
		printf("%d\n",iDigit);
		iNo= iNo / 10;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	DisplayDigit(iValue);
	return 0;
}