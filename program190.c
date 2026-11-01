

/*
    INPUT: 4
    OUTPUT: -4 -3 -2 -1
*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    // for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    for(iCnt = -iNo; iCnt <= 0; iCnt++)     //O(N)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)      //O(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}


// TIME COMPLEXITY = O(N) + O(N) = O(2N) = O(N)  (Linear Time Complexity)
int main()
{   

    int iValue = 0;
    printf("Enter a number: ");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return EXIT_SUCCESS;
}