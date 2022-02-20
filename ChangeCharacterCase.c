/*
4. Accept one character from user and convert case of that character.
Input : a Output : A
Input : D Output : d
*/
#include<stdio.h>
#include<ctype.h>

void DisplayConvert ( char CValue)
{
	if(isalpha( CValue))
	{
		CValue= toupper(CValue);
     	printf(" %c" , CValue);
	}
	else if(isalpha(CValue))
	{
		CValue= tolower(CValue);
 	printf(" %c" , CValue);
	}
	else 
	{
		printf("You Entered Wrong input \n");
	}
}

int main()
{
char cValue;
printf("Enter Any character\n");
scanf("%c",&cValue);
 DisplayConvert(cValue);
return 0;
}
