/* Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string
*/

#include<stdio.h>
#include<string.h>
                  //arr      brr
void StrCpyX(char *src, char *dest)
{
    if(src == NULL)             //filter
    {
        printf("Please pass a valid input : \n");
    }
    
                   //printf("%s",src);

    while(*src != '\0')
    {
      *dest = *src;
      *src++;
      *dest++; 
    
    }
    printf("%c",*dest);
}

int main()
{
char arr[30]="Marvellous Multi OS";
char brr[30]; // Empty string

StrCpyX(arr,brr);

printf("%s",brr); 

return 0;
}