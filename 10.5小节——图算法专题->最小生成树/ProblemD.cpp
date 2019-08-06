#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct Node {
	int u, v;
	int w;
	int status;
} Edge;

Edge edge[50 * 99];
int usf[101];

bool cmp(Edge a, Edge b) {
	if (a.status != b.status) {
		return a.status > b.status;
	}
	return a.w < b.w;
}

int find(int x) {
	int a = x;
	while (x != usf[x]) {
		x = usf[x];
	}
	while (a != usf[a]) {
		int z = a;
		a = usf[a];
		usf[z] = x;
	}
	return x;
}

int kruskal(int n, int m) {
	for (int i = 1; i <= n; i++) {
		usf[i] = i;
	}
	sort(edge, edge + m, cmp);
	int result = 0, count = 0;
	for (int i = 0; i < m; i++) {
		int u = find(edge[i].u);
		int v = find(edge[i].v);
		if (u != v) {
			usf[u] = v;
			if (edge[i].status == 0) {
				result += edge[i].w;
			}
			count++;
		}
		if (count == n - 1) {
			break;
		}
	}
	return result;
}

int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		int m = n * (n - 1) / 2;
		int status;
		for (int i = 0; i < m; i++) {
			scanf("%d %d %d %d", &edge[i].u, &edge[i].v, &edge[i].w,
					&edge[i].status);
		}

		int result = kruskal(n, m);
		printf("%d\n", result);
	}
	return 0;
}
