

#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    printf("Display even or odd digits:\n");
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("Even: %d\n", iDigit);
        }
        else
        {
            printf("Odd: %d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}



// void DisplayOddDigits(int iNo)
// {
//     int iDigit = 0;

//     if(iNo < 0)
//     {
//         iNo = -iNo;
//     }
//     printf("Display odd Digits: \n");
    
//     while(iNo != 0)
//     {
//         iDigit = iNo % 10;
//         if((iDigit % 2) != 0)
//         {
//             printf("%d\n", iDigit);
//         }
//         iNo = iNo / 10;
//     }
// }

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenDigits(iValue);
    // DisplayOddDigits(iValue);

    return EXIT_SUCCESS;
}