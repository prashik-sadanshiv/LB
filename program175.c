

#include<stdio.h>
#include<stdlib.h>

int ReverseDigits(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;                  // this code of logic for take last digit of number
        iRev = (iRev * 10) + iDigit;        // main bussiness logic to reverse the digit's
        iNo = iNo / 10;                     // this line is for remove the last digit of number
    }

    return iRev;
}


int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Value: ");
    scanf("%d", &iValue); 

    iRet = ReverseDigits(iValue);

    printf("Reverse value is: %d\n", iRet);

    return EXIT_SUCCESS;
}