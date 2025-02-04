#include <stdio.h>

int main() {
    double number;

    // Taking double-precision floating-point number as input from user
    scanf("%lf", &number);

    // Printing the input number
    printf("You entered: %.4lf", number);

    return 0;
}
