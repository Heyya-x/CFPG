/**
  *	 author:  Heyya
  *	 created: 11.16.2021 22:55
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	int cnt0 = 0, cnt1 = 0, x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) cnt0++;
		if (x == 1) cnt1++;
	}
	cout << (1LL << cnt0) * cnt1 << '\n';
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


