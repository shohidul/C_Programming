#include <stdio.h>

void recursion(int i, int n); // recursion function prototype

// global variable
int sum = 0;
int count = 0;

int main()
{
    int i = 0, n;
    printf("Enter the number of elements:");
    scanf("%d", &n);

    recursion(i, n); // initial call
    printf("The sum of %d positive numbers are %d", count, sum);

    return 0;
}

void recursion(int i, int n) // recursion function is like a while loop
{
    if(i < n)
    {
        int x;
        printf("Enter the value for index %d : ",i);
        scanf("%d", &x);

        if(x>0)
        {
           sum = sum + x;
           count++;
        }

        i++;
        recursion(i, n); // re call till (i < n) is true
    }
}
