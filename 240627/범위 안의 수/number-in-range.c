#include <stdio.h>

int main() {

	int a;
	scanf("%d", &a);

	if (1 <= a && a <= 100) {
		printf("yes");
	}
	else {
		printf("no");
	}

	return 0;

}