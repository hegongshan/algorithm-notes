#include <stdio.h>

int main()
{
	int sum = 0, i = 0;
	while(sum <= 1000) {
		i++;
		sum += i;
	}
	printf("%d\n",i);
	return 0;
}
