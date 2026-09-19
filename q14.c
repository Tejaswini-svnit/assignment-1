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
