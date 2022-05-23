/**
  *	 author:  Heyya
  *	 created: 05.16.2022 22:24
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	map<int, int> mp;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp[x]++;
		mx = max(mx, mp[x]);
	}
	int ans = n - mx;
	int copy = 0;
	LL cur = mx;
	LL res = 0;
	while (res < n - mx) {
		res += cur;
		cur *= 2;
		copy ++;
	}
	if (mx != n) ans += copy;
	cout << ans << "\n";
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

