#include <stdio.h>

int find_first_occurrence(int arr[], int N, int X) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == X) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 7, 2, 1, 8, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 8;
    int index = find_first_occurrence(arr, N, X);
    if (index == -1) {
        printf("%d not found in array\n", X);
    } else {
        printf("%d found at index %d\n", X, index);
    }
    return 0;
}
// output
8 not found in array
