

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

int SumDigits(int iNo)
{
    {
        int iDigit = 0;
        int iSum = 0;
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        return iSum;
    }
}

float AverageDigits(int iTotal, int iFrequency)
{
    float fAns = 0.0f;
    
    fAns = (float)iTotal / (float)iFrequency;

    return fAns;
}
int main()
{

    int iValue = 0, iSum = 0, iCnt = 0;
    float fAvg = 0.0f;

    printf("Enter Value: ");
    scanf("%d", &iValue); 

    iSum = SumDigits(iValue);
    iCnt = CountDigits(iValue);
    
    fAvg = AverageDigits(iSum, iCnt);

    printf("Number of digits: %d\n", iCnt);
    printf("Summetion of digits: %d\n", iSum);
    printf("Average of Digits is: %.2f\n",fAvg);

    return EXIT_SUCCESS;
}