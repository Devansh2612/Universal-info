//Write a program to accept any number up to six digits and print, that in words. For example- 1265 = one two six five Write a program to enter a number and test whether it is a Fibonacci number or not.

#include <stdio.h>

void printWord(int digit) {
	
    char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    printf("%s ", words[digit]);
}

int main() {
    int num, rev = 0;
    printf("Enter a number (up to 6 digits): ");
    scanf("%d", &num);

    
    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    while (rev > 0) {
        printWord(rev % 10);
        rev /= 10;
    }

    return 0;
}

