#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct Node {
	char u, v;
	int w;
} Edge;

Edge edge[27 * 13];
int usf[27];

bool cmp(Edge a, Edge b) {
	return a.w < b.w;
}

char find(char x) {
	char a = x;
	while (x != usf[x - 'A']) {
		x = usf[x - 'A'];
	}
	while (a != usf[a - 'A']) {
		char z = a;
		a = usf[a - 'A'];
		usf[z - 'A'] = x;
	}
	return x;
}

int kruskal(int n, int m) {
	for (int i = 0; i < n; i++) {
		usf[i] = i + 'A';
	}
	sort(edge, edge + m, cmp);
	int result = 0, count = 0;
	for (int i = 0; i < m; i++) {
		char u = find(edge[i].u);
		char v = find(edge[i].v);
		if (u != v) {
			usf[u - 'A'] = v;
			result += edge[i].w;
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
		getchar();
		char u, v;
		int x, index = 0;
		for (int i = 0; i < n - 1; i++) {
			scanf("%c %d ", &u, &x);
			for (int j = 0; j < x; j++) {
				edge[index].u = u;
				scanf("%c %d", &edge[index].v, &edge[index].w);
				getchar();
				index++;
			}
		}

		int result = kruskal(n, index);
		printf("%d\n", result);
	}
	return 0;
}
