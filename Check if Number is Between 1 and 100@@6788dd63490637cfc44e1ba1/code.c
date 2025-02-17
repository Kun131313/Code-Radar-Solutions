// Your code here...
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is in the range 1 to 100 inclusive
    if (number >= 1 && number <= 100) {
        printf("In Range", number);
    } else {
        printf("Out of Range", number);
    }

    return 0;
}
