#include <cstdio>

int main() {
	int n, m;
	while (scanf("%d %d", &n, &m) != EOF) {

		//下标为书籍编号，值为书籍被喜欢的次数
		int book[200] = { 0 };
		// 下标为读者编号-1，值为该读者最喜欢的书的编号
		int reader[200];

		for (int i = 0; i < n; i++) {
			scanf("%d", &reader[i]);
			book[reader[i] - 1]++;
		}

		for (int i = 0; i < n; i++) {
			if (book[reader[i] - 1] == 1) {
				printf("BeiJu\n");
			} else {
				printf("%d\n", book[reader[i] - 1] - 1);
			}
		}
	}
	return 0;
}
