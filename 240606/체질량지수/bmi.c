#include <stdio.h>

int main() {
    int h, w;
    double b;
    scanf("%d %d", &h, &w);
    b = (10000 * w) / (h * h);
    printf("%.0lf\n", b);
    if (b >= 25)
        printf("Obesity");
    return 0;
}