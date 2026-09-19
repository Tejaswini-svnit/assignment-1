#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Keep track of the original number for the final output
    int original_num = num;

    // Handle negative numbers by converting them to positive
    if (num < 0) {
        num = -num;
    }

    // Loop to isolate and sum individual digits
    while (num > 0) {
        remainder = num % 10;   // Extracts the last digit
        sum = sum + remainder;  // Adds the digit to the running total
        num = num / 10;         // Removes the last digit from the number
    }

    // Print the final result
    printf("The sum of the individual digits of %d is: %d\n", original_num, sum);

    return 0;
}
