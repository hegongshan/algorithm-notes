#include <stdio.h>
#include <string.h>

void vowels(char s1[], char s2[]) {
	int len1 = strlen(s1);
	for (int i = 0, j = 0; i < len1; i++) {
		switch (s1[i]) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				s2[j++] = s1[i];
				break;
		}
	}
}

int main() {
	char s1[100], s2[100];
	gets(s1);
	vowels(s1, s2);
	puts(s2);
	return 0;
}
