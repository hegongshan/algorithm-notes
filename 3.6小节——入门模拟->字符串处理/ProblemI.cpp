#include <cstdio>
#include <cstring>

int main() {
	char str[256];
	scanf("%s", str);
	int len = strlen(str);
	bool flag = true;
	for (int i = 0; i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
