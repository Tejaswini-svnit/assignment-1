#include <stdio.h>

int main() {
    int i, n;
    int sumEven = 0;
    int sumOdd = 0;

    // Prompt the user to enter the upper limit N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop from 1 to N to calculate the sums
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i; // Add to even sum if divisible by 2
        } else {
            sumOdd += i;  // Add to odd sum if not divisible by 2
        }
    }

    // Print the final results
    printf("\nSum of all Even numbers between 1 and %d = %d", n, sumEven);
    printf("\nSum of all Odd numbers between 1 and %d = %d\n", n, sumOdd);

    return 0;
}
