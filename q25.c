#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to input a number
    printf("Enter any number to print its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("-----------------------------\n");

    // Loop to iterate from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
