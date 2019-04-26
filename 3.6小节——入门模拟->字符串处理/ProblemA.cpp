#include <cstdio>
#include <cstring>
// 解法一：偷懒的办法
/*int main() {
	char str1[101], str2[101];
	while (scanf("%s %s", str1, str2) != EOF) {
		printf("%s%s\n", str1, str2);
	}
	return 0;
}*/

//解法二
/*int main() {
	char str1[201],c;
	while(scanf("%s",str1) != EOF) {
		getchar();
		int index = strlen(str1);
		while(scanf("%c",&c) != EOF && c != '\n') {
			str1[index++] = c;
		}
		str1[index] = '\0';
		printf("%s\n",str1);
	}
}*/

//解法三
int main() {
	char str1[201];
	while(scanf("%s",str1) != EOF) {
		int len = strlen(str1);
		scanf("%s",&str1[len]);
		printf("%s\n",str1);
	}
	return 0;
}
