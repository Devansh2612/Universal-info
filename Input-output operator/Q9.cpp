//Accept any five digit number and print the value of remainder after dividing by 3.


#include<stdio.h>

int main(){
	int num;
	
	printf("Enter 5 digit no :");
	scanf("%d",&num);
	
	printf("Reminder after dividing by 3 = %d\n", num % 3);
	
	return 0;
}
