#include <cstdio>
#include <cstring>

int main() {
	char str[1000], c;
	while (gets(str) != NULL) {
		c = getchar();
		// 吸收每组输入之后的换行符
		getchar();
		for (int i = 0; i < strlen(str); i++) {
			if (str[i] != c) {
				printf("%c", str[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
