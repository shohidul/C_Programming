#include <stdio.h>
/*
    Shohidul Islam Hridoy
    21202
*/
int main()
{
    // Answer for problem 2

    int i = 0;
    int sum = 0;

    int size;
    printf("Input how many numbers: ");
    scanf("%d", &size);

    int result = sumOfPositiveNum(size, i, sum);
    printf("Sum of all value is %d ", result);

    return 0;
}

int sumOfPositiveNum(int size, int i, int sum)
{
    int x;
    scanf("%d", &x);
    if(x > 0)
    {
        sum += x;
    }

    i++;
    if(i<size)
    {
        sumOfPositiveNum(size, i, sum);
    }
    else{
        return sum;
    }
}


