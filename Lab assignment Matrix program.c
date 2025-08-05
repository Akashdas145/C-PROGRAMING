#include <stdio.h>
int main() {
    int a[3][3], b[3][2], result[3][2] = {0};
    int i, j, k;
    printf("Enter elements of the first 3x3 matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
     }
    printf("Enter the elements of the second 3x2 matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
           }
        }
    }
    printf("Results of the matrix AxB :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;}
