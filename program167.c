

#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount += 1; // iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);
    printf("Count of Digit's is: %d\n ",iRet);

    return EXIT_SUCCESS;
}