/*
    iRow = 4
    iCol = 4
    
    $   *   *   *
    *   $   *   *
    *   *   $   *
    *   *   *   $

*/


#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)            
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1; i <= iRow; i++)      // O(N) Order of N
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n\n");
    }
}
// time complexiti is O(N) 
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter Number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}