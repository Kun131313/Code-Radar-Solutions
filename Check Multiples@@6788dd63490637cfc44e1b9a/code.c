// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    // Check if num1 is a multiple of num2
    if (num1 % num2 == 0) {
        printf("Yes", num1, num2);
    } else {
        printf("No", num1, num2);
    }

    return 0;
}
