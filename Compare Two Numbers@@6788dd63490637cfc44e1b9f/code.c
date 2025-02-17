// Your code here...
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Compare the two numbers
    if (num1 == num2) {
        printf("Equal");
    } else if (num1 > num2) {
        printf("First", num1, num2);
    } else {
        printf("Second", num2, num1);
    }

    return 0;
}
