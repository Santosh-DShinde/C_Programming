/*
1. Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)
 */

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i=0,oSum=0,Sum=0,Diff=0;

    for(i=0;i<iLength;i++)
    {
       if(Arr[i] % 2 ==0 ) 
       {
        Sum=Sum+Arr[i];
       }
       else
       {
           oSum=oSum+Arr[i];   
       }
    }
    Diff = Sum - oSum ;
    // printf("Summation of Even numbers is : %d\n",Sum);
    // printf("Summation of odd numbers is : %d\n",oSum);
    return Diff;
}

int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;

printf("Enter The Element : ");
scanf("%d",&iSize);

p=(int *)malloc(sizeof(int) * iSize);  //dynamic memory allocation

printf("Enter %d Numbers : \n",iSize);

for(iCnt=0;iCnt<iSize;iCnt++)
{
    scanf("%d",&p[iCnt]);
}
iRet = Difference(p, iSize);

printf("Difference of Even and Odd numbers is : %d",iRet);
free(p);
return 0;
}
