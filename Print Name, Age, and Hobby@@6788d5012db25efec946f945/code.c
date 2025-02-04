#include <stdio.h>

int main() {
    char name[100], hobby[100];
    int age;

    // Taking the user's name as input
    
    scanf("%99s", name);

    // Taking the user's age as input
    scanf("%d", &age);

    // Taking the user's favorite hobby as input
    scanf("%99s", hobby);

    // Printing the user's information
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Favorite Hobby: %s\n", hobby);

    return 0;
}
