#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", 100 == a ? "pass" : "failure");
    return 0;
}