#include <stdio.h>

int main() {
    int n;
    float x, y = 0.0;

    // Read values of x and n from the user
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Evaluate Y based on the value of n
    switch (n) {
        case 1:
            y = 1 + x;
            break;
        case 2:
            y = 1 + (x / n);
            break;
        case 3:
            y = 1 + (x * n); // Assuming 1 + xn means 1 + x * n
            break;
        default:
            // For n > 3 or n < 1
            y = 1 + (n * x);
            break;
    }

    // Display the result
    printf("The value of Y is: %.2f\n", y);

    return 0;
}
