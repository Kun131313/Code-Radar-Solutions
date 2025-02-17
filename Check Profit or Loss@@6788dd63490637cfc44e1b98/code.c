// Your code here...
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss;


    scanf("%f", &costPrice);
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    profitLoss = sellingPrice - costPrice;

    // Determine and print the result
    if (profitLoss > 0) {
        printf("Profit", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss", -profitLoss);
    } else {
        printf("No Profit No Loss.");
    }

    return 0;
}
