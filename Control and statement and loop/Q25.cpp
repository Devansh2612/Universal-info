//25.Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)

#include <stdio.h>

int main() {
    int i, j, isPrime;

    for (i = 2; i <= 300; i++) {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}



