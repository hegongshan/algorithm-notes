#include <cstdio>
#include <cstring>

int main() {
	int m, lenA, lenB;
	scanf("%d", &m);
	char a[51], b[51];
	while (m--) {
		scanf("%s %s", a, b);
		lenA = strlen(a);
		lenB = strlen(b);
		if (lenA == lenB) {
			printf("%s is equal long to %s\n", a, b);
		} else if (lenA > lenB) {
			printf("%s is longer than %s\n", a, b);
		} else {
			printf("%s is shorter than %s\n", a, b);
		}
	}
	return 0;
}
