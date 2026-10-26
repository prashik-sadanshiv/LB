// prime number logical code from 107 to 114 and last version of program 115 is best version of it.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 2, bFlag = true; iCnt <= iNo/2; iCnt++) // better lop condition that program113.c for loop
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
        }
    }
    return bFlag;
}

// void main(void)  this is very wrong concept write :- void main(void)
int main(void)
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);
    if(bRet)                            // Syntax :- if(bRet == true) and if(bRet) is nothing but the same
    {
        printf("%d is the prime Number\n", iValue);
    }
    else
    {
        printf("%d is Not the prime Number\n", iValue);

    }
    return EXIT_SUCCESS;
}