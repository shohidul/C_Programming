#include <stdio.h>

int main ()
{
    // 6. Write a C program to check whether a given integer is positive.

    int number; // get from user

    printf("Input a number :");
    scanf("%d", &number);

    if (number >= 0)
        printf("%d is a positive number \n", number);
    else
        printf("%d is a negative number \n", number);

    return 0;
}
