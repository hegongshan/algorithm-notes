#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n = 10;
	int arr[n];
	while (scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2],
			&arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9])
			!= EOF) {
		sort(arr, arr + n);
		int odd = 0, even = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] % 2 != 0) {
				printf("%d ", arr[i]);
				odd++;
			}
		}
		if (odd < n) {
			for (int i = 0; i < n; i++) {
				if (arr[i] % 2 == 0) {
					if (even > 0) {
						printf(" ");
					}
					printf("%d", arr[i]);
					even++;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
