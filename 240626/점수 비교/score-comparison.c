#include <stdio.h>

int main() {

	int a, b, c, d;
	scanf("%d%d\n", &a, &b);
    scanf("%d%d", &c, &d);
    printf("%d", a > c && b > d);
	return 0;
}