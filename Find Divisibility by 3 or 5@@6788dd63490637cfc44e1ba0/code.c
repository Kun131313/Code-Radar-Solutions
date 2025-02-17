// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check divisibility by 3 and 5
    if (number % 3 == 0 && number % 5 == 0) {
        printf("Divisible by Both", number);
    } else if (number % 3 == 0) {
        printf("Divisible by 3", number);
    } else if (number % 5 == 0) {
        printf("Divisible by 5", number);
    } else {
        printf("Not Divisible", number);
    }

    return 0;
}
