#include <stdio.h>

int main() {
    FILE *source_file, *destination_file;
    char source_name[20], destination_name[20];
    char c;

    // Get source file name from user
    printf("Enter the name of the source file: ");
    scanf("%s", source_name);

    // Open source file
    source_file = fopen(source_name, "r");

    if (source_file == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    // Get destination file name from user
    printf("Enter the name of the destination file: ");
    scanf("%s", destination_name);

    // Open destination file
    destination_file = fopen(destination_name, "w");

    if (destination_file == NULL) {
        printf("Could not open destination file.\n");
        return 1;
    }

    // Copy contents of source file to destination file
    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, destination_file);
    }

    // Close files
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully.\n");

    return 0;
}
