//If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.



#include<stdio.h>

int main(){
	int num, first, last;
	
	printf("Enter a 4 digit no :");
	scanf("%d",&num);
	
	last = num % 10;
	first = num / 1000;
	
	printf("Sum of first and last digit = %d\n", first + last);
	
	return 0;
}
