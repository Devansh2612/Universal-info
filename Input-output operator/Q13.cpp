//Accepts marks in five subjects and calculate the total percentage marks.

#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, total, per;
    
    printf("Enter marks in 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    per = (total / 500) * 100;
    
    printf("Total Marks = %.2f\nPercentage = %.2f%%\n", total, per);
    
    return 0;
}

