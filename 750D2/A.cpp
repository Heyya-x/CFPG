/**
  *	 author:  Heyya
  *	 created: 11.16.2021 21:47
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = (a + c) % 2;
	cout << ans << '\n';
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


