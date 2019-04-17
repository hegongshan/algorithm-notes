#include <cstdio>

int main() {
	int m;
	long long a, b;
	long long sum;
	while (scanf("%d", &m), m != 0) {
		scanf("%d %d", &a, &b);
		sum = a + b;
		int data[32], i = 0;
		do {
			data[i++] = sum % m;
			sum /= m;
		} while (sum != 0);
		for (int j = i - 1; j >= 0; j--) {
			printf("%d", data[j]);
		}
		printf("\n");
	}
	return 0;
}
