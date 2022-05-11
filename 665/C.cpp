/**
  *	 author:  Heyya
  *	 created: 05.02.2022 22:54
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	int mn = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		mn = min(mn, q[i]);
	}
	auto p = q;
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++) {
		if (q[i] != p[i] && q[i] % mn != 0) {
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

