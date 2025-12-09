#include <stdio.h>
#include <math.h>

int main() {
    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    char* name[] = { "Black", "Red", "Green", "Blue", "White" };
    int R[5] = { 0, 255, 0, 0, 255 };
    int G[5] = { 0, 0, 255, 0, 255 };
    int Bcol[5] = { 0, 0, 0, 255, 255 };

    double minDist = 1e18;
    int idx = 0;

    for (int i = 0; i < 5; i++) {
        double d = sqrt((r - R[i]) * (r - R[i]) +
            (g - G[i]) * (g - G[i]) +
            (b - Bcol[i]) * (b - Bcol[i]));
        if (d < minDist) {
            minDist = d;
            idx = i;
        }
    }

    printf("The nearest color is %s", name[idx]);
    return 0;
}
