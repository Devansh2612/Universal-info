//Write a program to print all the Pythagorean triplets less than 50. Any three numbers x, y, z are called Pythagorean triplets if x < .Y < z and X2+y2 = Z

#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("Fibonacci number\n");
        return 0;
    }

    while (1) {
        c = a + b;
        if (c == num) {
            printf("Fibonacci number\n");
            break;
        }
        if (c > num) {
            printf("Not a Fibonacci number\n");
            break;
        }
        a = b;
        b = c;
    }

    return 0;
}

