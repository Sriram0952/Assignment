#include <stdio.h>

void printEvenOdd(int cur, int limit) {
    if (cur > limit) {
        return;
    }

    if (cur % 2 == 0) {
        printf("%d ", cur);
    }

    printEvenOdd(cur+1, limit);
}

int main() {
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Even/odd numbers from %d to %d are: ", lower, upper);
    printEvenOdd(lower, upper);
    printf("\n");

    return 0;
}
