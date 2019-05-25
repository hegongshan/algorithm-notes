#include <cstdio>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int mat[n][n];
		// 0~n-1表示行和，n~2n-1表示列和，2n~2n+1表示两条主对角线元素之和
		const int len = 2 * n + 2;
		int arr[len];
		for (int i = 0; i < len; i++) {
			arr[i] = 0;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				scanf("%d", &mat[i][j]);
				arr[i] += mat[i][j];
				arr[n + j] += mat[i][j];
			}
			arr[2 * n] += mat[i][i];
			arr[2 * n + 1] += mat[i][n - 1 - i];
		}
		sort(arr, arr + len, cmp);
		for (int i = 0; i < len; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
