#include <bits/stdc++.h>
using namespace std;
int fa[100005];

int get(int x) {
	return (fa[x] == x ? x : fa[x] = get(fa[x]));
}

void merge(int x, int y) {
	fa[get(x)] = get(y);
}

int main() {
	int n, m; cin >> n >> m;
	string op;
	int u, v;
	for (int i = 1; i <= n; i++) fa[i] = i;
	for (int i = 0; i < m; i++) {
		cin >> op >> u >> v;
		if (op == "union") merge(u, v);
		else cout << (get(u) == get(v) ? "YES" : "NO") << '\n';
	}
	return 0;
}
