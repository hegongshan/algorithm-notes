#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}
		if (n == 1) {
			printf("%d\n%d\n", arr[0], -1);
		} else {
			sort(arr, arr + n);
			printf("%d\n", arr[n - 1]);
			for (int i = 0; i < n - 1; i++) {
				if (i > 0) {
					printf(" ");
				}
				printf("%d", arr[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
