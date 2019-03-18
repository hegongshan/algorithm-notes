#include <stdio.h>

int fibonacci(int n)
{
	if(n == 1 || n == 2)
	{
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	double sum = 0;

	for(int i=2;i<=21;i++)
	{
		sum += fibonacci(i+1) /(1.0 * fibonacci(i));
	}
	printf("%.6f\n",sum);
	return 0;

}
