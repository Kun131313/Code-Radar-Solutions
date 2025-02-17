// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("Positive", number);
    } else if (number < 0) {
        printf("Negative", number);
    } else {
        printf("Zero");
    }

    return 0;
}
