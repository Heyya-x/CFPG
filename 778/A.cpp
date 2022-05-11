/**
  *	 author:  Heyya
  *	 created: 04.15.2022 21:38
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
	cout << q[n - 2] + q[n - 1] << "\n";
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

