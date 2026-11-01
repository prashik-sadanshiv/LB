

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char arr[20] = "Ganesh Pune";       // change is adding space (Space is non printable character......)

    printf("%s\n", arr);

    printf("Size of arr is %d\n", sizeof(arr));
    
    return EXIT_SUCCESS;
}