#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define MAX_LENGTH 100

int main() {
    char filename[MAX_LENGTH];
    char lines[MAX_LINES][MAX_LENGTH];
    int num_lines = 0;

    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s\n", filename);
        exit(1);
    }

    while (fgets(lines[num_lines], MAX_LENGTH, file)) {
        num_lines++;
    }

    printf("The content of the file %s are:\n", filename);
    for (int i = 0; i < num_lines; i++) {
        printf("%s", lines[i]);
    }

    fclose(file);

    return 0;
}
