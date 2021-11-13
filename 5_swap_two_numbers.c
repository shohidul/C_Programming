#include <stdio.h>

int main ()
{
    // 5. Write a C program to swap two numbers.

    int x = 5;
    int y = 2;


    // swap two numbers without a third variable
    printf("Before swap x=%d y=%d",x,y);
    x=x+y; // x=7 (5+2)
    y=x-y; // y=5 (7-2)
    x=x-y; // x=2 (7-5)
    printf("\nAfter swap x=%d y=%d",x,y);





    //int *p1 = &x;
    //int *p2 = &y;

    // swap two numbers without a third variable using pointer
    /*printf("Before swap x=%d y=%d",*p1,*p2);
    *p1=*p1+*p2; // x=7 (5+2)
    *p2=*p1-*p2; // y=5 (7-2)
    *p1=*p1-*p2; // x=2 (7-5)
    printf("\nAfter swap x=%d y=%d",*p1,*p2);*/

    // swap two numbers using a third variable
    /*int z = x;

    printf("\n\nBefore swap x=%d y=%d",x,y);
    x = y;
    y = z;
    printf("\nAfter swap x=%d y=%d",x,y);
    */
    return 0;
}
