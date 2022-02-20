/* Write a program which accept string from user and count number of capital characters.
Input : “Language Is Just Way Of Writting A Code, But Logic Is The Most Important”
Output : 14
*/

#include<stdio.h>

int CountCapital(char *str)
{
int iCnt = 0;

    if ( str == NULL)
    return 0;

while(*str != '\0')
{
  if((*str >='A')&&(*str <='Z'))
  {
      iCnt++;
  }
   *str++;
}

return iCnt;
}

int main()
{
char arr[40];
int iRet = 0;

printf("Enter string");
scanf("%[^'\n']s",arr);

iRet = CountCapital(arr);

printf("Number Of Capital Character Are : %d",iRet);
return 0;
}