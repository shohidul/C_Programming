#include <stdio.h>

int main ()
{
    // 12. Write a C program to find the sum of odd and even numbers from 1 to N.

    int i, N, oddSum = 0, evenSum = 0;

    printf("Enter the value of n\n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
            //printf("even %d\n", i);
            evenSum = evenSum + i;
        else
            //printf("odd %d\n", i);
            oddSum = oddSum + i;
    }

    printf("Sum of all odd numbers  = %d\n", oddSum);
    printf("Sum of all even numbers = %d\n", evenSum);

    return 0;
}
