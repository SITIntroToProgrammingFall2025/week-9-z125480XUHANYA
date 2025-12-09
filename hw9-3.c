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

    /* 计算 C = A * B   (2x3) * (3x2) = (2x2) */
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    /* 只输出结果矩阵 C */
    for (i = 0; i < 2; i++) {
        printf("%d %d\n", C[i][0], C[i][1]);
    }

    return 0;
}
