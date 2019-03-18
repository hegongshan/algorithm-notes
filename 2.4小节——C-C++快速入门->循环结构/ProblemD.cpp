#include <stdio.h>

int main()
{
	int n, sum = 0, i = 0;
	scanf("%d",&n);
	while(true) {
		sum += i;
		i++;
		if(i > n) {
			break;
		}
	}
	printf("%d\n",sum);
}
