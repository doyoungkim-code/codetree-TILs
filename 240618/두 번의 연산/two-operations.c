#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 2 == 1)
        a = a + 3;
    if(a % 3 == 0)
        a = a / 3;
    printf("%d", a);
    return 0;
}