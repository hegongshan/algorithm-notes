#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student {
	char no[7];
	char name[9];
	int score;
};

bool cmp_1(struct Student s1, struct Student s2) {
	return strcmp(s1.no, s2.no) < 0;
}

bool cmp_2(struct Student s1, struct Student s2) {
	int result = strcmp(s1.name, s2.name);
	if (result == 0) {
		return strcmp(s1.no, s2.no) < 0;
	}
	return result < 0;
}

bool cmp_3(struct Student s1, struct Student s2) {
	if (s1.score == s2.score) {
		return strcmp(s1.no, s2.no) < 0;
	}
	return s1.score < s2.score;
}

int main() {
	int n, c, count = 0;
	while (scanf("%d %d", &n, &c), n != 0) {
		struct Student stu[n];
		for (int i = 0; i < n; i++) {
			scanf("%s %s %d", stu[i].no, stu[i].name, &stu[i].score);
		}
		if (c == 1) {
			sort(stu, stu + n, cmp_1);
		} else if (c == 2) {
			sort(stu, stu + n, cmp_2);
		} else {
			sort(stu, stu + n, cmp_3);
		}
		printf("Case %d:\n", ++count);
		for (int i = 0; i < n; i++) {
			printf("%s %s %d\n", stu[i].no, stu[i].name, stu[i].score);
		}
	}
	return 0;
}
