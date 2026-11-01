

#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iCnt = 0;

    for(iCnt = (int)'A'; iCnt <= (int)'Z'; iCnt++)
    {
        printf("%d\t%o\t%x\t%c\n",iCnt,iCnt,iCnt,iCnt);
    }

    return EXIT_SUCCESS;
}