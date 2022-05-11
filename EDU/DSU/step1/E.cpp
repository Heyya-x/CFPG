#include <bits/stdc++.h>
using namespace std;

struct node {
	int p, r, minn, time;
} fa[200005];

int get(int x) {
	if (get(x) == x) return x;
	int y = get(x);
	fa[x].minn = fa[y].minn;
	return fa[x].p = y;
}

void _union(int x, int y, int time) {
	x = get(x);
	y = get(y);
	if (x == y) return;
	if (fa[x].minn == 1) fa[y].time = time;
	else if (fa[y].minn == 1) fa[x].time = time;
	if (fa[x].r == fa[y].r) fa[y].r++;
	if (fa[x].r > fa[y].r) swap(x, y);
	fa[x].p = y;
	fa[y].minn = min(fa[y].minn, fa[x].minn);
	
}

int getTime(int x) {
	return (fa[x].time != INT_MAX ? fa[x].time : fa[x].time = getTime(fa[x].p));
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		fa[i].p = fa[i].time = i;
		fa[i].r = 0;
		fa[i].time = INT_MAX;
	}
	fa[1].time = -1;
	int monkey[n + 5][2];
	memset(monkey, 0, sizeof(monkey));
	for (int i = 1; i <= n; i++) {
		cin >> monkey[i][0] >> monkey[i][1];
	}
	vector< pair<int, int> > op;
	int vis[n + 5][2];
	memset(vis, 0, sizeof(vis));
	for (int i = 0; i < m ; i++) {
		int x, y; cin >> x >> y;
		op.push_back({x, y - 1});
		vis[x][y - 1] = 1;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i][0] == 0 && monkey[i][0] != -1) _union(i, monkey[i][0], -1);
		if (vis[i][1] == 0 && monkey[i][1] != -1) _union(i, monkey[i][1], -1);
	}
	for (int i = m - 1; i >= 0; i--) {
		int x = op[i].first, y = op[i].second;
		if (vis[x][y] == 1) _union(x, monkey[x][y], i);
	}
	for (int i = 1; i <= n; i++) cout << getTime(i) << '\n';
}
