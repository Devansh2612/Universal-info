//The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.

#include<stdio.h>

int main(){
	float km, meter, feet, inches, cm;
	
	printf("Enter the distance in km :");
	scanf("%f",&km);
	
	meter = km * 1000;
	cm = meter * 100;
	inches = meter * 39.37;
	feet = meter * 3.28;
	
	
	printf("Meter : %.2f\nCM : %.2f\nInches : %.2f\nFeet : %.2f\n",meter, cm, inches, feet);
	
	return 0;
}
