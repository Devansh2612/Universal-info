//Accept any two numbers, if the first number is greater than second then print the sum of these two numbers, otherwise print their difference.

#include<stdio.h>

int main(){
	int a, b;
	
	printf("Enter two no :");
	scanf("%d %d",&a, &b);
	
	if(a > b){
		printf("Sum = %d\n", a + b);
	}
	else{
		printf("Differnce = %d\n", b - a);
	}
	
	
	return 0;
}
