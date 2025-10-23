/*
    File: hw1_kylee_walker.c
    Author: Kylee Walker
    Assignment: Homework 1
    Date: 08/28/2025
*/

#include <stdio.h>

int main()
{
    float numerator = 0.0;
    float denominator = 0.0;
    float answer = 0.0;
    
    printf("Please enter the numerator: \n");
    scanf("%f", &numerator);
    
    printf("Please enter the denominator: \n");
    scanf("%f", &denominator);
    
    if (denominator == 0) { 
        printf("Cannot divide the numerator by 0.\n"); 
        } 
    else { 
        answer = numerator/denominator; 
        printf("Numerator: %.2f; Denominator: %.2f; Answer: %.2f\n", numerator, denominator, answer); 
        }
}