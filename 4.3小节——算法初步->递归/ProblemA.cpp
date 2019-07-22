#include <cstdio>

int count(int n) {
	if (n <= 1) {
		return 1;
	}
	return count(n - 1) + count(n - 2);
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		printf("%d\n", count(n));
	}
	return 0;
}
