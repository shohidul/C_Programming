#include <stdio.h>
#include <stdbool.h>

int getPIN();
bool checkPIN(int pin);
void recheck(int pin);
void withdrawCash(int amount);
void balanceInquiry();

int limit = 0;
int recordIndex = 0;

int main()
{
    /*
    Start
    1. Enter the PIN
    2. Check if the PIN is correct.
        2.1 if correct then show the menu.
        2.2 else go back to 1 [Incorrect PIN]
    3. Select Cash withdrawal
    4. Enter the amount
    5. Process the transaction
    6. Print the receipt
    End
    */

    //1. Enter the PIN
    int pin = getPIN();
    recheck(pin);

    return 0;
}

void recheck(int pin){
    limit++;
    //2. Check if the PIN is correct.
    bool isCorrect = checkPIN(pin);
    if(isCorrect == true){
        // 2.1 if correct then show the menu.
        printf("\n:::::::::::::::MENU::::::::::::::::\n");
        printf("1. Cash Withdrawal      ");
        printf("2. Balance Inquiry\n");
        printf("3. PIN Change   ");
        printf("4. Mini Statement\n");
        printf("5. Others\n\n");

        //3. Select Cash withdrawal
        int service;
        printf("Enter the service number: ");
        scanf("%d",&service);

        switch(service)
        {
            case 1:
                printf("\nYou have chosen the service number 1");
                int amount;
                printf("\nEnter the amount: ");
                scanf("%d",&amount);

                //5. Process the transaction
                withdrawCash(amount);

                break;
            case 2:
                printf("You have chosen the service number 2");

                //5. Process the transaction
                balanceInquiry();

                break;
            case 3:
                printf("\nService Unavailable.\n");
                break;
            case 4:
                printf("\nService Unavailable.\n");
                break;
            case 5:
                printf("\nService Unavailable.\n");
                break;
        }
        //printf("you have chosen the service number: %d", service);
    }
    else{
        //2.2 else go back to 1 [Incorrect PIN]
        if(limit < 3){
            pin = getPIN();
            recheck(pin);
        }else{
            printf("\nPlease try again after 1 hour.\n");
        }
    }
}

int getPIN(){
    int pin;
    printf("Enter the PIN: ");
    scanf("%d",&pin);
    return pin;
}

bool checkPIN(int pin){
    int pinArray[4] = {1234, 2255, 6478, 9564};

    bool isCorrect = false;
    for(int i=0; i<4; i++){

        if(pin == pinArray[i]){
            recordIndex = i;
            isCorrect = true;
            break;
        }
    }

    return isCorrect;
}

void withdrawCash(int amount)
{
    int amountArray[4] = {50000, 70000, 90000, 10000};
    if(amount <= amountArray[recordIndex])
    {
        //6. Print the receipt
        printf("\nPrinting the receipt of %d\n", amount);
    }
    else{
        printf("\nInsufficient balance.\n");
    }
}

void balanceInquiry()
{
    //6. Print the recipt
    int amountArray[4] = {50000, 70000, 90000, 10000};
    printf("\n\nYour balance is : %d\n", amountArray[recordIndex]);
}
