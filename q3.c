#include <stdio.h>

/*void prod(int p, int q)
{
    printf("Product of p & q is: %d", p*q);
}

int main()
{

    prod(5,9);

    return 0;
}
*/
int add_digits(int limit)
{
    int s = 0;
    for(int i=0; i<limit; i++)
    {
        s += i;
    }

    return s;
}

int main()
{
    int s = add_digits(10);
    printf("The sum is: %d", s);

    return 0;
}
