#include <cstdio>

int main() {
	int m;
	scanf("%d", &m);
	char str[m][21];
	for (int i = 0; i < m; i++) {
		scanf("%s", str[i]);
		int start = i >= 3 ? i - 3 : 0;
		// 逆序输出
		for (int j = i; j >= start; j--) {
			printf("%d=%s", (i - j + 1), str[j]);
			if (j > 0) {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
