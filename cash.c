#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    
    // ask for the amount that the person wants to change
    do 
    {
        dollar = get_float("Change: ");
    }
    while (dollar < 0);
    
    //get the amount in cents and round it up
    int cents = round(dollar * 100);
        
    //Initialize the amount of coins to give back
    int coins = 0;
    
    //check how many querters can be given back
    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    }
    
    //check how many dimes can be given back
    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }
    
    //check how many nickels can be given back
    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }
    
    //check how many pennies can be given back
    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }
    
    //print the amount of coins to be given back
    printf("Coin(s) returned: %i\n", coins);
}
