#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;

    a = b = c;
    printf("%d %d %d", a, b, c);
    return 0;
}