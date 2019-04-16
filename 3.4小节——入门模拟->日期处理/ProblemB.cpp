#include <cstdio>
#include <cstring>
const int y = 2019, m = 4, d = 15, week = 1;
char weeks[8][20] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
		"Friday", "Saturday", "\0" };
char months[13][20] =
		{ " ", "January", "February", "March", "April", "May", "June", "July",
				"August", "September", "October", "November", "December" };
int getMonth(char month[]) {
	for (int i = 1; i <= 12; i++) {
		if (strcmp(months[i], month) == 0) {
			return i;
		}
	}
	return 0;
}
int month[13][2] = { { 0, 0 }, { 31, 31 }, { 28, 29 }, { 31, 31 }, { 30, 30 }, {
		31, 31 }, { 30, 30 }, { 31, 31 }, { 31, 31 }, { 30, 30 }, { 31, 31 }, {
		30, 30 }, { 31, 31 } };

bool isLeap(int year) {
	return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}
//计算给定的年月日y1m1d1是否发生在y2m2d2之后
bool after(int y1, int m1, int d1, int y2, int m2, int d2) {
	if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
		return true;
	}
	return false;
}
//计算从给定年月日至今(2019/4/15,星期一)的天数，给定年月日可以是过去的时间，亦可以是将来的时间
int getDays(int y1, int m1, int d1) {
	int y2 = y, m2 = m, d2 = d;
	if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2)) {
		y2 = y1;
		m2 = m1;
		d2 = d1;
		y1 = y;
		m1 = m;
		d1 = d;
	}
	int count = 0;
	while (y1 < y2 || m1 < m2 || d1 < d2) {
		d1++;
		if (d1 == month[m1][isLeap(y1)] + 1) {
			m1++;
			d1 = 1;
		}
		if (m1 == 13) {
			y1++;
			m1 = 1;
		}
		count++;
	}
	return count;
}
int main() {
	int day, year;
	char strmonth[20];
	while (scanf("%d %s %d", &day, strmonth, &year) != EOF) {
		int month = getMonth(strmonth);
		int count = getDays(year, month, day) % 7;
		int index = 0;
		if (after(year, month, day, y, m, d)) {
			count = -count;
		}
		index = (week - count + 7) % 7;
		printf("%s\n", weeks[index]);
	}
	return 0;
}
