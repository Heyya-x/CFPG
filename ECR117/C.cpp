/**
  *	 author:  Heyya
  *	 created: 11.26.2021 20:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll get(ll x) {
	return x * (x + 1) / 2;
}

void solve() {
	ll k, x; cin >> k >> x;
	ll l = 1, r = 2 * k - 1;
	ll res = 2 * k - 1;
	bool over = false;
	while (l <= r) {
		ll mid = (l + r) >> 1;
		if (mid >= k) {
			over = (get(k) + get(k - 1) - get(2 * k - 1 - mid) >= x);
		} else {
			over = (get(mid) >= x);
		}
		if (over) {
			res = mid;
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	cout << res << '\n';
	return;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


