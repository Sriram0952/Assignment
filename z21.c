#include <stdio.h>

void square(int n) {
    int result = n * n;
    printf("The square of %d is %d\n", n, result);
}

void cube(int n) {
    int result = n * n * n;
    printf("The cube of %d is %d\n", n, result);
}

void calculate(int n, void (*function)(int)) {
    function(n);
}

int main() {
    int     num;
    printf("Enter a number: ");
    scanf("%d", &num);
    calculate(num, square);
    calculate(num, cube);
    return 0;
}
Enter a number: 5
The square of 5 is 25
The cube of 5 is 125
