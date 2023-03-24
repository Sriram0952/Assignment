#include <stdio.h>

int main() {
    FILE *source_file, *target_file;
    char source_filename[100], target_filename[100], c;

    printf("Enter the source filename: ");
    scanf("%s", source_filename);

    printf("Enter the target filename: ");
    scanf("%s", target_filename);

    // Open the source file in read mode
    source_file = fopen(source_filename, "r");

    if (source_file == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the target file in write mode
    target_file = fopen(target_filename, "w");

    if (target_file == NULL) {
        fclose(source_file);
        printf("Unable to create target file.\n");
        return 1;
    }

    // Copy the contents of the source file to the target file
    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, target_file);
    }

    // Close both files
    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully.\n");

    return 0;
}
Enter the source filename: source.txt
Enter the target filename: target.txt
File copied successfully.
