#include <cstdio>
#include <cstring>

int main() {
	char s1[10001], s2[10001];
	while ((gets(s1)) != NULL) {
		gets(s2);
		int hash[10001] = { 0 };
		for (int i = 0; i < strlen(s1); i++) {
			hash[s1[i]]++;
		}
		for (int i = 0; i < strlen(s2); i++) {
			hash[s2[i]] = 0;
		}

		for (int i = 0; i < strlen(s1); i++) {
			if (hash[s1[i]] > 0) {
				printf("%c", s1[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
