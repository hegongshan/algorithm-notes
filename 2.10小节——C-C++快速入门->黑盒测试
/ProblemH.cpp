#include <stdio.h>

int main() {
	int n, m, x;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &m);
		int sum = 0;
		for (int i = 0; i < m; i++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
		printf("\n");
	}
	return 0;
}
