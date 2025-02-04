#include <stdio.h>

int main() {
    float radius, area;
    const float pi = 3.14;

    // Taking the radius of the circle as input from the user
    scanf("%f", &radius);

    // Calculating the area of the circle
    area = pi * radius * radius;

    // Printing the area of the circle
    printf("Area: %.2f", area);

    return 0;
}
