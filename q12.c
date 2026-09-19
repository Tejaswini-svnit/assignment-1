#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // %c displays the character, %d displays its ASCII value
    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}
