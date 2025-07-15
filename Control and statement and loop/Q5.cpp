//A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not

#include <stdio.h>

int main() {
	
    int num, rev = 0, org, digit;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &num);
    org = num;

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reversed Number = %d\n", rev);

    if (org == rev)
        printf("Original and reversed numbers are equal\n");
    else
        printf("Original and reversed numbers are NOT equal\n");

    return 0;
}

