#include <stdio.h>

int main(void) {
    int a[3][3];
    int b[3][3];
    int i, j;

    /* 读取 3x3 矩阵（按行） */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* 水平翻转：左右镜像，结果存到 b */
    for (i = 0; i < 3; i++) {
        b[i][0] = a[i][2];
        b[i][1] = a[i][1];
        b[i][2] = a[i][0];
    }

    /* 只输出翻转后的矩阵 */
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", b[i][0], b[i][1], b[i][2]);
    }

    return 0;
}
