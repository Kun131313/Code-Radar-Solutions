// Your code here...
#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t num;

    scanf("%u", &num);

    // Check if the most significant bit (MSB) is set
    if (num & (1 << 31)) {
        printf("Set", num);
    } else {
        printf("Not Set", num);
    }

    return 0;
}
