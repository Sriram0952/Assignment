#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Using conditional operator to check if the input is an alphabet or not
    (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') ? printf("%c is an alphabet.", ch) : printf("%c is not an alphabet.", ch);

    return 0;
}
//output: Enter a character: a
a is an alphabet.//