//1
#include<stdio.h>
int main(){
 float principal, rate,time, intrest;
 printf("enter principal:");
 scanf("%f",&principal);

printf(" enter rate:");
scanf("%f",&rate);

printf("enter time");
scanf("%f",&time);

intrest= principal*rate*time;
printf("simple intrest %f", intrest);
   return 0;
} 

//2
#include <stdio.h>

int main() {
    // Declare variables for 5 subjects, total, and percentage
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    // Prompt the user to input marks
    printf("Enter the marks of five subjects:\n");
    
    // Read 5 floating-point values from the user
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate total marks
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // Calculate percentage (Assuming maximum marks for each subject is 100)
    percentage = (total / 500.0) * 100;

    // Display the results formatted to 2 decimal places
    printf("\n-----------------------------------\n");
    printf("Total Marks      = %.2f / 500.00\n", total);
    printf("Percentage       = %.2f%%\n", percentage);
    printf("-----------------------------------\n");

    return 0;
}


//3
#include<stdio.h>
int main(){
    float tax, monthly_salary, gross_salary;

    printf(" monthly salary=");
    scanf("%f",&monthly_salary);

    printf("tax=");
    scanf("%f",&tax);

    gross_salary= monthly_salary + tax;
    printf("gross_salary %f",gross_salary);
    
    





    return 0;
}


//4
#include<stdio.h>
int main(){

    float celcius, farenheit;

    printf("temperature in farenheit:");
    scanf("%f",&farenheit);

    celcius= 5*(farenheit-32)/9;
    printf("temperature in celcius %f", celcius);




    return 0;
}



//5
#include<stdio.h>
int main(){
    int num1, num2, temp;

    // 1. Take input from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display values before swapping
    printf("\nBefore Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    /* 2. Swapping Logic
       - Copy num1 to the temporary variable
       - Copy num2 to num1
       - Copy the old num1 value (stored in temp) to num2 */
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display values after swapping
    printf("\nAfter Swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);






    return 0;
}


//6
#include <stdio.h>

int main() {
    int a, b;

    // Asking for user input
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // 'a' now holds the sum of both numbers
    b = a - b; // 'b' becomes the original value of 'a'
    a = a - b; // 'a' becomes the original value of 'b'

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

//7
#include<stdio.h>
int main(){
    int a,b, area;
    printf("value of a:");
    scanf("%d",&a);
    printf("value of b:");
    scanf("%d",&b);

    area = (a*b)/2;
    printf("value of area: %d",area); 
 return 0;
}


//8
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



   //9
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



//10
// #include <stdio.h>

int main() {
    float M, P, C, E, CM;

    // Input marks from the user
    printf("Enter Mathematics marks (out of 200): ");
    scanf("%f", &M);

    printf("Enter Physics marks (out of 200): ");
    scanf("%f", &P);

    printf("Enter Chemistry marks (out of 200): ");
    scanf("%f", &C);

    printf("Enter Entrance Examination marks (out of 100): ");
    scanf("%f", &E);

    // Calculate the cutoff mark using the formula: CM = M/2 + P/2 + C/2 + E
    CM = (M / 2.0) + (P / 2.0) + (C / 2.0) + E;

    // Display the calculated cutoff mark
    printf("\n-----------------------------------\n");
    printf("The calculated Cutoff Mark is: %.2f\n", CM);
    printf("-----------------------------------\n");

    return 0;
}




//11
#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Prompt the user to enter the total seconds
    printf("Enter total seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1 hour = 3600 seconds (60 minutes * 60 seconds)
    hours = total_seconds / 3600;

    // Get the remaining seconds after extracting hours, then divide by 60 to get minutes
    minutes = (total_seconds % 3600) / 60;

    // The remaining seconds are the remainder of the total seconds divided by 60
    seconds = total_seconds % 60;

    // Display the result in HH:MM:SS format
    printf("Converted Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}




//q12
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // %c displays the character, %d displays its ASCII value
    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}

//13
#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // If the number is perfectly divisible by 2, it is even
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } 
    // Otherwise, it is odd
    else {
        printf("%d is odd.\n", number);
    }

    return 0;
}




//14
#include <stdio.h>

int main() {
    char ch;

    // Ask the user for input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check the type of the character
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is a Capital Letter.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a Small Case Letter.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    } 
    else {
        printf("The character '%c' is a Special Symbol.\n", ch);
    }

    return 0;
}


//15
#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    // Input marks for five subjects
    printf("Enter the marks of five subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks = %.2f / 500.00\n", total);
    printf("Percentage  = %.2f%%\n", percentage);

    // Determine and print division
    if (percentage >= 60.0) {
        printf("Division    = First Division\n");
    } 
    else if (percentage >= 45.0) {
        printf("Division    = Second Division\n");
    } 
    else if (percentage >= 33.0) {
        printf("Division    = Third Division\n");
    } 
    else {
        printf("Division    = Fail\n");
    }

    return 0;
}



