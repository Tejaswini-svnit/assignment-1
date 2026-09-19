#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            factorial *= i; // equivalent to factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
