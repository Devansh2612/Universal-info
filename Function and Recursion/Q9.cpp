//Write a function cube sum ( ) that accepts an integer and returns the sum of the cubes of individual digits of that number. Use this program to print Armstrong numbers in a given range.

#include <stdio.h>

int cubeSum(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum;
}

int main() {
    int start = 1, end = 999;
    printf("Armstrong numbers between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (cubeSum(i) == i)
            printf("%d ", i);
    }

    return 0;
}

