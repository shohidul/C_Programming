#include <stdio.h>

int main ()
{
    // 1. Write a C program to get an input from keyboard and print it.
    /*
     1. Write a C program to get an input from keyboard and print it.
     1. Write a C program to get an input from keyboard and print it.
     1. Write a C program to get an input from keyboard and print it.
     1. Write a C program to get an input from keyboard and print it.
     1. Write a C program to get an input from keyboard and print it.
    */
    int number, *p; // get from user
    number = 5;

    p = &number;
    //printf("Type an integer number: \n");
    //scanf("%d", &number);

    printf("The number is %d", number);
    printf("The p is %d", *p);
    //printf("The number is %d", number);

    return 0;
}
