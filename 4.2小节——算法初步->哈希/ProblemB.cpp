#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

// v中是否包含value
bool contains(vector<int> v, int value) {
	bool flag = false;
	for (int j = 0; j < v.size(); j++) {
		if (v[j] == value) {
			flag = true;
			break;
		}
	}
	return flag;
}

int main() {
	int m, n, group;
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &n);

		// 处理值
		int arr[n];
		vector<int> values, group;
		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			// 去重
			if (!contains(values, arr[i])) {
				values.push_back(arr[i]);
			}
		}
		sort(values.begin(), values.end());

		// hash[i][j]表示第i组j的出现次数
		int hash[n][values[values.size() - 1]];
		memset(hash, 0, sizeof(hash));

		// 处理分组
		int g;
		for (int i = 0; i < n; i++) {
			scanf("%d", &g);
			// 去重
			if (!contains(group, g)) {
				group.push_back(g);
			}
			// 增加第g组中arr[i]出现的次数
			hash[g][arr[i]]++;
		}
		sort(group.begin(), group.end());

		for (int i = 0; i < group.size(); i++) {
			printf("%d={", group[i]);
			for (int j = 0; j < values.size(); j++) {
				if (j > 0) {
					printf(",");
				}
				printf("%d=%d", values[j], hash[group[i]][values[j]]);
			}
			printf("}\n");
		}
	}
	return 0;
}
