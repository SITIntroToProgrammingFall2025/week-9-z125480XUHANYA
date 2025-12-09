#include <stdio.h>

int main(void) {
    int A[2][3];
    int B[3][2];
    int C[2][2];
    int i, j, k;

    /* 读入第一个矩阵 A (2 x 3) */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    /* 读入第二个矩阵 B (3 x 2) */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("The first matrix you entered is \n");
    for (i = 0; i < 2; i++) {
        printf("%d %d %d\n", A[i][0], A[i][1], A[i][2]);
    }

    printf("The second matrix you entered is \n");
    for (i = 0; i < 3; i++) {
        printf("%d %d\n", B[i][0], B[i][1]);
    }

    /* 计算 C = A * B   (2x3) * (3x2) = (2x2) */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B :\n");
    for (i = 0; i < 2; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}
