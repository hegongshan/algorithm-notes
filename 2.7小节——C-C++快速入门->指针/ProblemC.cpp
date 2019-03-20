#include <stdio.h>

int main() {
	const char *a = "I love China!";
	int n;
	scanf("%d", &n);
	a = a + n;
	printf("%s\n", a);
	return 0;
}
