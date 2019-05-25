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
		sort(arr, arr + n);
		for (int i = 0; i < n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
