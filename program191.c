

/*
    INPUT: 4
    OUTPUT: -4 -3 -2 -1
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)   // O(N) order of 2N
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
        // TIME COMPLEXITY  = O(2N) (Linear Time Complexity)
int main()
{   

    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}