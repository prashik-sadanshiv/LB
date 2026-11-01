#include<stdio.h>
#include<stdlib.h>

int main()
{

    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'a'; iCnt <= 5; iCnt++, ch++)
    {
        printf("%d\t%c\t",iCnt,ch);
    }

    return EXIT_SUCCESS;
}