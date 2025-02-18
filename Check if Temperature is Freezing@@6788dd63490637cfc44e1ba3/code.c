// Your code here...
#include <stdio.h>

int main() {
    float temperature;
    scanf("%f", &temperature);

    // Check if the temperature is freezing or above freezing
    if (temperature <= 0) {
        printf("Freezing");
    } else {
        printf("Above Freezing");
    }

    return 0;
}
