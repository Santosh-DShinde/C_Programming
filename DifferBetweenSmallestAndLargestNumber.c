/*Accept N numbers from user and return the difference between largest and smallest number.
Input : N : 6
Elements :85 66 3 66 93 88
Output : 90 (93 -3)
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Difference(int Arr[], int iLength)
{
    int i=0,Diff=0,smallest=Arr[0],Large=0;

    for(i=0;i<iLength;i++)
    {
         if(Arr[i] > Large)
        {
            Large=Arr[i];
        }
       else if(Arr[i] < smallest)
        {
             smallest=Arr[i];
        }
    }
 Diff = Large-smallest;
 return Diff;
}
int main()
{
int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
int *p = NULL;
printf("Enter number of elements");
scanf("%d",&iSize);

p = (int*)malloc(iSize * sizeof(int));
if(p == NULL)
{
printf("Unable to allocate memory \n");
return -1;
}
printf("Enter %d elements \n",iSize);
for(iCnt = 0;iCnt<iSize; iCnt++)
{
printf("Enter element : %d\n ",iCnt+1);
scanf("%d",&p[iCnt]);
}
iRet = Difference(p, iSize);
printf("Difference is %d",iRet);
free(p);
return 0;
}