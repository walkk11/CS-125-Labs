/*
    File: ice_908.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 09/08/2025
*/

#include <stdio.h>

int main()
{
    int plane = 0;
    
    printf("The aircraft choices are: \n1. B747 \n2. A320 \n3. A321 \n4. B757-3 \n5. SR71 \n");
    printf("Please enter the number that corresponds to the aircraft you want: \n");
    scanf("%d", &plane);
    
    switch (plane)
    {
    case 1:
        printf("You chose B747.\n");
        break;
    case 2:
        printf("You chose A320.\n");
        break;
    case 3:
        printf("You chose A321.\n");
        break;
    case 4:
        printf("You chose B757-3.\n");
        break;
    case 5:
        printf("You chose SR71.\n");
        break;
    }
    
    return 0;
}