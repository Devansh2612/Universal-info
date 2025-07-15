//Write a program to print number in words using recursion. For example if we have a number 31246, then the program should print " Three one Two four Six

#include <stdio.h>

void printWords(int n) {
    if (n == 0)
        return;
    printWords(n / 10);

    switch (n % 10) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
        printf("Zero");
    else
        printWords(num);
    return 0;
}

