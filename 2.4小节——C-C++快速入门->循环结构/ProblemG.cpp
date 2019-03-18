#include <stdio.h>
#include <math.h>

int main()
{
	double pi = 0, x = 0, i = 1;
	do {
		pi += 4 * x;
		x = pow(-1, i - 1) * ( 1 / (2 * i - 1));
		i++;
	} while(fabs(x) >= pow(10,-6));
	printf("PI=%10.8f\n",pi);
	return 0;
}
