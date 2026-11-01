

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int iCount = 0;

    char Arr[20] = "Jay Ganesh";       // change is adding space (Space is non printable character......)

    char *ptr = NULL;       // initialize the pointer which is currently pointing to the NULL.

    ptr = &(Arr[0]);        // assanning the ptr address of first elment of the Arr.

    while(*ptr != '\0')         // logic to read all character from the string *ptr is pointer 
    {

        iCount++;
        ptr++;
        // Logic
        // if(*ptr != ' ')
        // {
        //     iCount++;
        // }
        // ptr++;              // becouse the pointer is pointing to the string (nothing but the array of character) 
                            // so increment will size of character which is 1 byte.
    }

    printf("Total Number of character's in string: %d\n", iCount);

    return EXIT_SUCCESS;
}