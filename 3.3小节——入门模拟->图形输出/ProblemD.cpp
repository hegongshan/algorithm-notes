#include <cstdio>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j < n - i; j++) {
			printf("*");
			if (j < n - i - 1) {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++) {
			printf("*");
			if (j < i) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
