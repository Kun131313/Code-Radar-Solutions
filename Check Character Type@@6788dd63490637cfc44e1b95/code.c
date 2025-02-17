// Your code here...
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("Digit", ch);
    }
    // Check if the character is a letter
    else if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("Vowel", ch);
        }
        // If it's not a vowel, it must be a consonant
        else {
            printf("Consonant", ch);
        }
    }
    // If it's neither a digit nor a letter, it must be a special character
    else {
        printf("Specil character", ch);
    }

    return 0;
}
