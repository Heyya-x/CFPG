/**
  *	 author:  Heyya
  *	 created: 11.19.2021 23:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll u, v;
	cin >> u >> v;
	ll x = u * u, y = - v * v;
	cout << x << ' ' << y << '\n';
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


