#include <cstdio>
#include <cstring>

int main() {
	int a, b;
	char n[64];
	while (scanf("%d %s %d", &a, n, &b) != EOF) {
		//题目虽然说2<=a,b<=16，可还是要处理为0的情况
		if(a == 0 || b == 0) {
			printf("0\n");
			continue;
		}
		//将a进制的整数n转换为十进制整数sum,当a为16进制时，n中可能存在字母（大小写兼容）
		int sum = 0, product = 1,x;
		for (int i=strlen(n)-1;i>=0;i--) {
			if(n[i] <= '0'+9) {
				x = n[i] - '0';
			} else if(n[i] < 90) {
				x = n[i] - 'A' + 10;
			} else {
				x = n[i] - 'a' + 10;
			}
			sum += x * product;
			product *= a;
		}
		//将十进制整数sum转换为b进制整数
		if (b == 10) {
			printf("%d", sum);
		} else {
			int data[20], i = 0;
			do {
				data[i++] = sum % b;
				sum /= b;
			} while (sum != 0);
			for (int j = i - 1; j >= 0; j--) {
				if(data[j] < 10) {
					printf("%d", data[j]);
				} else {
					char c = 'A' + data[j] - 10;
					printf("%c",c);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
