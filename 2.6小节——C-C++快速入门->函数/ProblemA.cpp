#include <stdio.h>
#include <string.h>

void reverse(char arr[]) {
	char temp;
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++) {
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}

int main() {
	char arr[100];
	gets(arr);
	reverse(arr);
	puts(arr);
	return 0;
}
