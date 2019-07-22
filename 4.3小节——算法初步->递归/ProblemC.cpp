#include <cstdio>

int fun(int num, int arr[], int n) {
	if (num == 0) {
		return 1;
	}
	if (n == 0) {
		return 0;
	}
	return fun(num - arr[n - 1], arr, n - 1) + fun(num, arr, n - 1);
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		printf("%d\n", fun(40, arr, n));
	}
	return 0;
}
