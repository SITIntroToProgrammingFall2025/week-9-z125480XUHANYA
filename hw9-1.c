#include <stdio.h>

int main() {
    float a, b, c, d;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    printf("You entered\n");
    printf("%.0f %.0f\n", a, b);
    printf("%.0f %.0f\n", c, d);

    float det = a * d - b * c;
    printf("Determinant is %f", det);

    return 0;
}
