

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2) + 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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