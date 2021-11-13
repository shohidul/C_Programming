#include <stdio.h>
#include <stdbool.h>

int rWater = 1;
int rCoffee = 1;
int rSugar = 1;
int rMilk = 1;

int water = 0;
int coffee = 0;
int sugar = 0;
int milk = 0;

int numOfCup = 0;

int main()
{
    /* Recipe for one cup
        Water = 1 cup
        Coffee = 1 tsp
        Sugar = 1 tsp
        Milk = 1 tsp

      Start
      1. Put Water & Add Coffee, Sugar, Milk
      3. Process
      4. Serve
      End
    */

    printf("Put water (cpu): ");
    scanf("%d", &water);
    printf("Put coffee (tsp): ");
    scanf("%d", &coffee);
    printf("Put sugar (tsp): ");
    scanf("%d", &sugar);
    printf("Put milk (tsp): ");
    scanf("%d", &milk);

    makeOneCupCoffee();
    if(numOfCup > 0)
    {
        printf("\n\nYahoo! You have made %d cup(s) of coffee!", numOfCup);
    }else{
        printf("\n\nSorry! You do not have enough ingredients!");
    }
    printf("\n\nRemaining ingredients: ");
    printf("\nWater: %d ", water);
    printf("Coffee: %d ", coffee);
    printf("Sugar: %d ", sugar);
    printf("Milk: %d\n", milk);

    return 0;
}

void makeOneCupCoffee(){
    bool isOneCupWater = false;
    bool isOneTSPCoffee = false;
    bool isOneTSPSugar = false;
    bool isOneTSPMilk = false;

    if(water >= rWater){
        water = water - rWater;
        isOneCupWater = true;
    }

    if(coffee >= rCoffee){
        coffee = coffee - rCoffee;
        isOneTSPCoffee = true;
    }

    if(sugar >= rSugar){
        sugar = sugar - rSugar;
        isOneTSPSugar = true;
    }

    if(milk >= rMilk){
        milk = milk - rMilk;
        isOneTSPMilk = true;
    }

    if(isOneCupWater && isOneTSPCoffee && isOneTSPSugar && isOneTSPMilk){
        numOfCup++;
    }

    if(water >= rWater && coffee >= rCoffee && sugar >= rSugar && milk >= rMilk){
        makeOneCupCoffee();
    }
}
