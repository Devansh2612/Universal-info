// Rajesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary. 

#include<stdio.h>

int main(){
	float basic, da , hra, gross;
	
	printf("Enter basic salary :");
	scanf("%d",&basic);
	
	da = 0.40 * basic;
	hra = 0.20 * basic;
	gross = basic + da + hra;
	
	printf("Gross Salary = %.2f\n",gross);
	
	return 0;
}
