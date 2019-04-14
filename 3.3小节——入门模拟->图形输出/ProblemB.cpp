#include <cstdio>
#include <cstring>

int main() {
	char str[81];
	scanf("%s", str);
	int len = strlen(str);
	int side = (len + 2) / 3;
	for (int i = 0; i < side - 1; i++) {
		printf("%c", str[i]);
		for (int j = 0; j < len - 2 * side; j++) {
			printf(" ");
		}
		printf("%c\n", str[len - i - 1]);
	}
	for (int i = 0; i < len - 2 * side + 2; i++) {
		printf("%c", str[side + i - 1]);
	}
	printf("\n");
	return 0;
}
