#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int fa[maxn];

struct ST {
	int u, v, w;
} e[maxn];

int find(int x) {
	return (fa[x] == x ? x : fa[x] = find(fa[x]));
}

void merge(int x, int y) {
	fa[find(x)] = find(y);
}

int n, m, sum = 0;	//n, m is number of nodes and roads;
void kruskal() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> e[i].u >> e[i].v >> e[i].w;
	}
	sort(e, e + m, [&](ST A, ST B) { return A.w < B.w; });
	for (int i = 1; i <= n; i++) {
		fa[i] = i; 
	}
	for (int i = 0; i < m; i++) {
		if (find(e[i].u) != find(e[i].v)) {
			sum += e[i].w;
			merge(e[i].u, e[i].v);
		}
	}
}

int main() {
	kruskal();
	cout << sum << '\n';
	return 0;
}
