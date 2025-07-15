//Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("Even number\n");
    else
        printf("Odd number\n");

    return 0;
}

