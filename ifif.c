#include<stdio.h>
int add(int a, int b);
// add two numbers, 2&3, 5&7, 15&21
int main()
{
    int sum = 0;

    for(int i=0; i<3; i++)
    {
        int x,y;
        printf("Enter x: ");
        scanf("%d", &x);
        printf("Enter y: ");
        scanf("%d", &y);

        sum = sum+add(x,y);
        printf("Sum is: %d\n",add(x,y));
    }

    printf("Total Sum is: %d\n",sum);

    return 0;
}

int add(int a, int b)
{
    int m;
    m=a+b;
    return m;
}

