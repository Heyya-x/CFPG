/**
  *	 author:  Heyya
  *	 created: 05.15.2022 23:18
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, m; cin >> n >> m;
	vector<vector<int> > q(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> q[i][j];
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp = -3 * q[i][j];
			int x = i, y = j;
			while (x >= 0 && y >= 0) {
				temp += q[x][y];
				x--; y--;
			}
			x = i, y = j;
			while (x >= 0 && y < m) {
				temp += q[x][y];
				x--; y++;
			}
			x = i, y = j;
			while (x < n && y >= 0) {
				temp += q[x][y];
				x++; y--;
			}
			x = i, y = j;
			while (x < n && y < m) {
				temp += q[x][y];
				x++; y++;
			}
			ans = max(ans, temp);
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

