#include <stdio.h>

int main() {
    FILE *fp1, *fp2, *fp3;
    char ch;
    char file1[100], file2[100], file3[100];

    printf("Enter name of first file: ");
    scanf("%s", file1);

    printf("Enter name of second file: ");
    scanf("%s", file2);

    printf("Enter name of merged file: ");
    scanf("%s", file3);

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");
    fp3 = fopen(file3, "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening files.");
        return 1;
    }

    // Merge contents of first file into the third file
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp3);
    }

    // Merge contents of second file into the third file
    while ((ch = fgetc(fp2)) != EOF) {
        fputc(ch, fp3);
    }

    printf("Files merged successfully.");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
This is the content of file 1.    
It has multiple lines.
This is the content of file 2.
It also has multiple lines.
Enter name of first file: file1.txt
Enter name of second file: file2.txt
Enter name of merged file: merged.txt
Files merged successfully.
// merged text
This is the content of file 1.
It has multiple lines.
This is the content of file 2.
It also has multiple lines.
