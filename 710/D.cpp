/**
  *	 author:  Heyya
  *	 created: 05.02.2022 22:51
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	map<int, int> mp;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp[x]++;
		mx = max(mx, mp[x]);
	}
	int ans = 2 * mx - n;
	if (ans <= 0) {
		cout  << n % 2 << "\n";
	} else {
		cout << ans << "\n";
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

