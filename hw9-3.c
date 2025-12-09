#include <stdio.h>

int main() {
    int A[3][2], B[2][3], C[3][3];
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("The first matrix you entered is \n");
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", A[i][0], A[i][1], A[i][2 - 1]);
    }

    printf("The second matrix you entered is \n");
    for (i = 0; i < 2; i++) {
        printf("%d %d %d\n", B[i][0], B[i][1], B[i][2]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for (i = 0; i < 3; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}
