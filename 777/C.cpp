/**
  *	 author:  Heyya
  *	 created: 03.12.2022 00:05
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Point {
	int lx, ly, rx, ry;
};

void solve() {
	int n, m;
	cin >> n >> m;
	vector<string> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	if (q[0][0] == '1') {
		cout << "-1\n";
		return;
	}
	vector<Point> row;
	for (int i = 0; i < n; i++) {
		for (int j = m - 1; j > 0; j--) {
			if (q[i][j] == '1') row.push_back({i + 1, j, i + 1, j + 1});
		}
	}
	vector<Point> col;
	for (int i = n - 1; i > 0; i--) {
		if (q[i][0] == '1') col.push_back({i, 1, i + 1, 1});	
	}
	cout << row.size() + col.size() << "\n";

	for (auto p : row) {
		cout << p.lx << " " << p.ly << " " << p.rx << " " << p.ry << "\n";
	}
	for (auto p : col) {
		cout << p.lx << " " << p.ly << " " << p.rx << " " << p.ry << "\n";
	}

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

