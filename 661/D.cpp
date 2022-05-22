/**
  *	 author:  Heyya
  *	 created: 05.22.2022 20:46
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	vector<int> q(n);
	set<int> st[2];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int x = s[i] - '0';
		if (st[x ^ 1].size() > 0) {
			int cur = *st[x ^ 1].begin();
			st[x ^ 1].erase(cur);
			st[x].insert(cur);
			q[i] = cur;
		} else {
			st[x].insert(++cnt);
			q[i] = cnt;
		}
	}
	cout << cnt << "\n";
	for (auto x : q) {
		cout << x << " ";
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}

