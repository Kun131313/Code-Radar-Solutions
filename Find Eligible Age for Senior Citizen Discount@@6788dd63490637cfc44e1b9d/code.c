// Your code here...
#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);

    // Check if the person is eligible for a senior citizen discount
    if (age >= 60) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
