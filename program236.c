

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[10] = "Ganesh";       // change is adding space (Space is non printable character......)

    char *ptr = NULL;

    ptr = &(Arr[0]);

    printf("%c\n", *ptr);
    ptr++;
    
    printf("%c\n", *ptr);
    ptr++;
    
    printf("%c\n", *ptr);
    ptr++;
    
    printf("%c\n", *ptr);
    ptr++;
    
    return EXIT_SUCCESS;
}