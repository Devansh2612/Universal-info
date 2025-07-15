//Write a program to find the factorial value of any number entered through the keyboard. Two numbers are entered through the keyboard.

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial = %llu\n", fact);
    return 0;
}

