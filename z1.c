#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // take input from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // find the maximum using the ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // print the maximum
    printf("The maximum number is %d", max);

    return 0;
}
//output: Enter three numbers: 1,2,3
The maximum number is 127//