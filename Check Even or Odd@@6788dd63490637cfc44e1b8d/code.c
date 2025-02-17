// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if the number is even or odd
    if (num % 2 == 0) {
        printf("Even", num);
    } else {
        printf("Odd", num);
    }

    return 0;
}
