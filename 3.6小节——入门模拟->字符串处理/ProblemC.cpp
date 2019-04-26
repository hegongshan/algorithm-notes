#include <cstdio>
#include <cstring>

bool equalsIgnoreCase(char a, char b) {
	if (a == b) {
		return true;
	}
	if ('A' <= a && a <= 'Z' && a == b - 32) {
		return true;
	}
	if ('a' <= a && a <= 'z' && a == b + 32) {
		return true;
	}
	return false;
}
// 解题思路：将短字符串与长字符串逐行、逐个字符（该字符不为空格）相比较，若相同（不区分大小写），则继续向后匹配；
// 若不相同,则回溯至原来与短字符串相匹配的第一个字符，输出该字符，重置两个字符串的匹配结果。
// 若在遇到空格前，已经有部分内容与短字符串相匹配，则直接输出这部分内容。
int main() {
	char str[200];
	//若使用scanf,则必须使用getchar吸收末尾的换行符，以避免换行符被后面的gets读入
	/*scanf("%s",str);
	getchar();*/
	gets(str);
	char line[1001];
	while (gets(line) != NULL) {
		int index = 0;
		for (int i = 0; i < strlen(line); i++) {
			if (line[i] != ' ') {
				if (equalsIgnoreCase(line[i], str[index])) {
					index++;
				} else {
					// 回溯
					i -= index;
					// 重置
					index = 0;
					printf("%c", line[i]);
				}
				// 如果和短字符串相匹配，则直接跳过
				if (index == strlen(str)) {
					index = 0;
				}
			} else {
				// 若遇到空格前，已经有部分内容与短字符串匹配
				for (int j = i - index; j < i; j++) {
					printf("%c", line[j]);
				}
				index = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
