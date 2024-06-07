#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d\n", a * a);
    if (a < 5)
        printf("tiny");
    return 0;
}