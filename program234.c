

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100] = "Ganesh Pune";       // change is adding space (Space is non printable character......)

    printf("Enter String: \n");
    scanf("%[^'\n']s", Arr);            // ^ Indicate "NOT" means "Jo paryant \n yet nahi to peryant accept the string"

    printf("Enterd string is : %s\n", Arr);
    
    return EXIT_SUCCESS;
}