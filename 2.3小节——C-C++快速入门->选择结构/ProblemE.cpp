#include <stdio.h>

int main()
{
	double profit,reward;
	scanf("%lf",&profit);
	if(profit <= 100000) {
		reward = 0.1 * profit;
	} else if(profit <= 200000) {
		reward = (profit - 100000) * 0.075 + 100000 * 0.1;
	} else if(profit <= 400000) {
		reward = (profit - 200000) * 0.05 + 100000 * (0.1 + 0.075);
	} else if(profit <= 600000) {
		reward = (profit - 400000) * 0.03 + 200000 * 0.05 + 100000 * (0.1 + 0.075);
	} else if(profit <= 1000000) {
		reward = (profit - 600000) * 0.015 + 200000 * (0.03 + 0.05) + 100000 * (0.1 + 0.075);
	} else {
		reward = (profit - 1000000) * 0.01 + 400000 * 0.015 + 200000 * (0.03 + 0.05) + 100000 * (0.1 + 0.075);
	}
	printf("%.2f\n",reward);
}
