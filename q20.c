
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check to prevent division by zero error
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // If the operator does not match any expected case
        default:
            printf("Error! The operator is not valid.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask the user to enter the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear any leftover newline character

    // Ask the user to enter two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case to handle each calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);