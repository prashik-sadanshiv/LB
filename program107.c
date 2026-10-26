// prime number logical code from 107 to 114 and last version of program 115 is best version of it.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == 1)
    {
        printf("%d is the prime Number\n", iNo);
    }
    else
    {
        printf("%d is not the prime number\n", iNo);
    }
}

// void main(void)  this is very wrong concept write void  main(void)
int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}