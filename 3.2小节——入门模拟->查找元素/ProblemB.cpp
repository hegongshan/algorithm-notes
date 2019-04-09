#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		int x;
		scanf("%d", &x);
		bool flag = false;
		for (int i = 0; i < n; i++) {
			if (x == arr[i]) {
				printf("%d\n", i);
				flag = true;
				break;
			}
		}
		if (!flag) {
			printf("-1\n");
		}
	}
	return 0;
}
