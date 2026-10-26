

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

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCnt = CountDigits(iNo);
   
    
    fAvg = (float)iSum / (float)iCnt;   // need to typecasting for get proper flouting point output.
    return fAvg;
    // return (iSum / iCnt);   // need ot Typecasting
}


int main()
{

    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Value: ");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);
    
    printf("Average of Digits is: %.2f\n",fRet);

    return EXIT_SUCCESS;
}