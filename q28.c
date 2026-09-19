#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // 1. Store the number of digits in n
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // 2. Calculate the sum of the power of individual digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // 3. Check if the calculated sum equals the original number
    // We cast result to int to prevent floating-point inaccuracies
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
