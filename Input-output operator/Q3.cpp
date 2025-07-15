//3. If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’)

#include<stdio.h>

int main(){
	int num, sum = 0, digit;
	
	printf("Enter a 5 digit no :");
	scanf("%d",&num);
	
	while(num>0){
		digit = num %10;
		sum += digit;
		num /= 10;
	}
	
	printf("Sum of digit = %d\n", sum);
	
	return 0;
}
