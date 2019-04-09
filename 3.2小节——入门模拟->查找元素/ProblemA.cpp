#include <cstdio>

int main() {
	int n;
	while (scanf("%d", &n), n) {
		//采用哈希表的思想，arr的下标表示分数（0-100），值表示对应分数的学生人数
		int arr[101] = { 0 };
		int score;
		for (int i = 0; i < n; i++) {
			scanf("%d", &score);
			arr[score] += 1;
		}
		scanf("%d", &score);
		printf("%d\n", arr[score]);
	}
	return 0;
}
