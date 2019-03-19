#include <stdio.h>

int main() {
	int m = 2, n = 3;
	int arr[m][n], arr2[n][m];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr2[i][j] = arr[j][i];
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
