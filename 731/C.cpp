/**
  *	 author:  Heyya
  *	 created: 05.04.2022 15:29
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int k, n, m;
	cin >> k >> n >> m;
	vector<int> q(n);
	vector<int> p(m);
	for (int i = 0; i < n; i++) cin >> q[i];
	for (int i = 0; i < m; i++) cin >> p[i];
	vector<int> ans;
	int l = 0, r = 0;
	while (l < n && r < m) {
		if (q[l] < p[r]) {
			ans.push_back(q[l]);
			l++;
		} else {
			ans.push_back(p[r]);
			r++;
		}
	}
	while (l < n) {
		ans.push_back(q[l++]);
	}
	while (r < m) {
		ans.push_back(p[r++]);
	}
	int sz = ans.size();
	for (int i = 0; i < sz; i++) {
		if (ans[i] == 0) k++;
		if (ans[i] > k) {
			cout << "-1\n";
			return;
		}
	}
	for (auto x : ans) {
		cout << x << " ";
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

