#include <stdio.h>
int main()
{

    printf("%d", giveMeSum(2,7));

    giveMeSub(7,2);

    printf("%d", x());
   return 0;
}

int giveMeSum(int a, int b){
    int result = a + b;
    return result;
}

void giveMeSub(int a, int b)
{
    int result = a - b;
    printf("%d", result);
}

int x()
{
    int x1 = 0;
    return x1;
}


