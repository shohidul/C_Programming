/**
 * C program to whether a number is prime number or not
 */

#include <stdio.h>

void checkPrime(int num);

int main()
{
    //int arr [5] = {2, 3, 17, 19, 50};

    //printf("Enter any number to check prime: ");
    //scanf("%d", &num);

    for(int i = 0; i<5; i++)
    {
        int num;
        printf("Enter any number to check prime: ");
        scanf("%d", &num);
        checkPrime(num);
    }


    return 0;
}

void checkPrime(int num)
{
    int i, isPrime;

    isPrime = 1;

    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1 && num > 1)
        printf("%d is prime number\n", num);
    else
        printf("%d is composite number\n", num);
}
