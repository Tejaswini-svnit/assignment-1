            #include <stdio.h>
            #include <math.h> // Required for the sqrt() function

            int main() {
                int num, i;
                int isPrime = 1; // 1 means true (prime), 0 means false (not prime)

                // Prompt the user for input
                printf("Enter a positive integer: ");
                scanf("%d", &num);

                // Numbers less than or equal to 1 are not prime
                if (num <= 1) {
                    isPrime = 0;
                } else {
                    // Loop from 2 up to the square root of num
                    for (i = 2; i <= sqrt(num); i++) {
                        // If num is divisible by any number in this range, it's not prime
                        if (num % i == 0) {
                            isPrime = 0; // Update flag
                            break;       // Exit the loop early
                        }
                    }
                }

                // Output the final result based on the flag value
                if (isPrime == 1) {
                    printf("%d is a prime number.\n", num);
                } else {
                    printf("%d is not a prime number.\n", num);
                }

                return 0;
            }
