/**
  *	 author:  Heyya
  *	 created: 05.18.2022 15:56
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	LL n, w; cin >> n >> w;
	vector<LL> q(n), ans;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	for (int i = 0; i < n; i++) {
		if (q[i] <= w && q[i] * 2 >= w) {
			cout << "1\n" << i + 1 << "\n";
			return;
		}
	}
	LL pre = 0;
	for (int i = 0; i < n; i++) {
		if (pre + q[i] <= w) {
			pre += q[i];
			ans.push_back(i + 1);
		}
	}
	if (pre * 2 >= w) {
		cout << ans.size() << "\n";
		for (auto x : ans) cout << x << " ";
		cout << "\n";
	} else {
		cout << "-1\n";
	}
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}

