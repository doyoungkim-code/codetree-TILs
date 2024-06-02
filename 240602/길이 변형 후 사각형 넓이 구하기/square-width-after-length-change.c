#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
	a += 8;
	printf("%d\n", a);
	b *= 3;
	printf("%d\n%d", b, a * b);
	return 0;
}