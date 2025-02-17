// Your code here...
#include <stdio.h>

int main() {
    int num, n, result;

  
    scanf("%d", &num);
    scanf("%d", &n);

    // Set the nth bit to 1
    result = num | (1 << n);

    // Print the result
    printf("%d",  result);

    return 0;
}
