/**
  *	 author:  Heyya
  *	 created: 05.03.2022 22:26
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, m, t;
	cin >> n >> m >> t;
	vector<vector<char>> q(n + 1, vector<char>(m + 1));
	vector<vector<int>> pre(n + 1, vector<int>(m + 1, 0));

	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> q[i][j];
			if (q[i][j] == '*') {
				pre[i][j] = 1;
				cnt++;
			}
			pre[i][j] += pre[i - 1][j];
		}
	}

	while (t--) {
		int x, y; cin >> x >> y;
		int sta;
		if (q[x][y] == '*') {
			sta = -1;
			q[x][y] = '.';
		} else {
			sta = 1;
			q[x][y] = '*';
		}
		cnt += sta;
		for (int i = x; i <= n; i++) {
			pre[i][y] += sta;	
		}
		int col = cnt / n;
		int row = cnt % n;
		int res = 0;
		for (int i = 1; i <= col; i++) {
			res += n - pre[n][i];
		}
		if (row > 0) res += row - pre[row][col + 1];
		cout << res << "\n";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}

