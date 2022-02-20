//Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
  int iNo = 0;
 //      initialisation	condition   increment
	for (  iNo=5;        iNo>=1;     iNo-- )
		{
			printf(" %d",iNo);
			
		}
}
   int main()
{
	Display();
	
return 0;
}