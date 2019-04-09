#include <cstdio>

int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			int x;
			scanf("%d", &x);
			bool flag = false;
			for (int j = 0; j < n; j++) {
				if (arr[j] == x) {
					printf("YES\n");
					flag = true;
					break;
				}
			}
			if (!flag) {
				printf("NO\n");
			}
		}
	}
	return 0;
}
