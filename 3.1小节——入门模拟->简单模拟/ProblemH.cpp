#include <cstdio>
#include <cstring>

int getP(char a[], int da) {
	int carry = 1, pa = 0;
	for (int i = strlen(a) - 1; i >= 0; i--) {
		if ((a[i] - '0') == da) {
			pa += carry * da;
			carry *= 10;
		}
	}
	return pa;
}

int main() {
	char a[10], b[10];
	int da, db, pa, pb, carry;
	pa = pb = 0;
	while (scanf("%s %d %s %d", a, &da, b, &db) != EOF) {
		pa = getP(a, da);
		pb = getP(b, db);
		printf("%d\n", pa + pb);
	}
	return 0;
}
