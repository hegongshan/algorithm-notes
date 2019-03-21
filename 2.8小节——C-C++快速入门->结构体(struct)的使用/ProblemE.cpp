#include <stdio.h>

struct student {
	int num;
	char name[20];
	int grades[3];
};
//学生人数
const int n = 10;
//课程数量
const int m = 3;
student sArr[n];
//存储各门课程的平均分
int avgScores[m];
//max表示最高的总分，index表示总分最高的学生在sArr中的下标
int max, index;
void input() {
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &sArr[i].num, sArr[i].name);
		int sum = 0;
		for (int j = 0; j < m; j++) {
			scanf("%d", &sArr[i].grades[j]);
			avgScores[j] += sArr[i].grades[j];
			sum += sArr[i].grades[j];
		}
		if (sum > max) {
			max = sum;
			index = i;
		}
	}
}
void print() {
	for (int i = 0; i < m; i++) {
		printf("%.2f ", avgScores[i] / (n * 1.0));
	}
	printf("\n");
	student s = sArr[index];
	printf("%d %s ", s.num, s.name);
	for (int i = 0; i < m; i++) {
		printf("%d ", s.grades[i]);
	}
	printf("\n");
}
int main() {
	input();
	print();
	return 0;
}
