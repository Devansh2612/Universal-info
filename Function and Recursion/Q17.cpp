//Write a C program to find factorial of any number using recursion.

#include <stdio.h>

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial = %d\n", factorial(num));
    return 0;
}

