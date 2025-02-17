// Your code here...
#include <stdio.h>

int main() {
    float side1, side2, side3;


    scanf("%f", &side1);
    scanf("%f", &side2);
    scanf("%f", &side3);

    // Check if the sides form a valid triangle
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("Valid", side1, side2, side3);
    } else {
        printf("Not Valid", side1, side2, side3);
    }

    return 0;
}
