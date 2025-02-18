// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    // Check if the first number is the square of the second number
    if (num1<18) {
        printf("Eligible", num1, num2);
    } else {
        printf("Not Eligible", num1, num2);
    }

    return 0;
}
