

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100] = "Ganesh Pune";       // change is adding space (Space is non printable character......)

    printf("Enter String: \n");
    scanf("%s", Arr);

    printf("Enterd string is : %s\n", Arr);
    
    return EXIT_SUCCESS;
}