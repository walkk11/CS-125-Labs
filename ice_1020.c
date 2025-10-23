/*
    File: ice_1020.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 10/20/2025
    Resources: Lectures
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int addNums(int num1, int num2);
int subtractNums(int num1, int num2);
int multiplyNums(int num1, int num2);
int divideNums(int num1, int num2);

int main(int argc, char * argv[]) {
    
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    
    if (strcmp(argv[2], "+") == 0) {
        printf("\n%d + %d = %d\n\n", num1, num2, addNums(num1, num2));
    }
    else if (strcmp(argv[2], "-") == 0) {
        printf("\n%d - %d = %d\n\n", num1, num2, subtractNums(num1, num2));
    }
     else if (strcmp(argv[2], "*") == 0) {
        printf("\n%d * %d = %d\n\n", num1, num2, multiplyNums(num1, num2));
    }
    else if (strcmp(argv[2], "/") == 0) {
        if (num2 == 0) {
            printf("\nCannot divide by 0.\n");
        }
        else {
            printf("\n%d / %d = %d\n\n", num1, num2, divideNums(num1, num2));
        }
    }
    return 0;
}

int addNums(int num1, int num2) {
    
    return (num1 + num2);
}

int subtractNums(int num1, int num2) {
    
    return (num1 - num2);
}

int multiplyNums(int num1, int num2) {
    
    return (num1 * num2);
}

int divideNums(int num1, int num2) {
    
    return (num1 / num2);
}