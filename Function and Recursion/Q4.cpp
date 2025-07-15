//Write a C function to evaluate the series sin(x) = x - (x 3 / 3!) + (x 5 / 5!) - (x 7 / 7!) +……… to five significant digits.

#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    float x, result = 0;
    int sign = 1;

    printf("Enter x in degrees: ");
    scanf("%f", &x);
    x = x * (3.14159 / 180); 

    for (int i = 1; i <= 9; i += 2) {
        result += sign * pow(x, i) / factorial(i);
        sign *= -1;
    }

    printf("sin(x) ˜ %.5f\n", result);
    return 0;
}

