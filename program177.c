// Check palindrom number: examples 8998, 14341

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrom(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = 0;
    // bool flag = false;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    // printf("reverse number: %d\n",iRev);

    if(iRev == iTemp)     // ISSUE
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

    int iValue = 0;
    bool Flag = false;

    printf("Enter Value: ");
    scanf("%d", &iValue); 

    Flag = CheckPallindrom(iValue);

    // printf("Check true of flase: ",Flag);   

    if(Flag == true)
    {
        printf("It is a palindrom number: \n");
    }
    else
    {
        printf("It is not a palindrom number: \n");
        
    }

    return EXIT_SUCCESS;
}