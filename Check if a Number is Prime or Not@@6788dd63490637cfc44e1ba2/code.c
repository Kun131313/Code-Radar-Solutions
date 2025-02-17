// Your code here...
#include <stdio.h>

int main() {
    int number, i, flag = 0;

    scanf("%d", &number);

    // Check if the number is prime
    if (number <= 1) {
        flag = 1;
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    // Display the result
    if (flag == 0) {
        printf("Prime", number);
    } else {
        printf("Not Prime", number);
    }

    return 0;
}
