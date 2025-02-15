// Your code here...#include <stdio.h>

int main() {
    int num1, num2;

    // Taking two integers as input from the use
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Checking if the first number is greater than the second
    if (num1 <= num2) {
        printf("True", num1, num2);
    } else {
        printf("False", num1, num2);
    }

    return 0;
}
