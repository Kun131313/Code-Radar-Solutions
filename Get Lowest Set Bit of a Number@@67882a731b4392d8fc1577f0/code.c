// Your code here...
#include <stdio.h>

int findLowestSetBitPosition(int num) {
    int position = 1; // Start with position 1 (1-based index)
    
    // Iterate until the first set bit (1) is found
    while (!(num & 1)) {
        num >>= 1; // Right shift the number
        position++;
    }
    
    return position;
}

int main() {
    int num;

    scanf("%d", &num);

    // Check if the number is non-zero
    if (num != 0) {
        int position = findLowestSetBitPosition(num);
        printf("%d",  position);
    } else {
        printf("%d", position);
    }

    return 0;
}
