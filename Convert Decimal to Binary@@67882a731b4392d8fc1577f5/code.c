// Your code here...
#include <stdio.h>

void printBinary(int num) {
    // Create a variable to store the mask
    unsigned int mask = 1 << 31; // Assuming a 32-bit integer

    // Print the binary representation
    for (int i = 0; i < 32; i++) {
        // Use bitwise AND to check each bit
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        // Shift the mask to the right
        mask >>= 1;

        // Optional: Print a space after every 4 bits for better readability
        if ((i + 1) % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int num;


    scanf("%d", &num);

    // Print the binary representation
    printf("%d", num);
    printBinary(num);

    return 0;
}
