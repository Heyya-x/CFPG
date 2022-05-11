#include <bits/stdc++.h>
using namespace std;

struct node {
	int p, r, maxn;
} fa[1000006];

int get(int x) {
	if (fa[x].p == x) return x;
	int y = get(fa[x].p);
	fa[x].maxn = max(fa[x].maxn, fa[y].maxn);
	return fa[x].p = y;
}

void merge(int x, int y) {
	x = get(x);
	y = get(y);
	if (x == y) return;
	if (fa[x].r == fa[y].r) fa[x].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
	fa[y].maxn = max(fa[x].maxn, fa[y].maxn);
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n + 1; i++) {
		fa[i].p = fa[i].maxn = i;
		fa[i].r = 0;
	}
	char op;
	int x;
	for (int i = 0; i < m; i++) {
		cin >> op >> x;
		if (op == '?') {
			int y = get(x);
			cout << (fa[y].maxn == n + 1 ? -1 : fa[y].maxn) << '\n';
		} else {
			merge(x, x + 1);
		}
	}
	return 0;
}
