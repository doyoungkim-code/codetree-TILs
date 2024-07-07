#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a <= 5 && a >= 3) {
		printf("Spring");
	}
    if (a <= 8 && a >= 6) {
		printf("Summer");
	}
    if (a <= 11 && a >= 9) {
		printf("Fall");
	}
    if (a == 12 || a <= 2) {
		printf("Winter");
	}
    return 0;
}