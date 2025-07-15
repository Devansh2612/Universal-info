//Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.

#include <stdio.h>

int main() {
    for (int i = 1; i <= 1000; i++) {
        printf("%c ", 1); 
        if (i % 50 == 0)
            printf("\n");
    }
    return 0;
}

