/**
  *	 author:  Heyya
  *	 created: 02.08.2022 12:50
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, x; cin >> n >> x;
	vector<pair<int, int>> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i].first;
	}
	for (int i = 0; i < n; i++) {
		cin >> q[i].second;
	}
	sort(q.begin(), q.end());
	for (auto p : q) {
		if (x < p.first) break;
		x += p.second;
	}
	cout << x << "\n";
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


