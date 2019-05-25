#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		int mid = 0;
		if (n == 1) {
			scanf("%d", &mid);
		} else {
			int arr[n];
			for (int i = 0; i < n; i++) {
				scanf("%d", &arr[i]);
			}
			sort(arr, arr + n);
			if (n % 2 == 0) {
				mid = (arr[n / 2 - 1] + arr[n / 2]) / 2;
			} else {
				mid = arr[n / 2];
			}
		}
		printf("%d\n", mid);
	}
}
