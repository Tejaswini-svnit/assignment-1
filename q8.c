#include <stdio.h>

int main() {
    // Total seconds given
    long long total_seconds = 31558150;
    
    // Time conversion constants
    long long seconds_in_day = 86400; // 24 * 60 * 60
    long long seconds_in_hour = 3600;  // 60 * 60
    long long seconds_in_minute = 60;
    
    // Variables to store the results
    long long days, hours, minutes, remaining_seconds;
    
    // Calculate days and the remaining seconds
    days = total_seconds / seconds_in_day;
    remaining_seconds = total_seconds % seconds_in_day;
    
    // Calculate hours and the next remaining seconds
    hours = remaining_seconds / seconds_in_hour;
    remaining_seconds = remaining_seconds % seconds_in_hour;
    
    // Calculate minutes and final remaining seconds
    minutes = remaining_seconds / seconds_in_minute;
    remaining_seconds = remaining_seconds % seconds_in_minute;
    
    // Print the formatted output
    printf("Total Seconds: %lld\n", total_seconds);
    printf("Conversion: %lld days, %lld hours, %lld minutes, and %lld seconds\n", 
           days, hours, minutes, remaining_seconds);
    
    return 0;
}
