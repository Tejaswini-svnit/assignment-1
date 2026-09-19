#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // 1. Read the arithmetic operator (Character form)
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // 2. Read the two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // 3. Perform specific task using switch-case
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check for division by zero to prevent runtime errors
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // Executed if the operator does not match any valid case
        default:
            printf("Error! '%c' is an invalid operator.\n", operator);
            break;
    }

    return 0;
}
