//According to the Gregorian calendar, it was Monday on the date 01/01/1900. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int isLeap(int year) {
	
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

int main() {
    int year, i, totalDays = 0;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    printf("Enter a year: ");
    scanf("%d", &year);

    for (i = 1900; i < year; i++) {
        totalDays += isLeap(i) ? 366 : 365;
    }

    printf("1st January %d is a %s\n", year, days[totalDays % 7]);
    
    return 0;
}

