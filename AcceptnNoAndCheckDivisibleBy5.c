/* Accept N numbers from user and display all such elements which are divisible by 5.
Input : N : 6
Elements :85 66 3 80 93 88
Output : 85 80
*/

#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[],int iNo)
{
    int j=0,store=0;
    printf("Output is :");
    for(j=0;j<iNo;j++)
    {
        if (( (Arr[j] % 5 )==0))
        {
            printf(" %d ", Arr[j]);
        }
     }
}   

int main()
{
    int *Brr=NULL;
    int i=0,iRet=0,iValue=0;

    printf("How many Elements Do You Want To Print : \n ");
    scanf("%d",&iValue);

    Brr=(int*)malloc(sizeof(int)*iValue);

    printf("Enter %d Numbers Do You Want :\n",iValue);

    for(i=0;i<iValue;i++)
    {
        printf("Enter Element  %d ->  ", i+1);
        scanf("%d",&Brr[i]); // scanf("%d",Brr[i]) 
    }

    iRet = Divisible(Brr,iValue);

    free(Brr);
    return 0;
}