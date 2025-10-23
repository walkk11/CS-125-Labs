/*
    File: ice_1022.c
    Author: Kylee Walker
    Assignment: In Class Exercise
    Date: 10/22/2025
    Resources: Lectures
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    char grade[2];
    int numCourses;
} Student;

void inputs(Student *s1);
void printData(Student *s1);

int main() {
    Student s1;
    
    inputs(&s1);
    
    printData(&s1);
    
    return 0;
}

void inputs(Student *s1) {
    
    printf("\nEnter name: ");
    scanf("%s", s1->name);
    
    printf("Enter age: ");
    scanf("%d", &s1->age);
    
    printf("Enter grade: ");
    scanf("%s", s1->grade);
    
    getchar();
    
    printf("Enter number of courses: ");
    scanf("%d", &s1->numCourses);
}

void printData(Student *s1) {
    
    printf("\nYour name is %s. \n", s1->name);
    printf("You are %d years old.\n", s1->age);
    printf("Your grade is %s. \n", s1->grade);
    printf("You are enrolled in %d courses.\n\n", s1->numCourses);
}