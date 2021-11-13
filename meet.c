#include <stdio.h>

int main() {

    int arr[100];
    int i, x, pos, n = 10;

    // initial array of size 10
    for (i = 0; i < n; i++)
        arr[i] = i + 1;

    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // 1 2 3 4 5 6 7 8 9 10
    // element to be inserted
    x = 50;

    // position at which element is to be inserted
    pos = 5;

    // increase the size by 1
    //n++;

    // shift elements forward
    //for (i = n-1; i >= pos; i--)
        //arr[i] = arr[i - 1];

    // insert x at pos
    //arr[pos - 1] = x;

     // print the updated array
    //for (i = 0; i < n; i++)
        //printf("%d ", arr[i]);
    //printf("\n");



    // position at which element
    // is to be deleted
    //pos = 2;

    // decrease the size by 1
    //n--;

    // shift elements backward
    //for (i = pos-1; i < n; i++)
        //arr[i] = arr[i + 1];

     // print the updated array
    //for (i = 0; i < n; i++)
        //printf("%d ", arr[i]);
    //printf("\n");

   return 0;
}
