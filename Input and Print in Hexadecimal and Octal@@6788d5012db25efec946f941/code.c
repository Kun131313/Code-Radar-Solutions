#include <stdio.h>

int main() {
    int number;

    // Taking integer input from user
    scanf("%d", &number);

    // Printing hexadecimal and octal representation
    printf("Hexadecimal: %X\n", number);
    printf("Octal: %o\n", number);

    return 0;
}
