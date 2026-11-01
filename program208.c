

#include<stdio.h>
#include<stdlib.h>

void Pattern()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    Pattern();

    return EXIT_SUCCESS;
}