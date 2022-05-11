/**
  *	 author:  Heyya
  *	 created: 04.13.2022 21:52
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> m1(n + 1, vector<int>(m + 1));
	vector<vector<int>> m2(n + 1, vector<int>(m + 1));
	vector<vector<int>> a1(n + m + 1);
	vector<vector<int>> a2(n + m + 1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> m1[i][j];
			a1[i + j].push_back(m1[i][j]);
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> m2[i][j];
			a2[i + j].push_back(m2[i][j]);
		}
	}
	bool ans = true;
	for (int i = 1; i <= n + m; i++) {
		sort(a1[i].begin(), a1[i].end());
		sort(a2[i].begin(), a2[i].end());
		if (a1[i] != a2[i]) {
			ans = false;
			break;
		}
	}
	cout << (ans ? "YES" : "NO") << "\n";
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

