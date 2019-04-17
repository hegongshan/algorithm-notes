#include <cstdio>
#include <cstring>

int main() {
	char str[31];
	while (scanf("%s", str) != EOF) {
		int result[100];
		int index = 0,start = 0;
		do {
			//若最后一位不能整除2，则余数必定为1，否则为0
			if ((str[strlen(str) - 1] - '0') % 2 == 0) {
				result[index++] = 0;
			} else {
				result[index++] = 1;
			}
			//计算除以2后的商
			int carry = 0;
			for(int i=start;i<strlen(str);i++) {
				int oldCarry = carry;
				if((str[i] - '0') % 2 == 1) {
					carry = 1;
				} else {
					carry = 0;
				}
				str[i] = ((str[i] - '0') + 10 * oldCarry) / 2 + '0';
			}
			//若除以2后，商的首位为0，则字符串起始位后移一位
			if(str[start] == '0') {
				start++;
			}
		} while (start < strlen(str));
		for (int i = index - 1; i >= 0; i--) {
			printf("%d", result[i]);
		}
		printf("\n");
	}
	return 0;
}
