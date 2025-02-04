#include <stdio.h>

int main() {
    int num1, num2;

  
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Checking if the first number is less than the second
    if (num1 < num2) {
        printf("True.\n", num1, num2);
    } else {
        printf("False.\n", num1, num2);
    }

    return 0;
}
