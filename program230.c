

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[100];

    arr[0] = 'G';
    arr[1] = 'a';
    arr[2] = 'n';
    arr[3] = 'e';
    arr[4] = 's';
    arr[5] = 'h';
    arr[6] = '\0';

    printf("%s\n", arr);

    printf("Size of arr is %d\n", sizeof(arr));
    
    return EXIT_SUCCESS;
}