/**
  *	 author:  Heyya
  *	 created: 05.03.2022 18:26
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	auto p = q;
	sort(p.begin(), p.end());
	for (int i = (n % 2); i < n - 1; i += 2) {
		if (q[i] > q[i + 1]) {
			swap(q[i], q[i + 1]);
		}
	}
	for (int i = 0; i < n; i++) {
		if (q[i] != p[i]) {
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

