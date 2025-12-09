#include <stdio.h>

int main(void) {
    int a[5];
    int i, j, tmp;

    /* input 5 numbers */
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    /* simple ascending sort (selection / bubble style都行) */
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    /* print sorted numbers on ONE line */
    for (i = 0; i < 5; i++) {
        printf("%d", a[i]);
        if (i < 4) {
            printf(" ");
        }
    }
    /* 结尾加换行更保险 */
    // printf("\n");

    return 0;
}
