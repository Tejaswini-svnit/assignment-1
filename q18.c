#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum using the conditional operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}
