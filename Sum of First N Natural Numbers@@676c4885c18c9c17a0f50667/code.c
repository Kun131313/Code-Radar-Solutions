// Your code here...
#include <stdio.h>

int main() {
    int N, i, sum = 0;


    scanf("%d", &N);

    // Calculate the sum of first N natural numbers
    for (i = 1; i <= N; i++) {
        sum += i;
    }

    // Display the result
    printf("%d", N, sum);

    return 0;
}
