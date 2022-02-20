/*Accept N numbers from user and display summation of digits of each number.
Input : N : 6
Elements :8225 665 3 76 953 858
 8+2+2+5=17 
Output : 17 17 3 13 17 21
*/

#include<stdlib.h>
#include<stdio.h>

void DigitsSum(int Arr[], int iLength)
{
    int i=0, iDigit=0, iSum=0, iNo=0;

    for(i=0;i<iLength;i++)
    {
        iNo = Arr[i];

         while (iNo !=0)
         {
             iDigit= iNo % 10 ;
             iSum=iSum+iDigit; 
             iNo/=10;
         }
          printf("%d\t",iSum);
        iSum=0;
    }    
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements \n ");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
printf("Enter %d elements \n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element : %d \n",iCnt+1);
scanf("%d",&p[iCnt]);
}
DigitsSum(p, iSize);
free(p);
return 0;
}
