#include <stdio.h>

char hexDigit(int x) {
    if (x < 10) return '0' + x;
    return 'A' + (x - 10);
}

int main() {
    int r, g, b;
    scanf("%d", &r);
    scanf("%d", &g);
    scanf("%d", &b);

    char hex[7];
    hex[0] = hexDigit(r / 16);
    hex[1] = hexDigit(r % 16);
    hex[2] = hexDigit(g / 16);
    hex[3] = hexDigit(g % 16);
    hex[4] = hexDigit(b / 16);
    hex[5] = hexDigit(b % 16);
    hex[6] = '\0';

    printf("The hex code is #%s", hex);

    return 0;
}
