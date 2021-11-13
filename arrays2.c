#include <stdio.h>

int main(){
    //char anything[5] = {'A', 'B', 'C', 'D', 'E'};

    char anything[5];

    anything[0] = 'A';
    anything[1] = 'B';
    anything[2] = 'C';
    anything[3] = 'D';
    anything[4] = 'E';

    printf("%c\n", anything[0]);
    printf("%c\n", anything[1]);
    printf("%c\n", anything[2]);
    printf("%c\n", anything[3]);
    printf("%c\n", anything[4]);
    printf("\n");

    int i;
    for(i=0; i<5; i++){
        printf("%c\n", anything[i]);
    }
    return 0;
}
