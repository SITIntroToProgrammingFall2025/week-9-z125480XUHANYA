#include <stdio.h>

int main(void) {
    int a[3][3];
    int i, j;

    /* 读取 3x3 数组（按行读，共 9 个整数） */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* 输出原矩阵 */
    printf("You entered\n");
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    }

    /* 输出水平翻转后的矩阵 */
    printf("Output\n");
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", a[i][2], a[i][1], a[i][0]);
    }

    return 0;
}
