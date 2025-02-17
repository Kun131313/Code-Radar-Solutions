// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    // Check if the first number is the square of the second number
    if (num1 == num2 * num2) {
        printf("Yes", num1, num2);
    } else {
        printf("No", num1, num2);
    }

    return 0;
}
