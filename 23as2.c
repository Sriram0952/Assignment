#include <stdio.h>

int main() {
    char ch;
    
    // prompt user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // check if character is an alphabet using ternary operator
    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("'%c' is an alphabet", ch) : printf("'%c' is not an alphabet", ch);
    
    return 0;
}
//output
int x = 10;
printf("The value of x is %d", x);
The value of x is 10

