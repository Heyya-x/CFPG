#include <bits/stdc++.h>
using namespace std;

struct Node {
	int f, maxv, minv, sz;
} fa[300005];

int find(int x) {
	return (fa[x].f == x ? x : fa[x].f = find(fa[x].f));
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	fa[x].sz += fa[y].sz;
	fa[x].maxv = max(fa[x].maxv, fa[y].maxv);
	fa[x].minv = min(fa[x].minv, fa[y].minv);
	fa[y].f = x;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i].f = fa[i].maxv = fa[i].minv = i;
		fa[i].sz = 1;
	}
	string op;
	for (int i = 0; i < m; i++) {
		cin >> op;
		if (op == "union") {
			int u, v; cin >> u >> v;
			merge(u, v);
		} else {
			int x; cin >> x;
			x = find(x);
			cout << fa[x].minv << ' ' << fa[x].maxv << ' ' << fa[x].sz << '\n';
		}


	}
	return 0;
}
