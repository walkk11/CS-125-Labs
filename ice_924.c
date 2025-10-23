/*
    File: ice_924.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 09/24/2025
*/

#include <stdio.h>

void arrNum(int arr[], int arrSize);
void printArr(int arr[], int arrSize);
int findLargest(int arr[], int arrSize);
int findSmallest(int arr[], int arrSize);
float calculateAverage(int arr[], int arrSize);

int main() {
    int i, largest, smallest;
    int arr[i];
    int arrSize;
    float average;
    
    printf("Enter the size of the array (max 20): ");
    scanf("%d", &arrSize);
    while (arrSize > 20 || arrSize < 1) {
        printf("Invalid input. Array max is 20.\n");
        printf("Enter a valid size (max 20): ");
        scanf("%d", &arrSize);
    }
    
    arrNum(arr, arrSize);
    
    printArr(arr, arrSize);
    
    largest = findLargest(arr, arrSize);
    smallest = findSmallest(arr, arrSize);
    average = calculateAverage(arr, arrSize);
    
    printf("\nThe largest number is %d. \n", largest);
    printf("The smallest number is %d. \n", smallest);
    printf("The average value is %.2f. \n", average);
}

void arrNum(int arr[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int arrSize) {
    int i;
    for (i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
}

int findLargest(int arr[], int arrSize) {
    int i, max = arr[0];
    for (i = 1; i < arrSize; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findSmallest(int arr[], int arrSize) {
    int i, min = arr[0];
    for (i = 1; i < arrSize; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float calculateAverage(int arr[], int arrSize) {
    int i, sum = 0;
    for (i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    return sum / arrSize;
}