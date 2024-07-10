#include <stdio.h>

int main() {
    int a, b;
    char ac, bc;
    scanf("%d %c", &a, &ac);
    scanf("%d %c", &b, &bc);
    printf("%d",((19 <= a && ac == 'M') || (19 <= b && bc == 'M')));
    return 0;
}