//If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <stdio.h>

int main() {
	//cp = cost price , sp = selling price
    float CP, SP, profitOrLoss;
    
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &CP, &SP);
    
    if (SP > CP) {
        profitOrLoss = SP - CP;
        printf("Profit = %.2f\n", profitOrLoss);
    }
	 else if (CP > SP) {
        profitOrLoss = CP - SP;
        printf("Loss = %.2f\n", profitOrLoss);
    } 
	else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

