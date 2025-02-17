// Your code here...
#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    // Determine if the number is positive, negative, or zero
    if (num > 0) {
        printf("Postive", num);
    } else if (num < 0) {
        printf("Negative", num);
    } else {
        printf("Zero");
    }

    return 0;
}
