#include <stdio.h>
#include <math.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double temp;
	if(a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if(a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c) {
		temp = c;
		c = b;
		b = temp;
	}
	printf("%.2f %.2f %.2f\n",a,b,c);
	return 0;
}
