/**
  *	 author:  Heyya
  *	 created: 05.15.2022 22:30
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int m, n; cin >> m >> n;
	vector<string> q(m);
	for (int i = 0; i < m; i++) cin >> q[i];
	int ans = INT_MAX;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) continue;
			int temp = 0;
			for (int k = 0; k < n; k++) {
				temp += abs(q[i][k] - q[j][k]);
			}
			ans = min(ans, temp);
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

