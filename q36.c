#include <stdio.h>

int main() {
    int i, n;

    // Ask the user for the upper limit (N)
    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The series is: ");
    
    // Loop starts at 1, increments by 2 in each step, and stops at N
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
