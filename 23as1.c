#include <stdio.h>

int main() {
    int a, b, c, max;
    
    // prompt user to input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // use ternary operator to find maximum of three numbers
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    
    // print the maximum number
    printf("Maximum of three numbers is: %d", max);
    
    return 0;
}
//output 
Enter three numbers: 10 25 5
Maximum of three numbers is: 25
