#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if(a >= 90)
    {
        if(b >= 95)
            printf("10");
        else if(b >= 90)
            printf("5");
        else
            printf("0");
    }
    else
        printf("0");
    return 0;
}