#include <stdio.h>

int main() {
    int N, i, max, min;

    // Prompt user for the total number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // Validate that N is at least 1
    if (N <= 0) {
        printf("Please enter a valid number of elements greater than 0.\n");
        return 1;
    }

    int arr[N]; // Declare an array of size N

    // Input N numbers from the user
    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    max = arr[0];
    min = arr[0];

    // Loop through the array to compare and find max and min
    for(i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the final results
    printf("\nMaximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
