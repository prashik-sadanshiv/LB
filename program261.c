
#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0, iCountSpecial = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else 
        {
            iCountDigit++;
        }
        
        str++;
    }

    printf("Frequency of Small letters: %d\n", iCountSmall);
    printf("Frequency of Capital letters: %d\n", iCountCapital);
    printf("Frequency of Digits: %d\n", iCountDigit);
}

int main()
{   
    char Arr[100] = {'\0'};

    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}