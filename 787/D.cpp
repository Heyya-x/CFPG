/**
  *	 author:  Heyya
  *	 created: 05.08.2022 16:22
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n + 1);
	vector<bool> isLeaf(n + 1, true);
	vector<bool> vis(n + 1, false);
	for (int i = 1; i <= n; i++) {
		cin >> q[i];
		isLeaf[q[i]] = false;	
	}
	if (n == 1) {
		cout << "1\n1\n1\n\n";
		return;
	}
	vector<vector<int>> ans;
	for (int i = 1; i <= n; i++) {
		if (isLeaf[i]) {
			vector<int> res;
			int cur = i;
			while (!vis[cur]) {
				res.push_back(cur);
				vis[cur] = true;
				cur = q[cur];
			}
			ans.push_back(res);
		}
	}
	cout << ans.size() << "\n";
	for (auto v : ans) {
		int n = v.size();
		cout << n << "\n";
		for (int i = n - 1; i >= 0; i--) {
			cout << v[i] << " \n"[i == 0];
		}
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

