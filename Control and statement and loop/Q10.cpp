//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    printf("Enter coordinates of 3 points (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1))
        printf("All 3 points lie on the same straight line.\n");
    else
        printf("Points do not lie on the same straight line.\n");

    return 0;
}

