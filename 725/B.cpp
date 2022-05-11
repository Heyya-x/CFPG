/**
  *	 author:  Heyya
  *	 created: 05.05.2022 15:51
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<int> q(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		sum += q[i];
	}
	if (sum % n != 0) {
		cout << "-1\n";
	} else {
		int ave = sum / n;
		int cnt = 0;
		for (auto x : q) {
			if (x > ave) cnt++;
		}
		cout << cnt << "\n";
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

