/*
    File: hw5_kylee_walker.c
    Author: Kylee Walker
    Assignment: Homework 5
    Date: 09/25/2025
*/

#include <stdio.h>

void printSummary(int employeeId, float hoursWorked, float hourlyRate, 
int employeeType, int managerAlert);

int main() {
    float hoursWorked, hourlyRate, pay;
    int employeeId, employeeType, menuChoice;
    int managerAlert = 0;
    
    printf("Enter Employee ID (1000 - 1000000): \n");
    scanf("%d", &employeeId);
    if (employeeId < 1000 || employeeId > 1000000) {
        printf("Invalid Employee ID. Enter Employee ID: \n");
        scanf("%d", &employeeId);
    }
    
    printf("Enter Hours Worked: \n");
    scanf("%f", &hoursWorked);
    if (hoursWorked < 0) {
        printf("Invalid Hours Worked. Enter Hours Worked: \n");
        scanf("%f", &hoursWorked);
    }
    
    printf("Enter Hourly Rate (Max $100.00): \n");
    scanf("%f", &hourlyRate);
    if (hourlyRate < 0 || hourlyRate > 100) {
        printf("Invalid Hourly Rate. Enter Hourly Rate: \n");
        scanf("%f", &hourlyRate);
    }
    
    printf("Enter Employee Type (1 - Hourly, 2 - Salary): \n");
    scanf("%d", &employeeType);
    if (employeeType < 1 || employeeType > 2) {
        printf("Invalid Employee Type. Enter Employee Type: \n");
        scanf("%d", &employeeType);
    }
    
    if (employeeType == 1 && hoursWorked > 60.0) {
        hoursWorked = 60.0;
        managerAlert = 1;
        printf("Hour limit exceeded. Manager alerted.\n");
    }
    
    printSummary(employeeId, hoursWorked, hourlyRate, employeeType, 
    managerAlert);
    
    do {
        printf("\nMenu: \n");
        printf("1. Check current pay\n");
        printf("2. Change inputs\n");
        printf("3. Check manager status\n");
        printf("4. Show summary\n");
        printf("5. Exit\n");
        printf("Choose an option: \n");
        scanf("%d", &menuChoice);
    
        switch(menuChoice) {
            case 1:
                if (employeeType == 2) {
                    pay = hourlyRate * (hoursWorked >= 40.0 ? 40.0 
                    : hoursWorked);
                }
                else {
                    pay = hourlyRate * hoursWorked;
                }
            
                printf("Do you want exact pay (1) or whole number (2)?\n");
                int payChoice;
                scanf("%d", &payChoice);
                if (payChoice == 1) {
                    printf("Pay: $%.2f \n", pay);
                }
                else {
                    printf("Pay: $%d \n", pay);
                }
                break;
            case 2:
                printf("Enter new Hours Worked: \n");
                scanf("%f", &hoursWorked);
                if (employeeType == 1 && hoursWorked > 60.0) {
                    hoursWorked = 60.0;
                    managerAlert = 1;
                }
                else {
                    managerAlert = 0;
                }
                printf("Enter new Hourly Rate: \n");
                scanf("%f", &hourlyRate);
                if (hourlyRate > 100) {
                    hourlyRate = 100;
                }
                printf("Enter new Employee Type (1 - Hourly, 2 - Salary): \n");
                scanf("%d",&employeeType);
                break;
            case 3:
                printf("Manager Alert: %s\n", managerAlert ? "YES" : "NO");
                break;
            case 4:
                printSummary(employeeId, hoursWorked, hourlyRate, 
                employeeType, managerAlert);
                break;
            case 5:
                printf("Exiting summary.\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    }
    while (menuChoice != 5);
    return 0;
}

void printSummary(int employeeId, float hoursWorked, float hourlyRate, 
int employeeType, int managerAlert) {
    printf("\nHello Employee\n");
    printf("Employee Summary\n");
    printf("Employee ID: %d\n", employeeId);
    printf("Employee Type: %d\n", employeeType);
    printf("Hourly Rate: %.2f\n", hourlyRate);
    printf("Hours Worked: %.1f\n", hoursWorked);
    printf("Manager Alert: %s \n", managerAlert ? "YES" : "NO");
}