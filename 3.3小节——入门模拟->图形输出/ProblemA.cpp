#include <cstdio>

int main() {
	int h;
	while(scanf("%d", &h) != EOF) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 2 * (h - i - 1); j++) {
				printf(" ");
			}
			for (int j = 0; j < h + 2 * i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
