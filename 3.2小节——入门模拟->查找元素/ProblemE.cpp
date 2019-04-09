#include <cstdio>

struct Student {
	int no;
	char name[20];
	//最初设定sex长度为2，结果一直显示“答案错误”
	char sex[10];
	int age;
};

int main() {
	int m, n;
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &n);
		Student arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%d %s %s %d", &arr[i].no, arr[i].name, arr[i].sex,
					&arr[i].age);
		}
		int x;
		scanf("%d", &x);
		for (int i = 0; i < n; i++) {
			if (x == arr[i].no) {
				printf("%d %s %s %d\n", arr[i].no, arr[i].name, arr[i].sex,
						arr[i].age);
				break;
			}
		}
	}
	return 0;
}
