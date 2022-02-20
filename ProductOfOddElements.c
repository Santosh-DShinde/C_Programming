/* Accept N numbers from user and return product of all odd elements. product means multiplication of numbers
Input : N : 6
Elements :15 66 3 70 10 88 
Output : 45
Input : N : 6 
Elements :44 66 72 70 10 88 
Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int i=0,prod=1;
    for(i=0;i<iLength;i++)
    {
        if(Arr[i] % 2 !=0)
        {
            prod*=Arr[i];
        }

    }
    if(prod == 1)
    {
        return 0;
    }
    return prod;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0;
int *p = NULL;
printf("Enter number of elements\n");
scanf("%d",&iSize);
p = (int *)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory");
return -1;
}
printf("Enter %d elements ",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element : %d\n",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = Product(p, iSize);
printf("Product is %d",iRet);
free(p);
return 0;
}