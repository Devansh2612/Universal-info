//Write a program to accept the principal, rate, and number of years and find out the simple interest.

#include <stdio.h>

int main() {
    float principal, rate, time, SI;
    
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    
    SI = (principal * rate * time) / 100;
    
    printf("Simple Interest = %.2f\n", SI);
    
    return 0;
}

