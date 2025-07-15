//Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include <stdio.h>

int sumNatural(int n) {
    if (n == 1)
        return 1;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum = %d\n", sumNatural(n));
    return 0;
}

