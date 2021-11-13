#include <stdio.h>

void recursion(int i, int n); // prototype

int sum = 0;

int main()
{


    int i=0;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    recursion(i, n);
    printf("Sum is: %d", sum);
    /*while(i<n)
    {
      printf("%d ", i);
      i++;
    }*/

    return 0;
}


void recursion(int i, int n)
{
    if(i<n)
    {
        int x;
        printf("Index %d: ", i);
        scanf("%d", &x);

        if(x>0)
        {
            sum = sum +x;
        }

        i++;
        recursion(i, n);
    }
}
