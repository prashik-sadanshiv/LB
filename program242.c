

#include<stdio.h>
#include<stdlib.h>

void Display(char *str)         // it's proves that we are passing address of Arr
                        
{
    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter String: \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);           // Display("Ganesh") Call by value it not correct / Display(100) is call by address which is correct

    return EXIT_SUCCESS;
}