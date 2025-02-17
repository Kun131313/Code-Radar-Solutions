// Your code here...
#include <stdio.h>

int countTrailingZeros(int num) {
    int count = 0;

    // Count trailing zeros
    while ((num & 1) == 0 && num != 0) {
        count++;
        num >>= 1; // Right shift the number
    }

    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    // Count the trailing zeros
    int trailingZeros = countTrailingZeros(num);

    // Print the result
    printf("%d",  trailingZeros);

    return 0;
}
