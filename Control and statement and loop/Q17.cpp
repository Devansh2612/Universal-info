//Write a program to find out the value of x raised to the power y, where x and yare positive integers.

#include <stdio.h>

int main() {
	//res = result
	
    int x, y, res = 1;
    
    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
        res *= x;
    }

    printf("%d^%d = %d\n", x, y, res);
    return 0;
}

