// Your code here...
#include <stdio.h>

int main() {
    int num, n, result;
    scanf("%d", &num);
    scanf("%d", &n);

    result = num & ~(1 << n);

    // Print the result
    printf("%d",  result);

    return 0;
}
