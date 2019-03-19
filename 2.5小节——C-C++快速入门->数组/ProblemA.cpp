#include <stdio.h>

int main() {
	int arr[10];
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &arr[9]);
	int temp;
	for (int i = 0; i < 10; i++) {
		if (arr[9] <= arr[i]) {
			temp = arr[9];
			for (int j = 9; j > i; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i] = temp;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
