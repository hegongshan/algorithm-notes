#include <cstdio>
#include <cstring>

int main() {
	char str[201];
	while (gets(str) != NULL) {
		for (int i = strlen(str) - 1; i >= 0; i--) {
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}
