//Write a C program to find sum of all even or odd numbers in given range using recursion.

#include <stdio.h>

int sumEven(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 == 0)
        return start + sumEven(start + 1, end);
    return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end)
        return 0;
    if (start % 2 != 0)
        return start + sumOdd(start + 1, end);
    return sumOdd(start + 1, end);
}

int main() {
    int choice, start, end;
    printf("Enter range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Enter 1 for Even Sum, 2 for Odd Sum: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Even sum = %d\n", sumEven(start, end));
    else
        printf("Odd sum = %d\n", sumOdd(start, end));

    return 0;
}

