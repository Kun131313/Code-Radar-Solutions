// Your code here...
#include <stdio.h>

int haveOppositeSigns(int x, int y) {
    return ((x < 0 && y > 0) || (x > 0 && y < 0));
}

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (haveOppositeSigns(num1, num2)) {
        printf("True", num1, num2);
    } else {
        printf("False", num1, num2);
    }

    return 0;
}
