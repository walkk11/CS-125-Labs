/*
    File: ice_922.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 09/22/2025
*/

#include <stdio.h>
#include <string.h>

int concat(char *str1, char *str2)
{
    strcat(str1, str2);
}

int printstr(char *str1)
{
    printf("\nConcatenated string: %s\n\n", str1);
}

int main()
{
    char str1[8];
    char str2[8];
    
    printf("\nEnter the first string (no spaces): ");
    scanf("%s", str1);
    if (strlen(str1) > 8) {
        printf("String is too many characters.\n\n");
        return 0;
    }
    
    printf("\nEnter the second string (no spaces): ");
    scanf("%s", str2);
    if (strlen(str2) > 8) {
        printf("String is too many characters.\n\n");
        return 0;
    }
    
    int constr = concat(str1, str2);
    int strprint = printstr(str1);
    
    return 0;
}