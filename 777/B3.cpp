/**
  *	 author:  Heyya
  *	 created: 03.11.2022 23:53
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < m - 1; j++) {
			int t = q[i][j] + q[i + 1][j] + q[i][j + 1] + q[i + 1][j + 1] - '0' - '0' - '0' - '0';
			if (t == 3) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "Yes\n";
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

