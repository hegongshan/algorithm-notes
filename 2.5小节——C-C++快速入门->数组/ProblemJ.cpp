#include <stdio.h>
#include <string.h>

int main() {
	char arr[100], arr2[100], arr3[100];
	gets(arr);
	gets(arr2);
	gets(arr3);
	if (strcmp(arr, arr2) >= 0) {
		if (strcmp(arr, arr3) >= 0) {
			printf("%s\n", arr);
		} else {
			printf("%s\n", arr3);
		}
	} else {
		if (strcmp(arr2, arr3) >= 0) {
			printf("%s\n", arr2);
		} else {
			printf("%s\n", arr3);
		}
	}
	return 0;
}
