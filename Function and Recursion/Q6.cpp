//Write a program to find out the roots of quadratic equation ax2 + bx + c = O

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real and distinct roots: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Real and equal roots: %.2f\n", root1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-discriminant) / (2 * a);
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", real, imag, real, imag);
    }

    return 0;
}

