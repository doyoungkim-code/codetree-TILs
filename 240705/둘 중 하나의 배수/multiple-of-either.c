#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 3 == 0 || a % 5 == 0)
        printf("%d", 1);
    else
        printf("%d", 0);
    return 0;
}