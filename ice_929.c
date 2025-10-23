/*
    File: ice_929.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 09/29/2025
    Resources: Lectures
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int manipStr(char *input, char *lower, int vowels);

int main() {
    char input[16];
    char lower[16];
    int vowels = 0;
    
    printf("\nPlease enter a string (max 15 characters): ");
    fgets(input, sizeof(input), stdin);
    
    manipStr(input, lower, vowels);
    
    printf("\nEnding Program. Goodbye.\n");
    
    return 0;
}

int manipStr(char *input, char *lower, int vowels) {
    int i;
    
    for (i = 0; i < 15; i++) {
        lower[i] = tolower(input[i]);
    }
    
    for (i = 0; lower[i]; i++) {
        char v = lower[i];
        if ((v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u')) {
            vowels++;
        }
    }
    
    printf("\nOriginal string: %s", input);
    printf("\nLowercase string: %s", lower);
    printf("\nNumber of vowels: %d \n", vowels);
    
}