// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;


    scanf("%d", &num1);
    scanf("%d", &num2);

    // Swap the numbers using XOR operator
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    // Print the swapped values
    printf("%d", num1);
    printf("%d", num2);

    return 0;
}
