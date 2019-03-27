#include <cstdio>
#include <cstring>

long long toLong(char arr[]) {
	long long data = 0;
	int carry = 1;
	for (int i = strlen(arr) - 1; i >= 0; i--) {
		if ('0' <= arr[i] && arr[i] <= '9') {
			data += (arr[i] - '0') * carry;
			carry *= 10;
		}
	}
	if (arr[0] == '-') {
		data = -data;
	}
	return data;
}

int main() {
	char a[13], b[13];
	while (scanf("%s%s", a, b) != EOF) {
		printf("%lld\n", toLong(a) + toLong(b));
	}
	return 0;
}
