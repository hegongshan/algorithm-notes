#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct Node {
	int u, v;
	float w;
} Edge;

typedef struct Node2 {
	float x, y;
} Point;

Point point[100];
Edge edge[50 * 99];
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

float kruskal(int n, int m) {
	for (int i = 1; i <= n; i++) {
		usf[i] = i;
	}
	sort(edge, edge + m, cmp);
	float result = 0.0;
	int count = 0;
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
	return result;
}

int main() {
	int n;
	while (scanf("%d", &n), n != 0) {
		int m = n * (n - 1) / 2;
		for (int i = 0; i < n; i++) {
			scanf("%f %f", &point[i].x, &point[i].y);
		}

		for (int i = 0, index = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				edge[index].u = i + 1;
				edge[index].v = j + 1;
				edge[index++].w = sqrt(
						pow(point[i].x - point[j].x, 2)
								+ pow(point[i].y - point[j].y, 2));
			}
		}

		float result = kruskal(n, m);
		printf("%.2f\n", result);
	}
	return 0;
}
