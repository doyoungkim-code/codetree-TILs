#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
	if (a % 4 == 0) {
		if (a % 100 == 0 && a % 400 > 0) {
			printf("false\n");
		}
		else {
			printf("true\n");
		}
	}
	else {
        printf("false\n");
	}

    return 0;
}