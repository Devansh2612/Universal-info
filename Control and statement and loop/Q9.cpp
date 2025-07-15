//. Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include <stdio.h>

int main() {
    int length, breadth, area, peri;
    
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);

    area = length * breadth;
    peri = 2 * (length + breadth);

    if (area > peri)
        printf("Area (%d) is greater than Perimeter (%d).\n", area, peri);
    else
        printf("Perimeter (%d) is greater than or equal to Area (%d).\n", peri, area);

    return 0;
}

