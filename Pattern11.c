/*
5. Accept number of rows and number of columns from user and display below
pattern.

Input : iRow = 4 iCol = 4
Output :
1 2 3 4
  2 3 4
    3 4
      4
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int counter=0;
         for (int iCnt = 1; iCnt <= iRow; iCnt++)
         {
             for (int jCnt= 1; jCnt <= iCol; jCnt++)
                 {
                    if (jCnt>=iCnt)
                     {
                      printf("%d\t",jCnt);     
                     } 
                     else 
                     {
                     printf("\t");   
                     }
                 }
                 printf("\n");
        }
}

int main()
 {
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows and columns :\n");
scanf("%d %d",&iValue1, &iValue2);
Pattern(iValue1, iValue2);
return 0;
}