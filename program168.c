



#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    float fAverage = 0.0f;


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCnt++;
        iNo = iNo / 10;
    }
    fAverage = iSum / iCnt;
    return fAverage;
}

int main()
{

    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Value: ");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);
    printf("Average of Digits is: %f\n",fRet);

    return EXIT_SUCCESS;
}