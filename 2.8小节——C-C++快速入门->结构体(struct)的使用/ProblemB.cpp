#include <stdio.h>

struct student {
	int num;
	char name[20];
	char sex;
	int age;
};

int main() {
	int n;
	scanf("%d", &n);
	student sArr[n];
	student * p = sArr;
	for (int i = 0; i < n; i++) {
		scanf("%d %s %c %d", &((p + i)->num), (p + i)->name, &((p + i)->sex),
				&((p + i)->age));
	}
	for (int i = 0; i < n; i++) {
		printf("%d %s %c %d\n", (p + i)->num, (p + i)->name, (p + i)->sex,
				(p + i)->age);
	}
	return 0;
}
