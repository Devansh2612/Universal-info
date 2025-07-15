//A positive integer is entered through the keyboard; write a program to obtain the prime factors of the number. Modify the function suitably to obtain the prime factors recursively

#include <stdio.h>

void primeFactors(int num) {
    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}

