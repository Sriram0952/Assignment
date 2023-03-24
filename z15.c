#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], sum = 0;

    // Read the matrix from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print the diagonal elements and find their sum
    printf("Diagonal Elements are ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }

    // Print the sum of diagonal elements
    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}
Enter the number of rows and columns of the matrix: 3 3
Enter the elements of the matrix:
1 4 3
4 2 6
7 1 3
Diagonal Elements are 1 2 3 
Sum of diagonal elements = 6
