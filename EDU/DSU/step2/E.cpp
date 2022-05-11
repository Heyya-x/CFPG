#include <bits/stdc++.h>
using namespace std;

struct node {
	int p, r;
} fa[200005];

struct path {
	int u, v, w;
} e[2000005];

int get(int x) {
	return (fa[x].p == x ? x : fa[x].p = get(fa[x].p));
}

void merge(int x, int y) {
	x = get(x);
	y = get(y);
	if (x == y) return;
	if (fa[x].r == fa[y].r) fa[y].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i].p = i;
		fa[i].r = 0;
	}
	for (int i = 0; i < m; i++) {
		cin >> e[i].u >> e[i].v >> e[i].w;
	}
	sort(e, e + m, [&](path A, path B) { return A.w < B.w; });
	long long ans = 0;
	for (int i = 0; i < m; i++) {
		if (get(e[i].u) != get(e[i].v)) {
			ans += e[i].w;
			merge(e[i].u, e[i].v);
		}
	}
	cout << ans << '\n';
	return 0;
}
