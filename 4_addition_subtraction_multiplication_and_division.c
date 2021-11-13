#include <stdio.h>

int main ()
{
    // 4. Write a C program to perform addition, subtraction, multiplication and division.

    int x = 5;
    int y = 2;

    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    float division = (float)x / (float)y;

    printf("Addition of x and y is %d \n", addition);
    printf("Subtraction of x and y is %d \n", subtraction);
    printf("Multiplication of x and y is %d \n", multiplication);
    printf("Division of x and y is %.2f \n", division);

    return 0;
}
