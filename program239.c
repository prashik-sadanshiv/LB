

#include<stdio.h>
#include<stdlib.h>

void Display(char str[])
{
    printf("%s\n", str);
}

int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);           // Display("Ganesh") Call by value it not correct / Display(100) is call by address which is correct

    return EXIT_SUCCESS;
}