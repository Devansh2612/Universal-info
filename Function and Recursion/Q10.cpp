//Write a C program to print all natural numbers between 1 to n using recursion.

#include <stdio.h>

void printNatural(int n) {
    if (n == 0)
        return;
    printNatural(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNatural(n);
    return 0;
}

