/*
    File: ice_827.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 08/27/2025
*/

#include <stdio.h>

int main()
{
    int mealChoice = 0;
    int drinkChoice = 0;
    float tax = 1.59;
    float total = 0.0;
    
    printf("Welcome to Kylee's Food Truck!\n\n");
    printf("The food options are: \n");
    printf("1. Pizza $5.99\n");
    printf("2. Hot Dog $3.99\n");
    
    printf("You would like (1-2): \n");
    scanf("%d", &mealChoice);
    
    if (mealChoice == 1) {
        total = total + 5.99;
        }
    else if (mealChoice == 2) {
        total = total + 3.99;
        }
    else {
        printf("Option not available, defaulting to Hot Dog.\n");
        total = total + 3.99;
        }
    
    printf("The drink options are: \n");
    printf("1. Soda $1.99\n");
    printf("2. Water $0.99\n");
    
    printf("You would like (1-2): \n");
    scanf("%d", &drinkChoice);
    
    if (drinkChoice == 1) {
        total = total + 1.99;
        }
    else if (drinkChoice == 2) {
        total = total + 0.99;
        }
    else {
        printf("Option not available, defaulting to Water.\n");
        total = total + 0.99;
        }
    
    total = total + tax;
    
    printf("Thank you for choosing Kylee's Food Truck! \nYour total is $%.2f with tax.", total);
}