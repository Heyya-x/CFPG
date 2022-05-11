/**
  *	 author:  Heyya
  *	 created: 11.18.2021 23:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k, cnt = 0, res = 1;
	cin >> n >> k;
	while (res < k) {
		res *= 2;
		cnt++;
	}
	if (res < n) cnt += (n - res + k - 1) / k;
	cout << cnt << '\n';
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


