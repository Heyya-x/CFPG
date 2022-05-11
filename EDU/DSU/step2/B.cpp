#include <bits/stdc++.h>
using namespace std;

struct node {
	int p, r, maxn;
} fa[300005];

int get(int x) {
	if (fa[x].p == x) return x;
	int y = get(fa[x].p);
	fa[x].maxn = fa[y].maxn;
	return fa[x].p = y;
}

void _union(int x, int y) {
	x = get(x);
	y = get(y);
	if (x == y) return;
	if (fa[x].r == fa[y].r) fa[y].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
	fa[y].maxn = max(fa[x].maxn, fa[y].maxn);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n + 1; i++) {
		fa[i].p = fa[i].maxn = i;
		fa[i].r = 0;
	}
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		x = get(x);
		if (fa[x].maxn == n + 1) x = get(1);
		cout << fa[x].maxn << ' ';
		_union(fa[x].maxn, fa[x].maxn + 1);
	}
	return 0;
}
