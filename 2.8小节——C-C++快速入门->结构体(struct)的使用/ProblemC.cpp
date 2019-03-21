#include <stdio.h>

struct person {
	int num;
	char name[10];
	char sex;
	char job;
	union {
		int clazz;
		char position[10];
	} category;
};

int main() {
	int n;
	scanf("%d", &n);
	person arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %s %c %c", &arr[i].num, arr[i].name, &arr[i].sex,
				&arr[i].job);
		if (arr[i].job == 's') {
			scanf("%d", &arr[i].category.clazz);
		} else {
			scanf("%s", arr[i].category.position);
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d %s %c %c ", arr[i].num, arr[i].name, arr[i].sex, arr[i].job);
		if (arr[i].job == 's') {
			printf("%d\n", arr[i].category.clazz);
		} else {
			printf("%s\n", arr[i].category.position);
		}
	}
	return 0;
}
