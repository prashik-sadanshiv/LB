

#include<stdio.h>
#include<stdlib.h>

int strlenX(char *str)       // defining * is important otherwise need to use [] infront of str
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[100] = {'\0'};     // now this array is cleaned, do not contain garbage in it due to '\0'

    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);
    printf("String length is: %d\n", iRet);
    
    return EXIT_SUCCESS;
}