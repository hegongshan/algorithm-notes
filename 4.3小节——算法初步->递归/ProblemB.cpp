#include <cstdio>

int fibonacci(int x) {
	if (x == 0) {
		return 0;
	}
	if (x == 1) {
		return 1;
	}
	return fibonacci(x - 1) + fibonacci(x - 2);
}

int main() {
	int m, n;
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i - 1; j++) {
				printf("  ");
			}
			for (int j = 0; j < 2 * i + 1; j++) {
				printf("%d", fibonacci(j));
				if (j < 2 * i) {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
