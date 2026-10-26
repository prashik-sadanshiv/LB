// Check palindrom number: examples 8998, 14341

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrom(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    bool flag = false;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    printf("reverse number: %d\n",iRev);

    if(iNo == iRev)     // ISSUE
    {   
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int iValue = 0;
    bool Flag = false;

    printf("Enter Value: ");
    scanf("%d", &iValue); 

    Flag = CheckPalindrom(iValue);

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