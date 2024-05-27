#include <stdio.h>

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int temp = 0;
    
    temp = b;
    b = a;
    a = c;
    c = temp;

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}