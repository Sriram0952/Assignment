#include <stdio.h>

void print_pattern(int n) {
    int i, j, k;

    for(i = 0; i < n; i++) {
        // Print spaces
        for(j = 0; j < i; j++) {
            printf("  ");
        }

        // Print letters in ascending order
        for(k = 0; k < (n-i); k++) {
            printf("%c ", 'A'+k);
        }

        // Print letters in descending order
        for(k = (n-i-2); k >= 0; k--) {
            printf("%c ", 'A'+k);
        }

        printf("\n");
    }
}

int main() {
    int n = 5;
    print_pattern(n);
    return 0;
}
    A B C D E D C B A 
  A B C D C B A 
    A B C B A 
      A B A 
        A 
