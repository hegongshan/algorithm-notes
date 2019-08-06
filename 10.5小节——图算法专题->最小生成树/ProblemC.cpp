#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct Node {
	int u, v;
	int w;
} Edge;

Edge edge[100];
int usf[101];

bool cmp(Edge a, Edge b) {
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
			result += edge[i].w;
			count++;
		}
		if (count == n - 1) {
			break;
		}
	}
	if (count == n - 1) {
		return result;
	}
	return -1;
}

int main() {
	int n, m;
	while (scanf("%d %d", &m, &n), m != 0) {
		for (int i = 0; i < m; i++) {
			scanf("%d %d %d", &edge[i].u, &edge[i].v, &edge[i].w);
		}

		int result = kruskal(n, m);
		if (result == -1) {
			printf("?\n");
		} else {
			printf("%d\n", result);
		}
	}
	return 0;
}
