// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check if num1 is greater than or equal to num2
    if (num1 >= num2) {
        printf("Yes", num1, num2);
    } else {
        printf("No", num1, num2);
    }

    return 0;
}
