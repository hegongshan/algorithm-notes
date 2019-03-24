#include <stdio.h>

int main() {
	int n, x;
	while (scanf("%d", &n) != EOF) {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
	}
	return 0;
}
