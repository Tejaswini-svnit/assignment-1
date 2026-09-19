#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    // Print the output
    printf("Reversed number = %d\n", reversedNum);

    return 0;
}
