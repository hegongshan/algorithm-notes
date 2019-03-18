#include <stdio.h>

int main()
{
	for(int i=0;i<4;i++) {
		for(int j=0;j<5;j++) {
			printf("%3d",(i+1)*(j+1));
		}
		printf("\n");
	}
	return 0;
}
