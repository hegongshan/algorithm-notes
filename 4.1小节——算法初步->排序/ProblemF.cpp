#include <cstdio>
#include <algorithm>
using namespace std;

struct Mouse {
	int weight;
	char color[11];
};
bool cmp(Mouse m1, Mouse m2) {
	return m1.weight > m2.weight;
}
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		Mouse mouse[n];
		for (int i = 0; i < n; i++) {
			scanf("%d %s", &mouse[i].weight, mouse[i].color);
		}
		sort(mouse, mouse + n, cmp);
		for (int i = 0; i < n; i++) {
			printf("%s\n", mouse[i].color);
		}
	}
	return 0;
}
