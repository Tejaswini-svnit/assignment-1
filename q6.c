#include <stdio.h>

int main() {
    int a, b;

    // Asking for user input
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // 'a' now holds the sum of both numbers
    b = a - b; // 'b' becomes the original value of 'a'
    a = a - b; // 'a' becomes the original value of 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}













    