//Write a C program to generate nth Fibonacci term using recursion.

#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the term (n): ");
    scanf("%d", &n);
    printf("Fibonacci term %d = %d\n", n, fibonacci(n));
    return 0;
}

