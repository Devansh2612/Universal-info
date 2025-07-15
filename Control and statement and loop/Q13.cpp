//Input a number and a digit and find whether the digit is present in the number or not, if present then count the number of times it occurs in the number.

#include <stdio.h>

int main() {
    int num, digit, count = 0, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter a digit to search: ");
    scanf("%d", &digit);

    temp = num;
    while (temp > 0) {
        if (temp % 10 == digit)
            count++;
        temp /= 10;
    }

    if (count > 0)
        printf("Digit %d is present %d time(s) in %d.\n", digit, count, num);
    else
        printf("Digit %d is not present in %d.\n", digit, num);

    return 0;
}

