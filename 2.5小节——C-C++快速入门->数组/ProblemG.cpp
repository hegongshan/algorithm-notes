#include <stdio.h>

int main() {
	int n = 20;
	int arr[n];
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == 1) {
			arr[i] = 1;
		} else {
			arr[i] = arr[i - 1] + arr[i - 2];
		}
		printf("%d\n", arr[i]);
	}

	return 0;
}
