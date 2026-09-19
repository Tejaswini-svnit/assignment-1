#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume the first number is the maximum
    max = num1;

    // Compare with the second number
    if (num2 > max) {
        max = num2;
    }

    // Compare with the third number
    if (num3 > max) {
        max = num3;
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
