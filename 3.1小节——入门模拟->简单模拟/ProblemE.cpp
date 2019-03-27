#include <cstdio>

int main() {
	int n, m;
	scanf("%d", &n);
	int distances[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &distances[i]);
		sum += distances[i];
	}
	scanf("%d", &m);
	int a, b, tempA, tempB, distance;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		distance = 0;
		tempA = a < b ? a : b;
		tempB = b > a ? b : a;
		for (int j = tempA - 1; j < tempB - 1; j++) {
			distance += distances[j];
		}
		// distance < sum - distance
		if (2 * distance < sum) {
			printf("%d\n", distance);
		} else {
			printf("%d\n", sum - distance);
		}
	}
	return 0;
}
