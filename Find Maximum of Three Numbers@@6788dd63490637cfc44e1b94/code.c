// Your code here...
#include <stdio.h>

int main() {
    int num1, num2, num3, max;


    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    // Find the maximum number
    if (num1 > num2 && num1 > num3) {
        max = num1;
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
    } else {
        max = num3;
    }

    // Print the maximum number
    printf("%d", max);

    return 0;
}
