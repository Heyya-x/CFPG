/**
  *	 author:  Heyya
  *	 created: 04.30.2022 09:17
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		for (int j = 30; j >= 0; j--) {
			if (x & (1<<j)) {
				q[i] = (1<<j);
				break;
			}
		}
	}
	for (auto x : q) {
		cout << x << " ";
	}
	cout << "\n";
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

