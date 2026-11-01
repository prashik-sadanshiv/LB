

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 0, ch = 'a'; iCnt < 4; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }

    return EXIT_SUCCESS;
}