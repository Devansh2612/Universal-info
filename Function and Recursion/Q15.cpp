//Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == reverse(num, 0))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is NOT a Palindrome\n", num);

    return 0;
}

