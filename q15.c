#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    // Input marks for five subjects
    printf("Enter the marks of five subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks = %.2f / 500.00\n", total);
    printf("Percentage  = %.2f%%\n", percentage);

    // Determine and print division
    if (percentage >= 60.0) {
        printf("Division    = First Division\n");
    } 
    else if (percentage >= 45.0) {
        printf("Division    = Second Division\n");
    } 
    else if (percentage >= 33.0) {
        printf("Division    = Third Division\n");
    } 
    else {
        printf("Division    = Fail\n");
    }

    return 0;
}
