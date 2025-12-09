#include <stdio.h>

int main(void) {
    int a[3][3];
    int i, j;

    /* input 3x3 array */
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* print original matrix */
    printf("You entered\n");
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", a[i][0], a[i][1], a[i][2]);
    }

    /* print flipped result */
    printf("Output\n");
    for (i = 0; i < 3; i++) {
        printf("%d %d %d\n", a[i][2], a[i][1], a[i][0]);
    }

    return 0;
}
