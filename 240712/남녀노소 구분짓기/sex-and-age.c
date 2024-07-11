#include <stdio.h>

int main() {

	int a, b;
	scanf("%d %d", &a, &b);

	if (a == 0) {
		if (b >= 19) {
			printf("MAN\n");
		}
		else {
			printf("BOY\n");
		}
	}
	else {
		if (b >= 19) {
			printf("WOMAN\n");
		}
		else {
			printf("GIRL\n");
		}
	}

	return 0;

}