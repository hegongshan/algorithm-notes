#include <stdio.h>

struct student {
	int num;
	char name[20];
	int grades[3];
};
//学生人数
int n = 5;
//课程数量
int m = 3;
void input(student sArr[]) {
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &sArr[i].num, sArr[i].name);
		for (int j = 0; j < m; j++) {
			scanf("%d", &sArr[i].grades[j]);
		}
	}
}

void print(student sArr[]) {
	for (int i = 0; i < n; i++) {
		printf("%d %s ", sArr[i].num, sArr[i].name);
		for (int j = 0; j < m; j++) {
			printf("%d ", sArr[i].grades[j]);
		}
		printf("\n");
	}
}

int main() {
	student sArr[n];
	input(sArr);
	print(sArr);
	return 0;
}
