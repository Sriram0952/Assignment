#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

void swap(char *a, char *b) {
    char temp[MAX_LENGTH];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort_names(char names[MAX_NAMES][MAX_LENGTH], int num_names, char order) {
    int i, j;
    for (i = 0; i < num_names - 1; i++) {
        for (j = i + 1; j < num_names; j++) {
            if ((order == 'A' && strcmp(names[i], names[j]) > 0) ||
                (order == 'D' && strcmp(names[i], names[j]) < 0)) {
                swap(names[i], names[j]);
            }
        }
    }
}

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int num_names, i;
    char order;

    printf("Enter the number of names: ");
    scanf("%d", &num_names);

    printf("Enter the names:\n");
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter the sorting order (A/D): ");
    scanf(" %c", &order);

    sort_names(names, num_names, order);

    printf("Sorted names:\n");
    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
//output : Enter the number of names: 5
Enter the names:
Banana
Carrot
Radish
Apple
Jack
Enter the sorting order (A/D): A
Sorted names:
Apple
Banana
Carrot
Jack
Radish//