#include <cstdio>
#include <cstring>

struct Student {
	char no[20];
	// name和sex可能很大
	char name[100];
	char sex[10];
	int age;
};

int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		Student arr[n];
		for (int i = 0; i < n; i++) {
			scanf("%s %s %s %d", arr[i].no, arr[i].name, arr[i].sex,
					&arr[i].age);
		}
		scanf("%d", &m);
		for (int i = 0; i < m; i++) {
			char no[20];
			scanf("%s", no);
			bool flag = false;
			for (int j = 0; j < n; j++) {
				if (!strcmp(no, arr[j].no)) {
					printf("%s %s %s %d\n", arr[j].no, arr[j].name, arr[j].sex,
							arr[j].age);
					flag = true;
					break;
				}
			}
			if (!flag) {
				printf("No Answer!\n");
			}
		}
	}
	return 0;
}
