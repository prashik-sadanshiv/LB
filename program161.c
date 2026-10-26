
// problems on degit

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    
    while(iNo != 0)
    {
        iDigit  = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}


    // int iNo2 = 1;

    // while(iNo != 0)
    // {
    //     iDigit = iNo % 10;
    //     // printf("%d", iDigit);
    //     iNo2 = (iNo2 * 10) + iDigit;
    //     printf("%d", iNo2);
    //     iNo = iNo / 10;
    // }
    // if(iNo2 == iNo)
    // {
    //     printf("%d is palindrom number. ",iNo);
    // }
    // else
    // {
    //     printf("%d is not the palindrom number",iNo);
    // }


