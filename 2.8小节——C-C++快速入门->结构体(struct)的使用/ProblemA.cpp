#include <stdio.h>
#include <string.h>

struct person {
	char name[20];
	int count;
} leader[3] = { "Li", 0, "Zhang", 0, "Fun", 0 };

bool equals(char arr[], char arr2[]) {
	int len = strlen(arr);
	if (len != strlen(arr2)) {
		return false;
	}
	for (int i = 0; i < len; i++) {
		if (arr[i] != arr2[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char name[20];
		scanf("%s", name);
		for (int j = 0; j < 3; j++) {
			if (equals(leader[j].name, name)) {
				leader[j].count++;
				break;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%s:%d\n", leader[i].name, leader[i].count);
	}
	return 0;
}
