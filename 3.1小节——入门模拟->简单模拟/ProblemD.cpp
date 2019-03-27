#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int odd, even, x;
		odd = even = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &x);
			if (x % 2 == 0) {
				even++;
			} else {
				odd++;
			}
		}
		if (even > odd) {
			printf("NO\n");
		} else {
			printf("YES\n");
		}
	}
	return 0;
}
