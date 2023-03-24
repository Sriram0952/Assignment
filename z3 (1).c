#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum of all odd numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
//output: Enter a positive integer: 3
Sum of all odd numbers from 1 to 3 is 4//