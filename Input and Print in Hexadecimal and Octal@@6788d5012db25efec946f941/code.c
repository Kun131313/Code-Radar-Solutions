#include <stdio.h>

int main() {
    int number;

    // Taking integer input from user
    printf("");
    scanf("%d", &number);

    // Printing hexadecimal and octal representation
    printf("Hexadecimal: %x\n", number);
    printf("Octal: %o\n", number);

    return 0;
}
