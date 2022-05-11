/**
  *	 author:  Heyya
  *	 created: 05.05.2022 16:44
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, l, r; cin >> n >> l >> r;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	sort(q.begin(), q.end());
	LL ans = 0;
	for (int i = 0; i < n; i++) {
		ans += upper_bound(q.begin(), q.end(), r - q[i]) - q.begin(); 
		ans -= lower_bound(q.begin(), q.end(), l - q[i]) - q.begin();
		if (l <= 2 * q[i] && 2 * q[i] <= r) {
			ans--;
		}
	}
	cout << ans / 2 << "\n";
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

