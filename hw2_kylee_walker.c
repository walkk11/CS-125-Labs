/*
    File: hw2_kylee_walker.c
    Author: Kylee Walker
    Assignment: Homework 2
    Date: 09/05/2025
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    float amb_temp = 0.0;
    int initial_fuel = 0;
    float req_temp = 0.0;
    float engine_temp = 0.0;
    int total_fuel = 0;
    int seconds = 0;
    
    printf("Enter the ambient temperature(F): \n");
    scanf("%f", &amb_temp);
    
    printf("Enter the initial fuel level(gallons): \n");
    scanf("%d", &initial_fuel);
    
    printf("Enter the required engine temperature for takeoff(F): \n");
    scanf("%f", &req_temp);
    
    if (initial_fuel < 0 || req_temp < 0) {
        printf("Cannot continue, initial fuel and required temperature can't be negative");
    }
    
    engine_temp = amb_temp + 3.0;
    
    while (engine_temp < req_temp && initial_fuel > 0) {
        sleep(1);
        engine_temp += 1.25;
        initial_fuel -=2;
        total_fuel += 2;
        seconds++;
    }
    
    if (engine_temp >= req_temp) {
        printf("Warmup completed after %d seconds. \n", seconds);
        printf("Warmup used %d gallons of fuel. \n", total_fuel);
        printf("Remaining fuel left onboard is %d gallons. \n", initial_fuel);
    }
    else {
        printf("Engine couldn't reach required temperature. Ran out of fuel.\n");
    }
    
    return 0;
}