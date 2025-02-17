// Your code here...
#include <stdio.h>

int main() {
    int num1, num2, result;

    scanf("%d", &num1);
    scanf("%d", &num2);

    result = num1 >> num2;

    // Print the result
    printf("%d", result);

    return 0;
}
