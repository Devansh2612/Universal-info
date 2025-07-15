//A positive integer is entered through the keyboard; write a function to find the binary equivalent of this number using recursion.

#include <stdio.h>

void toBinary(int num) {
    if (num == 0)
        return;
    toBinary(num / 2);
    printf("%d", num % 2);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Binary: ");
    if (n == 0)
        printf("0");
    else
        toBinary(n);
    return 0;
}

