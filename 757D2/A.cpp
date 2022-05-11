/**
  *	 author:  Heyya
  *	 created: 12.02.2021 22:00
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n, l, r, k;
	cin >> n >> l >> r >> k;
	int q[n];
	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}
	sort(q, q + n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (q[i] >= l && q[i] <= r && k >= q[i]) {
			cnt++;
			k -= q[i];
			if (k == 0) break;
		}
	}
	cout << cnt << '\n';
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


