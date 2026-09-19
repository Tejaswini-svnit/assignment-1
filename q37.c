#include <stdio.h>

int main() {
    int i, N;

    // Ask the user for the upper limit N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The series is: ");
    // Loop starts at 2 and increments by 2 in each iteration
    for(i = 2; i <= N; i += 2) {
        printf("%d", i);
        
        // Print a comma after the number, except for the last one
        if(i < N && i + 2 <= N) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}
