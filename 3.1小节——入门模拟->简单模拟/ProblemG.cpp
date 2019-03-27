#include <cstdio>
#include <cmath>

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int data[n], a1, a2, a3, a5, countA2, countA4;
		a1 = a2 = a3 = a5 = countA2 = countA4 = 0;
		bool hasA1 = false;
		double a4 = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
			if (data[i] % (2 * 5) == 0) {
				a1 += data[i];
				if (!hasA1) {
					hasA1 = true;
				}
			} else if (data[i] % 5 == 1) {
				a2 += pow(-1, countA2++) * data[i];
			} else if (data[i] % 5 == 2) {
				a3++;
			} else if (data[i] % 5 == 3) {
				a4 += data[i];
				countA4++;
			} else if (data[i] % 5 == 4) {
				if (data[i] > a5) {
					a5 = data[i];
				}
			}
		}
		if (!hasA1) {
			printf("N ");
		} else {
			printf("%d ", a1);
		}
		if (countA2 == 0) {
			printf("N ");
		} else {
			printf("%d ", a2);
		}
		if (a3 == 0) {
			printf("N ");
		} else {
			printf("%d ", a3);
		}
		if (countA4 == 0) {
			printf("N ");
		} else {
			a4 /= (countA4 * 1.0);
			printf("%.1f ", a4);
		}
		if (a5 == 0) {
			printf("N\n");
		} else {
			printf("%d\n", a5);
		}
	}
	return 0;
}
