/**
  *	 author:  Heyya
  *	 created: 05.04.2022 16:18
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> q(n + 1);
	vector<pair<int, int>> p(k);
	vector<int> vis(n + 1, false);
	for (int i = 0; i < k; i++) {
		cin >> p[i].second;
	}
	for (int i = 0; i < k; i++) {
		cin >> p[i].first;	
		q[p[i].second] = p[i].first;
		vis[p[i].second] = true;
	}
//	sort(p.begin(), p.end());
	queue<pair<int, int>> qu;
	for (auto x : p) qu.push(x);
	while (!qu.empty()) {
		auto [y, x] = qu.front(); qu.pop();
		int dx1 = x - 1, dx2 = x + 1;
		int t = y + 1;
		if (dx1 >= 1 && dx1 <= n && (!vis[dx1] || q[dx1] > t)) {
			q[dx1] = t;
			qu.push({t, dx1});
			vis[dx1] = true;
		}
		if (dx2 >= 1 && dx2 <= n && (!vis[dx2] || q[dx2] > t)) {
			q[dx2] = t;
			qu.push({t, dx2});
			vis[dx2] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << q[i] << " ";
	}
	cout << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}

