// Your code here...
#include <stdio.h>

int main() {
    int number, quotient;
    scanf("%d", &number);

    // Divide the number by 2 and store the quotient
    quotient = number / 2;

    // Check if the number is even or odd
    if (number == quotient * 2) {
        printf("Even", number);
    } else {
        printf("Odd", number);
    }

    return 0;
}
