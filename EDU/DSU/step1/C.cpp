#include <bits/stdc++.h>
using namespace std;

struct team {
	int p, r, res, exp;
} fa[200005];

int find(int x) {
	return (fa[x].p == x ? x : find(fa[x].p)); // can't update the father node;
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	if (fa[x].r == fa[y].r) fa[x].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
	fa[x].res = fa[y].exp;
}

int getExp(int x) {
	int y = find(x);
	return (y == x ? fa[y].exp : fa[x].exp - fa[x].res + getExp(fa[x].p));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i].p = i;
		fa[i].r = 0;
		fa[i].res = fa[i].exp = 0;
	}
	string op;
	for (int i = 0; i < m; i++) {
		cin >> op;
		if (op == "add") {
			int x, y; cin >> x >> y;
			x = find(x);
			fa[x].exp += y;
		} else if (op == "join") {
			int x, y; cin >> x >> y;
			merge(x, y);
		} else {
			int x; cin >> x;
			cout << getExp(x) << '\n';
		}
	}
	return 0;
}
