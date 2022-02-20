// Write a program which checks whether 15th bit is On or OFF.

  #include<stdbool.h>
  #include<stdio.h>
  #define TRUE 1
  #define FALSE 0

    typedef int BOOL;
    typedef unsigned int UINT;

  BOOL ChkBit(UINT iNo)
     { 
         UINT iMask =0,iResult=0;

        iMask=0x00000008;

        iResult=iNo&iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
     }
 int main()
 {
     UINT iValue=0;
    bool bRet=FALSE;

     printf("Enter The Number : ");
     scanf("%d",&iValue);
     
    bRet=ChkBit(iValue);
     
     if(bRet ==true)
        {
           printf("Bit Is ONN ");
        }
        else
        {
            printf("Bit Is OFF ");
        }

    return 0;
 }