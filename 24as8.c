#include <stdio.h>

#define ROW 3
#define COL 3

void multiply_matrices(int *mat1, int *mat2, int *res);

int main() {
    int mat1[ROW][COL], mat2[ROW][COL], res[ROW][COL];
    int *ptr1, *ptr2, *ptr_res;
    int i, j;

    printf("Enter elements in first matrix of size %dx%d\n", ROW, COL);
    ptr1 = &mat1[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", ptr1);
            ptr1++;
        }
    }

    printf("Enter elements in second matrix of size %dx%d\n", ROW, COL);
    ptr2 = &mat2[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", ptr2);
            ptr2++;
        }
    }

    ptr1 = &mat1[0][0];
    ptr2 = &mat2[0][0];
    ptr_res = &res[0][0];

    multiply_matrices(ptr1, ptr2, ptr_res);

    printf("Product of both matrices is :\n");
    ptr_res = &res[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", *ptr_res);
            ptr_res++;
        }
    1   printf("\n");
    }

    return 0;
}

void multiply_matrices(int *mat1, int *mat2, int *res) {
    int i, j, k;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            *(res + i * ROW + j) = 0;
            for (k = 0; k < COL; k++) {
                *(res + i * ROW + j) += *(mat1 + i * ROW + k) * *(mat2 + k * ROW + j);
            }
        }
    }
}
 // output
  Enter elements in first matrix of size 3x3
10 20 30
40 50 60
70 80 90
Enter elements in second matrix of size 3x3
1 2 3
4 5 6
7 8 9
Product of both matrices is :
300 360 420
660 810 960
1020 1260 1500
