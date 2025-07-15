//If a five-digit number is input through the keyboard, write a program to reverse the number.


#include<stdio.h>

int main(){
	int num, rev = 0;
	
	printf("Enter a 5 digit no :");
	scanf("%d",&num);
	
	while(num!=0){
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}
	
	printf("Reversed No = %d\n", rev);
	
	return 0;
}
