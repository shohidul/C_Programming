#include <stdio.h>
int main() {
	/*int mno;
	printf("\nInput a number between 1 to 12 to get the month name: ");
	scanf("%d", &mno);*/
	/*switch(mno) {
		case 1 : printf("January");
                 break;
		case 2 : printf("February"); break;
		case 3 : printf("March"); break;
		case 4 : printf("April"); break;
		case 5 : printf("May"); break;
		case 6 : printf("June"); break;
		case 7 : printf("July"); break;
		case 8 : printf("August"); break;
		case 9 : printf("September"); break;
		case 10 : printf("October"); break;
		case 11 : printf("November"); break;
		case 12 : printf("December"); break;
		default : printf("Invalid Month");
    }*/
/*
    if(mno == 1) printf("January");
    else if(mno == 2) printf("February");
    else if(mno == 3) printf("March");
    else if(mno == 4) printf("April");
    else if(mno == 5) printf("May");
    else if(mno == 6) printf("June");
    else if(mno == 7) printf("July");
    else if(mno == 8) printf("August");
    else if(mno == 9) printf("September");
    else if(mno == 10) printf("October");
    else if(mno == 11) printf("November");
    else if(mno == 12) printf("December");
    else printf("Invalid Month");*/

    int arr [10] = {2, 20, 15, 65, -2, 6, -35, 21, 30, -24};

    for(int i = 9; i >= 0; i--)
    {
        if(arr[i] < 0)
        {
            printf("%d is negative number\n", arr[i]);
        }
        else if(arr[i] % 2 == 0)
        {
            printf("%d is even number\n", arr[i]);

        }
        else if(arr[i] % 2 != 0)
        {
            printf("%d is odd number\n", arr[i]);
        }

    }


    return 0;
}
