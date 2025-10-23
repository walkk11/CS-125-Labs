/*
    File: hw3_kylee_walker.c
    Author: Kylee Walker
    Assignment: Homework 3
    Date: 09/14/2025
*/

#include <stdio.h>

int main()
{
    float hours_worked, hourly_rate, pay;
    int employee_id, employee_type, menu_choice;
    int manager_alert = 0;
    
    printf("Enter Employee ID (1000 - 1000000): \n");
    scanf("%d", &employee_id);
    if (employee_id < 1000 || employee_id > 1000000) {
        printf("Invalid Employee ID. Enter Employee ID: \n");
        scanf("%d", &employee_id);
    }
    
    printf("Enter Hours Worked: \n");
    scanf("%f", &hours_worked);
    if (hours_worked < 0) {
        printf("Invalid Hours Worked. Enter Hours Worked: \n");
        scanf("%f", &hours_worked);
    }
    
    printf("Enter Hourly Rate (Max $100.00): \n");
    scanf("%f", &hourly_rate);
    if (hourly_rate < 0 || hourly_rate > 100) {
        printf("Invalid Hourly Rate. Enter Hourly Rate: \n");
        scanf("%f", &hourly_rate);
    }
    
    printf("Enter Employee Type (1 - Hourly, 2 - Salary): \n");
    scanf("%d", &employee_type);
    if (employee_type < 1 || employee_type > 2) {
        printf("Invalid Employee Type. Enter Employee Type: \n");
        scanf("%d", &employee_id);
    }
    
    if (employee_type = 1 && hours_worked > 60.0) {
        hours_worked = 60.0;
        manager_alert = 1;
        printf("Hour limit exceeded. Manager alerted.\n");
    }
    
    void print_summary() {
        printf("Hello Employee\n");
        printf("Employee Summary\n");
        printf("Employee ID: %d\n", employee_id);
        printf("Employee Type: %d\n", employee_type);
        printf("Hourly Rate: %.2f\n", hourly_rate);
        printf("Hours Worked: %.1f\n", hours_worked);
        printf("Manager Alert: %s\n", manager_alert ? "YES" : "NO");
    }
    
    print_summary();
    
    do {
        printf("\nMenu: \n");
        printf("1. Check current pay\n");
        printf("2. Change inputs\n");
        printf("3. Check manager status\n");
        printf("4. Show summary\n");
        printf("5. Exit\n");
        printf("Choose an option: \n");
        scanf("%d", &menu_choice);
    
        switch(menu_choice) {
            case 1:
                if (employee_type == 1) {
                    pay = hourly_rate * hours_worked;
                }
                else {
                    pay = hourly_rate * (hours_worked >= 40.0 ? 40.0 : hours_worked);
                }
            
                printf("Do you want exact pay (1) or whole number (2)?\n");
                int pay_choice;
                scanf("%d", &pay_choice);
                if (pay_choice == 1) {
                    printf("Pay: $%.2f\n", pay);
                }
                else {
                    printf("Pay: $%d\n", pay);
                }
                break;
            case 2:
                printf("Enter new Hours Worked: \n");
                scanf("%f", &hours_worked);
                if (employee_type == 1 && hours_worked > 60.0) {
                    hours_worked = 60.0;
                    manager_alert = 1;
                }
                printf("Enter new Hourly Rate: \n");
                scanf("%f", hourly_rate);
                if (hourly_rate > 100) {
                    hourly_rate = 100;
                }
                printf("Enter new Employee Type (1 - Hourly, 2 - Salary): \n");
                scanf("%d",&employee_type);
                break;
            case 3:
                printf("Manger Alert: %s\n", manager_alert ? "YES" : "NO");
                break;
            case 4:
                print_summary();
                break;
            case 5:
                printf("Exiting summary.\n");
                break;
            default:
                printf("Invalid option.\n");
        }
    }
    while (menu_choice != 5);
    return 0;
}