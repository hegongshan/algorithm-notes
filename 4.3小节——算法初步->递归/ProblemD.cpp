#include <cstdio>
#include <cstdlib>

int n = 8, count = 1;
// 用于判断第x行是否放置了皇后
bool hash[9] = { false };
int p[9];
// 存储8皇后的92个解
int num[93];
// index 表示列
void fun(int index) {
	if (index == n + 1) {
		int temp = 0;
		for (int i = 1; i <= n; i++) {
			temp = temp * 10 + p[i];
		}
		num[count++] = temp;
		return;
	}
	// 遍历第1到n行，寻找皇后在index列中放置的行号
	for (int x = 1; x <= n; x++) {
		// 若第x行没有皇后
		if (hash[x] == false) {
			bool flag = true;
			// 遍历之前的皇后
			for (int pre = 1; pre < index; pre++) {
				// 若与之前的皇后在同一条对角线上
				if (abs(index - pre) == abs(x - p[pre])) {
					flag = false;
					break;
				}
			}
			// 若可以将皇后放在第x行
			if (flag) {
				p[index] = x;
				hash[x] = true;
				// 递归处理第index+1列的皇后
				fun(index + 1);
				// 还原第x行，以便在第index列的其他行放置皇后
				hash[x] = false;
			}
		}
	}
}

int main() {
	int m, b;
	scanf("%d", &m);
	fun(1);
	for (int i = 0; i < m; i++) {
		scanf("%d", &b);
		printf("%d\n", num[b]);
	}
	return 0;
}
