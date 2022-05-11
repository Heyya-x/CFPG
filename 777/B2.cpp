/**
  *	 author:  Heyya
  *	 created: 03.11.2022 22:46
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> q(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			q[i][j] = s[j] - '0';
		//	cout << q[i][j];
		}
	//	cout << "\n";
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (q[i][j] == 0) continue;
			bool ans = true;
			if (i > 0 && j > 0 && (q[i - 1][j - 1] == 0 && q[i - 1][j] == 1 && q[i][j - 1] == 1)) ans = false;
			if (i > 0 && j + 1 < n && (q[i - 1][j] == 1 && q[i - 1][j + 1] == 0 && q[i][j + 1] == 1)) ans = false;
			if (i + 1 < n && j > 0 && (q[i + 1][j] == 1 && q[i + 1][j - 1] == 0 && q[i][j - 1] == 1)) ans = false;
			if (i + 1 < n && j + 1 < n && (q[i + 1][j] == 1 && q[i + 1][j + 1] == 0 && q[i][j + 1] == 1)) ans = false;
			if (ans == false) {
				cout << "No\n";
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

