/**
  *	 author:  Heyya
  *	 created: 04.30.2022 09:57
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	vector<string> q(9);
	for (int i = 0; i < 9; i++) cin >> q[i];
	int idx = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (q[i][j] == '1') q[i][j] = '2';
			//int r = idx / 3, l = idx % 3;
			//swap(q[i][j], q[r][l]);
			//idx++;
		}
	}
	for (auto s : q) {
		cout << s << "\n";
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

