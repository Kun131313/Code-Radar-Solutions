// Your code here...
#include <stdio.h>

int main() {
    char operator;
    double num1, num2;
    double result;
    scanf("%lf %lf", &num1, &num2);
    scanf("%c", &operator);

 

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%lf",  result);
            break;
        case '-':
            result = num1 - num2;
            printf("%lf",  result);
            break;
        case '*':
            result = num1 * num2;
            printf("%lf", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%lf", result);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("Error");
            break;
    }

    return 0;
}
