#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int hash[10001] = { 0 };
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			hash[arr[i]]++;
		}
		bool exists = false;
		for (int i = 0; i < n; i++) {
			if (hash[arr[i]] == 1) {
				printf("%d\n", arr[i]);
				exists = true;
				break;
			}
		}
		if (!exists) {
			printf("None\n");
		}
	}
	return 0;
}
