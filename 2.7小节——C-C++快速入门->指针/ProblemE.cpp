#include <stdio.h>

int n = 10;

void input(int * arr) {
	for (int i = 0; i < n; i++) {
		scanf("%d", arr + i);
	}
}

void swap(int * arr) {
	int * min = &arr[0], *max = &arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > *max) {
			max = &arr[i];
		}
		if (arr[i] < *min) {
			min = &arr[i];
		}
	}
	int temp = *min;
	*min = arr[0];
	arr[0] = temp;

	temp = *max;
	*max = arr[n - 1];
	arr[n - 1] = temp;
}

void output(int * arr) {
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main() {
	int * arr = new int[n];
	input(arr);
	swap(arr);
	output(arr);
	return 0;
}
