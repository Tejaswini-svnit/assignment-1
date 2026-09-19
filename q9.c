#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    long total_seconds;

    // Read the time from the user
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // Convert time into total seconds
    // 1 hour = 3600 seconds, 1 minute = 60 seconds
    total_seconds = (hours * 3600) + (minutes * 60) + seconds;

    // Display the result
    printf("\nTime entered: %02d:%02d:%02d\n", hours, minutes, seconds);
    printf("Total time in seconds: %ld\n", total_seconds);

    return 0;
}
