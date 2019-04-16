#include <cstdio>

int month[13][2] = { { 0, 0 }, { 31, 31 }, { 28, 29 }, { 31, 31 }, { 30, 30 }, {
		31, 31 }, { 30, 30 }, { 31, 31 }, { 31, 31 }, { 30, 30 }, { 31, 31 }, {
		30, 30 }, { 31, 31 } };

bool isLeap(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int main() {
	int y, days;
	while (scanf("%d %d", &y, &days) != EOF) {
		int m = 1, d = 0;
		while (days--) {
			d++;
			if (d == month[m][isLeap(y)] + 1) {
				m++;
				d = 1;
			}
			if (m == 13) {
				y++;
				m = 1;
			}
		}
		printf("%04d-%02d-%02d\n", y, m, d);
	}
	return 0;
}
