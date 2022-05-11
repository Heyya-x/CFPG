#include <bits/stdc++.h>
using namespace std;

struct node {
	int p, r;
} fa[500005];

int find(int x) {
	return (fa[x].p == x ? x : fa[x].p = find(fa[x].p));
}

void merge(int x, int y) {
	x = find(x);
	y = find(y);
	if (x == y) return;
	if (fa[x].r == fa[y].r) fa[x].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
}

int main() {
	int n, m, k; cin >> n >> m >> k;
	int x, y;
	for (int i = 1; i <= n; i++) {
		fa[i].p = i;
		fa[i].r = 0;
	}
	for (int i = 0; i < m; i++) cin >> x >> y;
	vector<tuple<string, int, int>> op(k);
	vector<string> ans(k);
	string str;
	for (int i = 0; i < k; i++) {
		cin >> str >> x >> y;
		op[i] = {str, x, y};
	}
	for (int i = k - 1; i >= 0; i--) {
		x = get<1>(op[i]), y = get<2>(op[i]);
		if (get<0>(op[i]) == "cut") merge(x, y);
		else ans[i] = (find(x) == find(y) ? "YES\n" : "NO\n");
	}
	for (int i = 0; i < k; i++) cout << ans[i]; 
	return 0;
}
