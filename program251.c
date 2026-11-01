// Count the number of white spaces

#include<stdio.h>
#include<stdlib.h>

int CountWhiteSpaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String :");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhiteSpaces(Arr);

    printf("frequency of White Spaces is: %d\n", iRet);
    return EXIT_SUCCESS;
}