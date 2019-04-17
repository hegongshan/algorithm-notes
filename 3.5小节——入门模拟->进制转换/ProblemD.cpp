#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		//2^10 = 1024 2^7 = 128 => 2^17 > 100000
		int data[17], i = 0;
		do {
			data[i++] = n % 8;
			n /= 8;
		} while (n != 0);
		for (int j = i - 1; j >= 0; j--) {
			printf("%d", data[j]);
		}
		printf("\n");
	}
	return 0;
}
