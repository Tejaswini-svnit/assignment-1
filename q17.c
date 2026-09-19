#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Reading three numbers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum using logical AND (&&) operator
    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum number is: %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum number is: %d\n", num2);
    } 
    else {
        printf("Maximum number is: %d\n", num3);
    }

    return 0;
}
