

#include<stdio.h>
#include<stdlib.h>

void Display(char *str)         // it's proves that we are passing address 
                                // to this function becouse pointer only take addresses.
{
    printf("%s\n", str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);           // Display("Ganesh") Call by value it not correct / Display(100) is call by address which is correct

    return EXIT_SUCCESS;
}