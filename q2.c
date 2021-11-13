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

    int arr [100];
    populateArray(size, i, arr);

    i = 0; // reinitialize
    int result = sumOfPositiveNum(size, i, arr, sum);
    printf("Sum of all value is %d ", result);

    return 0;
}

void populateArray(int size, int i, int arr[])
{
    scanf("%d", &arr[i]);
    i++;
    if(i<size)
    {
        populateArray(size, i, arr);
    }
}

int sumOfPositiveNum(int size, int i, int arr[], int sum)
{
    if(arr[i] > 0)
    {
        sum += arr[i];
    }
    i++;
    if(i<size)
    {
        sumOfPositiveNum(size, i, arr, sum);
    }
    else{
        return sum;
    }
}
