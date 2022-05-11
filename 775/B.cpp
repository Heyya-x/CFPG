/**
  *	 author:  Heyya
  *	 created: 03.06.2022 18:26
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	sort(q.begin(), q.end());
	if (q[n - 1] == 0) {
		cout << 0 << endl;
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		q[n - 1] -= q[i];
		if (q[n - 1] <= 0) break;
	}
	if (q[n - 1] <= 0) {
		cout << 1 << endl;
	} else {
		cout << q[n - 1] << endl;
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

