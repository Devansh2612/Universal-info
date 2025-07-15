//Enter the temperature in Celsius and convert that into Fahrenheit.

#include<stdio.h>

int main(){
	float celsius, fahrenheit;
	
	printf("Enter temperature in celsius :");
	scanf("%f",&celsius);
	
	fahrenheit = ( celsius * 9 / 5)+ 32;
	
	printf("Fahrenheit = %.2f\n", fahrenheit);
	
	return 0;
}
