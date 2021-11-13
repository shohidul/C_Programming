#include <stdio.h>

/*
    Algorithm
    1. Declare an array array := {0,1,2,3,4,5},
        length n:=6 & initial position i:=0
    2. for loop(x:=n; x>=i; x--)
    3. Insert 9, array[i]=9
    4. Update length n:=n+1;
*/
void traversingArray();
int main () {

    int array [6]= {0,1,2,3,4,5};
    int n = 6;
    int i = 6;

    for(int x = n; x>=i; x=x-1){
        array[x+1] = array[x];
    }

    array[i]=9;
    n=n+1;



    for(int i = 0; i<n; i++){
        printf("%d ",array[i]);
    }

    //traversingArray();

   return 0;
}


void traversingArray()
{
    int NUM = 0;
    int AUTO[1985-1980] = {300, 301, 200, 600, 150};

    for(int K = 1980; K< 1985; K++)
    {
        printf("Year %d sold %d \n", K, AUTO[K-1980]);
        /*if(AUTO[K] > 300)
        {
            NUM = NUM + 1;
        }*/
    }


}
