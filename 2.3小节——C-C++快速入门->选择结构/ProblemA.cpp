#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	double deta = pow(b, 2) - 4 * a * c;
	if(deta >= 0) {
		double r1 = -(b - sqrt(deta)) / (2 * a);
		double r2 = -(b + sqrt(deta)) / (2 * a);
		printf("r1=%7.2f\n", r1);
		printf("r2=%7.2f\n", r2);
	} else {
		printf("No real roots!\n");
	}
	return 0;
}
