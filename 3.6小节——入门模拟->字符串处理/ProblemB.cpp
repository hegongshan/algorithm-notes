#include <cstdio>
#include <cstring>

int main() {
	char line[101];
	while (gets(line) != NULL) {
		int start = 0;
		int len = strlen(line);
		for (int i = 0; i < len; i++) {
			if (i == len - 1 || line[i] == ' ' || line[i] == '\t'
					|| line[i] == '\r' || line[i] == '\n') {
				// 如果单词的首字母不是大写字母，则把单词的首字母变成大写字母。
				if ('a' <= line[start] && line[start] <= 'z') {
					line[start] -= 32;
				}
				start = i + 1;
			}
		}
		printf("%s\n", line);
	}
	return 0;
}
