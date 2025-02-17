// Your code here...
#include <stdio.h>
#include <stdint.h>

int countLeadingZeros(uint32_t num) {
    int count = 0;

    // Iterate through each bit starting from the most significant bit (MSB)
    for (int i = 31; i >= 0; i--) {
        if ((num & (1 << i)) == 0) {
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    uint32_t num;

    scanf("%u", &num);

    // Count the leading zeros
    int leadingZeros = countLeadingZeros(num);

    // Print the result
    printf(" %d", leadingZeros);

    return 0;
}
