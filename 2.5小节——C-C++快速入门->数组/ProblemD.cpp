#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	gets(arr);
	for (int i = 0; i < strlen(arr); i++) {
		if ('A' <= arr[i] && arr[i] <= 'Z') {
			arr[i] = 'Z' + 'A' - arr[i];
		} else if ('a' <= arr[i] && arr[i] <= 'z') {
			arr[i] = 'z' + 'a' - arr[i];
		}
	}
	puts(arr);
	return 0;
}
