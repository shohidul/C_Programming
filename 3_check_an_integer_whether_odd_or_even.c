#include <stdio.h>

int main ()
{
    // 3. Write a C program to check an integer whether odd or even.

    int number; // get from user
    int remainder;

    printf("Type an integer number:\n");
    scanf("%d", &number);

    remainder = number % 2;

    if (remainder == 0)
        printf("%d is an even integer. \n", number);
    else
        printf("%d is an odd integer. \n", number);

    return 0;
}
