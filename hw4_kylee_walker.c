/*
    File: hw4_kylee_walker.c
    Author: Kylee Walker
    Assignment: Homework 4
    Date: 09/19/2025
    Resources: Lectures and Google
*/

#include <stdio.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int getValidInteger(const char *prompt) {
    int num;
    int result;

    while (1) {
        printf("%s", prompt);
        result = scanf("%d", &num);
        if (result == 1) {
            clearInputBuffer(); 
            return num;
        } else {
            printf("Invalid input. Please enter an integer.\n");
            clearInputBuffer(); 
        }
    }
}

int main() {
    int num1, num2, opChoice;

    printf("Welcome to the Binary Helper!\n");

    num1 = getValidInteger("Enter your first integer: ");
    num2 = getValidInteger("Enter your second integer: ");

    while (1) {
        printf("\n--- Operation List ---\n");
        printf("1. XOR operation\n");
        printf("2. OR operation\n");
        printf("3. AND operation\n");
        printf("4. 2's Complement\n");
        printf("5. Enter new numbers\n");
        printf("6. Exit the program\n");

        printf("\nChoose an operation: ");
        if (scanf("%d", &opChoice) != 1) {
            printf("Invalid input. Please enter a number from the menu.\n");
            clearInputBuffer();
            continue;
        }

        switch (opChoice) {
            case 1:
                printf("\nXOR operation = %d\n", num1 ^ num2);
                break;
            case 2:
                printf("\nOR operation = %d\n", num1 | num2);
                break;
            case 3:
                printf("\nAND operation = %d\n", num1 & num2);
                break;
            case 4:
                printf("\n2's complement of %d = %d", num1, -num1);
                printf("\n2's complement of %d = %d\n", num2, -num2);
                break;
            case 5:
                num1 = getValidInteger("\nEnter your first integer: ");
                num2 = getValidInteger("Enter your second integer: ");
                break;
            case 6:
                printf("\nExiting program. Goodbye!\n");
                return 0;
            default:
                printf("\nInvalid option. Please try again.\n");
        }
    }
}