//16
#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume the first number is the maximum
    max = num1;

    // Compare with the second number
    if (num2 > max) {
        max = num2;
    }

    // Compare with the third number
    if (num3 > max) {
        max = num3;
    }

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}





//17
#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Reading three numbers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the maximum using logical AND (&&) operator
    if (num1 >= num2 && num1 >= num3) {
        printf("Maximum number is: %d\n", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) {
        printf("Maximum number is: %d\n", num2);
    } 
    else {
        printf("Maximum number is: %d\n", num3);
    }

    return 0;
}





//18
#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum using the conditional operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Print the maximum number
    printf("The maximum number is: %d\n", max);

    return 0;
}



//19
#include <stdio.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check if the character is a small case letter using the conditional operator
    (ch >= 'a' && ch <= 'z') 
        ? printf("'%c' is a small case letter.\n", ch) 
        : printf("'%c' is NOT a small case letter.\n", ch);

    return 0;
}



//20
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Ask the user to choose an arithmetic operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to clear the input buffer

    // Ask the user to input two numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on the chosen operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Check to avoid division by zero error
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        // Executed if the user inputs an operator other than +, -, *, or /
        default:
            printf("Error! The operator entered is not valid.\n");
    }

    return 0;
}



//21
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



//22
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= n; ++i) {
            factorial *= i; // equivalent to factorial = factorial * i
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}


//23
#include <stdio.h>

int main() {
    double base;
    int exponent;
    double result = 1.0;

    // Input base and exponent
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent (integer): ");
    scanf("%d", &exponent);

    // Handle positive exponents
    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } 
    // Handle negative exponents
    else {
        for (int i = 0; i > exponent; i--) {
            result /= base;
        }
    }

    // Display the result
    printf("%.2lf raised to the power of %d is %.4lf\n", base, exponent, result);

    return 0;
}


//24
#include <stdio.h>

int main() {
    int n;
    float x, y = 0.0;

    // Read values of x and n from the user
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Evaluate Y based on the value of n
    switch (n) {
        case 1:
            y = 1 + x;
            break;
        case 2:
            y = 1 + (x / n);
            break;
        case 3:
            y = 1 + (x * n); // Assuming 1 + xn means 1 + x * n
            break;
        default:
            // For n > 3 or n < 1
            y = 1 + (n * x);
            break;
    }

    // Display the result
    printf("The value of Y is: %.2f\n", y);

    return 0;
}



//25
#include <stdio.h>

int main() {
    int num, i;

    // Ask the user to input a number
    printf("Enter any number to print its table: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    printf("-----------------------------\n");

    // Loop to iterate from 1 to 10
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


//26
#include <stdio.h>

int main() {
    int i, n;
    int sumEven = 0;
    int sumOdd = 0;

    // Prompt the user to enter the upper limit N
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop from 1 to N to calculate the sums
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i; // Add to even sum if divisible by 2
        } else {
            sumOdd += i;  // Add to odd sum if not divisible by 2
        }
    }

    // Print the final results
    printf("\nSum of all Even numbers between 1 and %d = %d", n, sumEven);
    printf("\nSum of all Odd numbers between 1 and %d = %d\n", n, sumOdd);

    return 0;
}


//27
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


//28
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


//29
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number as 'n' will be modified in the loop
    original = n;

    // Logic to reverse the integer
    while (n != 0) {
        remainder = n % 10;                  // Extract the last digit
        reversed = reversed * 10 + remainder; // Append the digit to the reversed number
        n /= 10;                             // Remove the last digit from n
    }

    // Check if the original number and the reversed number are equal
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}


//30
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














