//Write a function that accepts a character in lower case and returns its upper case equivalent

#include <stdio.h>

char toUpper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        return ch - 32;
    return ch;
}

int main() {
    char ch;
    printf("Enter lowercase character: ");
    scanf(" %c", &ch);
    printf("Uppercase: %c\n", toUpper(ch));
    return 0;
}

