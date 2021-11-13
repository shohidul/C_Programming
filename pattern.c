#include <stdio.h>

int main()
{

   /* printf("%d\n", 1);
    printf("%d %d\n", 1, 2);
    printf("%d %d %d\n", 1, 2, 3);
    printf("%d %d %d %d\n", 1, 2, 3, 4);
    printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);*/
// Question 4 a)
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    /*int arr [3] = {5, 1, 1};
    int count = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i] == arr[j])
            {
                //printf("found %d \n", arr[i]);
                count++;
                break;
            }
        }
        //printf("\n");
    }
    printf("duplicate %d ", count);*/
    return 0;
}

