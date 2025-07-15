//Write a program to accept the number in decimal and print the number in octal and hexadecimal. ,

#include<stdio.h>

int main(){
	int num;
	
	printf("Enter decimal no:");
	scanf("%d",&num);
	
	printf("Octal = %o\n", num);
	printf("Hexidecimal = %X\n",num);
	
	return 0;
}
