/**
  *	 author:  Heyya
  *	 created: 05.07.2022 23:14
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	int ans = 0;
	for (int i = n - 2; i >= 0; i--) {
		while (q[i] >= q[i + 1] && q[i] > 0) {
			ans++;
			q[i] /= 2;
		}
		if (q[i] == q[i + 1]) {
			cout << "-1\n";
			return;
		}
	}
	cout << ans << "\n";
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

