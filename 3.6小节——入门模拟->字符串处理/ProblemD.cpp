#include <cstdio>
#include <cstring>

int main() {
	char str[101], str2[101][101], source[101], target[101];
	while (gets(str) != NULL) {
		int len = 0, j = 0;
		// 这里i <= strlen(str),取等号，确保最后一个单词末尾添加结束符'\0'
		for (int i = 0; i <= strlen(str); i++) {
			if (str[i] == ' ') {
				str2[len][j] = '\0';
				len++;
				j = 0;
			} else {
				str2[len][j++] = str[i];
			}
		}
		scanf("%s", source);
		scanf("%s", target);
		bool flag = true;
		for (int i = 0; i <= len; i++) {
			if (strcmp(str2[i], source) == 0) {
				strcpy(str2[i], target);
			}
			if (flag) {
				printf("%s", str2[i]);
				flag = false;
			} else {
				printf(" %s", str2[i]);
			}
		}
		printf("\n");
		//吸收换行符
		getchar();
	}
	return 0;
}
