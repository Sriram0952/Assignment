#include <stdio.h>

int isPerfect(int num);

int main() {
    int lower, upper, i;

    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &lower);

    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &upper);

    printf("The perfect numbers between %d to %d are :\n", lower, upper);

    for (i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            printf("%d  ", i);
        }
    }

    return 0;
}

int isPerfect(int num) {
    int sum = 0, i;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        return 1;
    }
    return 0;
}
