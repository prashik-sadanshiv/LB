

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
    ch = 'A';
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\n", ch);
        ch++;
        // printf("%c\t",(iCnt+((int)'A')-1));
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