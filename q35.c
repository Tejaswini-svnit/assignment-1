#include <stdio.h>

int main() {
    long long n;
    int single_digit_sum;

    printf("Enter a number N: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers by converting to absolute value
    if (n < 0) {
        n = -n;
    }

    // Mathematical formula for digital root
    if (n == 0) {
        single_digit_sum = 0;
    } else {
        single_digit_sum = n % 9;
        if (single_digit_sum == 0) {
            single_digit_sum = 9;
        }
    }

    printf("Single digit sum: %d\n", single_digit_sum);

    return 0;
}
