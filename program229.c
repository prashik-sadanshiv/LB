

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[100] = {'G', 'a', 'n', 'e', 's', 'h', '\0', 'P', 'u', 'n', 'e'};       // anything after '\0' is not going to use
                                                                                    // '\0' is state that end of string.

    printf("%s\n", arr);

    printf("Size of arr is %d\n", sizeof(arr));
    
    return EXIT_SUCCESS;
}