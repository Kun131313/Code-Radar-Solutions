#include <stdio.h>

int main() {
    int num1, num2, num3;
    double average;

    // Taking three integers as input from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0;

    // Printing the average
    printf("Average: %.2ln", average);

    return 0;
}
