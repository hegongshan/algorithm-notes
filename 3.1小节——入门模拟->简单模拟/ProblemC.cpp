#include <cstdio>
#include <cstring>

int main() {
	char a[11], b[11];
	while (scanf("%s %s", a, b) != EOF) {
		long long sum = 0;
		for (int i = 0; i < strlen(a); i++) {
			for (int j = 0; j < strlen(b); j++) {
				sum += (a[i] - '0') * (b[j] - '0');
			}
		}
		printf("%lld\n", sum);
	}
	return 0;
}
