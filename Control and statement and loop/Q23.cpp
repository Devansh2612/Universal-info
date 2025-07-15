//Write a program to find the value of one number raised to the power of another

#include <stdio.h>

int main() {
    int x, y, res = 1;
    
    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++)
        res *= x;

    printf("%d^%d = %d\n", x, y, res);
    
    return 0;
}

