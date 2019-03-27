#include <cstdio>
// 1表示a赢，0表示平局，-1表示b赢
int compare(char a, char b) {
	if ((a == 'C' && b == 'J') || (a == 'J' && b == 'B')
			|| (a == 'B' && b == 'C')) {
		return 1;
	}
	if (a == b) {
		return 0;
	}
	return -1;
}
//根据对应手势获胜次数，得出胜算最大的手势
char getMaxGesture(int wins[]) {
	int max, maxIndex;
	max = maxIndex = 0;
	for (int i = 0; i < 3; i++) {
		if (wins[i] > max) {
			max = wins[i];
			maxIndex = i;
		}
	}
	if (maxIndex == 0) {
		return 'B';
	}
	if (maxIndex == 1) {
		return 'C';
	}
	return 'J';
}
// 根据数组wins的索引，返回其对应的手势
int main() {
	int n, win, draw, defeat, result;
	win = draw = defeat = result = 0;
	scanf("%d", &n);
	char a, b;
	// 统计甲每个手势获胜的次数
	int wins[3] = { 0 };
	int wins2[3] = { 0 };
	for (int i = 0; i < n; i++) {
		// 换行和空格都算一个字符
		scanf(" %c %c", &a, &b);
		result = compare(a, b);
		if (result == 1) {
			win++;
			if (a == 'B') {
				wins[0]++;
			} else if (a == 'C') {
				wins[1]++;
			} else {
				wins[2]++;
			}
		} else if (result == 0) {
			draw++;
		} else {
			defeat++;
			if (b == 'B') {
				wins2[0]++;
			} else if (b == 'C') {
				wins2[1]++;
			} else {
				wins2[2]++;
			}
		}
	}

	printf("%d %d %d\n", win, draw, defeat);
	printf("%d %d %d\n", defeat, draw, win);
	printf("%c %c\n", getMaxGesture(wins), getMaxGesture(wins2));
	return 0;
}
