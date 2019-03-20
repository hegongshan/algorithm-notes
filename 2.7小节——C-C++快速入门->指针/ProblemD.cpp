#include <stdio.h>
#include <string.h>

int main() {
	char *s1 = new char[100];
	char *s2 = new char[100];
	char *s3 = new char[100];
	scanf("%s", s1);
	scanf("%s", s2);
	scanf("%s", s3);

	if (strcmp(s1, s2) <= 0) {
		if (strcmp(s2, s3) <= 0) {
			printf("%s\n%s\n%s\n", s1, s2, s3);
		} else if (strcmp(s1, s3) <= 0) {
			printf("%s\n%s\n%s\n", s1, s3, s2);
		} else {
			printf("%s\n%s\n%s\n", s3, s1, s2);
		}
	} else {
		if (strcmp(s2, s3) >= 0) {
			printf("%s\n%s\n%s\n", s3, s2, s1);
		} else if (strcmp(s1, s3) >= 0) {
			printf("%s\n%s\n%s\n", s2, s3, s1);
		} else {
			printf("%s\n%s\n%s\n", s2, s1, s3);
		}
	}
	return 0;
}
