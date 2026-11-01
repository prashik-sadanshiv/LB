

/*
    INPUT: 4
    OUTPUT: A   B   C   D
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    // for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
    // {
    //     printf("%c\t", ch);
    //     // printf("%c\t",(iCnt+((int)'A')-1));
    // }
    ch = 'A';

    while(iCnt < iNo) 
    {
        iCnt++;
        printf("%c\t", ch);
        ch++;
    }

   
}
int main()
{   

    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}