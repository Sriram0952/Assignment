#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // if the number is odd
            sum += i;       // add it to the sum
        }
    }

    printf("The sum of all odd numbers from 1 to %d is %d\n", n, sum);
    return 0;
}
#include <stdio.h>

int main() {
    int start, end, sum = 0;
    printf("Enter the start and end of the range (separated by a space): ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {  // if the number is odd
            sum += i;       // add it to the sum
        }
    }

    printf("The sum of all odd numbers from %d to %d is %d\n", start, end, sum);
    return 0;
}
//output
Enter a positive integer: 10
The sum of all odd numbers from 1 to 10 is 25
Enter the start and end of the range (separated by a space): 3 9
The sum of all odd numbers from 3 to 9 is 24
