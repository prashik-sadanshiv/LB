

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[10] = {'G', 'a', 'n', 'e', 's', 'h', '\0'}; // Array size is mention

    printf("%s\n", arr);

    printf("Size of arr is %d\n", sizeof(arr));
    
    return EXIT_SUCCESS;
}