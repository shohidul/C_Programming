#include<stdio.h>
double average(int x[], int n);
main()
{
    /*int num[10] = {4,6,8,9,3,1,5,6,4,6};
    int resultOfSum = 0;
    int n;
    scanf("%d", &n);
    int i;
    scanf("%d", &i);

    for(int i=0; i<n; i += 1)
    {
        resultOfSum += num[i];
        //printf("%d ", num[i]);
    }

    printf("Sum %d ", resultOfSum);
    printf("Avg %.2f ", (float)resultOfSum/(float)n);

    /*int i=0;
    while(i<10)
    {
        printf("%d ", num[i]);
        i++;
    }*/

    int num[3] = {4,6,8};
    int n = 3;
    double avg = average(num, n);
    printf("Average is : %lf", avg);
}

double average(int x[], int n)
{
    double sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += x[i];
    }

    double avg = sum / n;

    return avg;
}
