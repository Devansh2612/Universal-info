//Accept the radius of the circle and calculate the area and perimeter of the circle.

#include<stdio.h>

int main(){
	float radius, area, perimeter;
	
	printf("Enter radius :");
	scanf("%f",&radius);
	
	area = 3.14* radius * radius;
	perimeter = 2 * 3.14 * radius;
	
	printf("Area = %.2f\n", area);
	printf("Perimeter = %.2f\n",perimeter);
	
	return 0;
}
