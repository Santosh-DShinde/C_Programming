/*
4. Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6

Elements :85 66 3 15 93 88

Output : 15
*/

#include<stdio.h>
#include<stdlib.h>

int Display(int Brr[],int no)
{
    int j=0;
    printf("Number which are even and divisible by 3 And 5 is :\n");
    for(j=0;j<no;j++)
    {
        
         if (((Brr[j] % 3)==0) && ((Brr[j] % 5) ==0) )
         {
            printf("%d\t",Brr[j]);
         }
    }
}

int main ()
{
    int i=0,ret=0,value=0;
    int *Arr=NULL;

    printf("How many Number do you want to print : ");
    scanf("%d",&value);

 Arr=(int*)malloc(sizeof(int) * value);

printf("enter %d numbers :",value);
    for(i=0;i<value;i++)
    {
        scanf("%d",&Arr[i]);
    }

    ret = Display(Arr,value);

free (Arr);
    return 0;
}
