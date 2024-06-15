#include <stdio.h>

int main() {
    int n;
    char* name;
    scanf("%d", &n);
    if(n >= 3000)
        name = "book";
    else if(n >= 1000)
        name = "mask";
    else if(n >= 500)
        name = "pen";
    else
        name = "no";
    printf("%s", name);
    return 0;
}