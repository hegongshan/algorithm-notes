#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char str2[100];
	scanf("%s", str);
	scanf("%s", str2);
	int len = strlen(str);
	int len2 = strlen(str2);
	int n = len < len2 ? len : len2;
	for (int i = 0; i < n; i++) {
		if (str[i] != str2[i]) {
			printf("%d\n", str[i] - str2[i]);
			break;
		}
	}
	return 0;
}
