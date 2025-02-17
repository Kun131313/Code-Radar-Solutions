#include <stdio.h>

int main() {
    int num1, num2, greater;

  
    scanf("%d", &num1);


    scanf("%d", &num2);

    // Find the greater number
    if (num1 > num2) {
        greater = num1;
    } else {
        greater = num2;
    }

    // Print the greater number
    printf("%d",  greater);

    return 0;
}
