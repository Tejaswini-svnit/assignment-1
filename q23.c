#include <stdio.h>

int main() {
    double base;
    int exponent;
    double result = 1.0;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent (integer): ");
    scanf("%d", &exponent);

    // Handle positive exponents
    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } 
    // Handle negative exponents
    else {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    // Display the result
    printf("%.2lf raised to the power of %d is %.4lf\n", base, exponent, result);

    return 0;
}
