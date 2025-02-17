// Your code here...
#include <stdio.h>

int main() {
    int num, n, bit;

 
    scanf("%d", &num);

    scanf("%d", &n);

    // Retrieve the value of the nth bit
    bit = (num >> n) & 1;

    // Print the result
    printf("%d",  bit);

    return 0;
}
