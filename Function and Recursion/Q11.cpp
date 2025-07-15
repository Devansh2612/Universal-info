//Write a C program to print all even or odd numbers in given range using recursion .

#include <stdio.h>

void printEven(int start, int end) {
    if (start > end)
        return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEven(start + 1, end);
}

void printOdd(int start, int end) {
    if (start > end)
        return;
    if (start % 2 != 0)
        printf("%d ", start);
    printOdd(start + 1, end);
}

int main() {
    int choice, start, end;
    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Enter 1 for Even, 2 for Odd: ");
    scanf("%d", &choice);

    if (choice == 1)
        printEven(start, end);
    else
        printOdd(start, end);

    return 0;
}

