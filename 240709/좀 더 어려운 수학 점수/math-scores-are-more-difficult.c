#include <stdio.h>

int main() {
    int aa, ab;
    int ba, bb;

    scanf("%d %d\n%d %d", &aa, &ab, &ba, &bb);
    if(aa > ba)
        printf("A");
    else if(aa < ba)
        printf("B");
    else
    {
        if(ab > bb)
            printf("A");
        else
            printf("B");
    }
    return 0;
}