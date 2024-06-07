#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (80 <= a)
        printf("pass");
    else
        printf("%d more score", 80 - a);
    return 0;
}