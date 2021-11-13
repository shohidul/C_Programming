#include <stdio.h>
/*
    Shohidul Islam Hridoy
    21202
*/
int main()
{
    // Answer for problem 1

    /*for(int count = 1; count <= 150; count++)
    {
        if(count%3 == 0 && count%5 == 0)
            continue;
        else if(count%3 == 0 || count%5 == 0)
            printf("%d ", count);
    }*/

    // Answer for problem 2

    int sum = 0;
    int n;
    printf("Input how many numbers: ");
    scanf("%d", &n);

    int arr [100]; // = {2,5,6,9,11}
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of all value is %d ", sum);
    return 0;
}
