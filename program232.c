

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr[20] = "Ganesh Pune";       // change is adding space (Space is non printable character......)

    printf("%s\n", arr);

    printf("Size of arr is %d\n", sizeof(arr));

    printf("Length of String is: %d\n", strlen(arr));   // in the lenth counting '\0' is not get counted but the size of it 
                                                        // will be there in memory


    return EXIT_SUCCESS;
}