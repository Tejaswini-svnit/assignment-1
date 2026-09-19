#include <stdio.h>

int main() {
    
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    
    printf("Enter the marks of five subjects:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    
    percentage = (total / 500.0) * 100;

    
    printf("Total Marks      = %f\n", total);
    printf("Percentage       = %f\n", percentage);
    

    return 0;
}


    