#include <stdio.h>

struct Student {
    char name[50];
    int python;
    int c;
    int maths;
    int physics;
    int total;
    float aggregate;
    char grade[20];
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks in python for %s: ", students[i].name);
        scanf("%d", &students[i].python);
        printf("Enter the marks in c programming for %s: ", students[i].name);
        scanf("%d", &students[i].c);
        printf("Enter the marks in mathematics for %s: ", students[i].name);
        scanf("%d", &students[i].maths);
        printf("Enter the marks in physics for %s: ", students[i].name);
        scanf("%d", &students[i].physics);

        // Calculate total and aggregate
        students[i].total = students[i].python + students[i].c + students[i].maths + students[i].physics;
        students[i].aggregate = (float) students[i].total / 4;

        // Determine grade
        if (students[i].aggregate >= 75) {
            sprintf(students[i].grade, "DISTINCTION");
        } else if (students[i].aggregate >= 60) {
            sprintf(students[i].grade, "FIRST DIVISION");
        } else if (students[i].aggregate >= 50) {
            sprintf(students[i].grade, "SECOND DIVISION");
        } else if (students[i].aggregate >= 40) {
            sprintf(students[i].grade, "THIRD DIVISION");
        } else {
            sprintf(students[i].grade, "FAIL");
        }

        printf("\n");
    }

    // Display the results for each student
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Total: %d\n", students[i].total);
        printf("Aggregate: %.1f\n", students[i].aggregate);
        printf("Grade: %s\n", students[i].grade);
        printf("\n");
    }

    return 0;
}
Test Case 1:
Input:
Enter the number of students: 1
Enter the name of student 1: John
Enter the marks in python for John: 18
Enter the marks in c programming for John: 76
Enter the marks in mathematics for John: 93
Enter the marks in physics for John: 65

Output:
Name: John
Total: 252
Aggregate: 63.0
Grade: FIRST DIVISION

Test Case 2:
Input:
Enter the number of students: 1
Enter the name of student 1: Jane
Enter the marks in python for Jane: 73
Enter the marks
Test Case 1:
Input:
Enter the number of students: 1
Enter the name of student 1: John
Enter the marks in python for John: 18
Enter the marks in c programming for John: 76
Enter the marks in mathematics for John: 93
Enter the marks in physics for John: 65

Output:
Name: John
Total: 252
Aggregate: 63.0
Grade: FIRST DIVISION

Test Case 2:
Input:
Enter the number of students: 1
Enter the name of student 1: Jane
Enter the marks in python for Jane: 73
Enter the marks
