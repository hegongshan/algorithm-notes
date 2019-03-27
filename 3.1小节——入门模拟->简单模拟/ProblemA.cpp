#include <cstdio>
#include <cstring>

int main() {
	int l, m, a, b;
	while (scanf("%d %d", &l, &m), l || m) {
		// 使用一个数组存储每棵树的状态，是否被移走，-1表示被移走
		int arr[l + 1];
		memset(arr, 0, sizeof(arr));
		int count = 0;
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &a, &b);
			for (int j = a; j <= b; j++) {
				arr[j] = -1;
			}
		}
		for (int i = 0; i < l + 1; i++) {
			if (!arr[i]) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
