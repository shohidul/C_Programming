#include <stdio.h>

int main ()
{
    // 13. Write a C program to calculate factorial of a number.

      int i,f=1,num;

      printf("Input the number : ");
      scanf("%d",&num);

      for(i=1;i<=num;i++)
      {

          f=f*i;
          printf("i: %d f: %d\n",i,f);
      }

      printf("The Factorial of %d is: %d\n",num,f);

    return 0;
}
