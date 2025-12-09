#include <stdio.h>

int main(void) {
    int a[5];
    int i, j, tmp;

    /* 读取 5 个数 */
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    /* 从小到大排序 */
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    /* 一行输出：用空格隔开，最后加换行 */
    for (i = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
