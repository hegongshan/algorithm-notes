#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student {
	char permitNo[21];
	int score;
};

bool cmp(Student s1, Student s2) {
	if (s1.score != s2.score) {
		return s1.score > s2.score;
	}
	return strcmp(s1.permitNo, s2.permitNo) < 0;
}

int main() {
	int n, m, g;
	while (scanf("%d", &n), n != 0) {
		scanf("%d %d", &m, &g);
		int scores[m];
		for (int i = 0; i < m; i++) {
			scanf("%d", &scores[i]);
		}
		Student stu[n];
		for (int i = 0; i < n; i++) {
			scanf("%s", stu[i].permitNo);
			stu[i].score = 0;

			int k, temp;
			scanf("%d", &k);
			for (int j = 0; j < k; j++) {
				scanf("%d", &temp);
				stu[i].score += scores[temp - 1];
			}
		}
		sort(stu, stu + n, cmp);
		int number = 0;
		for (int i = 0; i < n; i++) {
			if (stu[i].score >= g) {
				number++;
			}
		}
		printf("%d\n", number);
		for (int i = 0; i < n; i++) {
			if (stu[i].score >= g) {
				printf("%s %d\n", stu[i].permitNo, stu[i].score);
			}
		}
	}
	return 0;
}
