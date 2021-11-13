#include <stdio.h>

int main ()
{
    // 2. Write a C program to get two numbers from keyboard and add them.

    int number1; // get from user
    int number2; // get from user

    printf("Type 1st integer number: \n");
    scanf("%d", &number1);

    printf("Type 2nd integer number: \n");
    scanf("%d", &number2);

    printf("The sum is %d", number1 + number2);

    return 0;
}
