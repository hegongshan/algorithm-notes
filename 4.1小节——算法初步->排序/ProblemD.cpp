#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	char str[201];
	while (gets(str) != NULL) {
		int len = strlen(str);
		sort(str, str + len);
		printf("%s\n", str);
	}
	return 0;
}
