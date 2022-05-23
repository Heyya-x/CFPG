/**
  *	 author:  Heyya
  *	 created: 05.16.2022 23:12
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	map<int, int> mp;
	int mx = 0;
	for (int i = 1; i < n; i++) {
		int x; cin >> x;
		mp[x]++;
		mx = max(mx, mp[x]);
	}
	int res = 0;
	for (auto [u, v] : mp) {
		if (v == mx) res++;
	}
	int ans1 = mp.size();
	int ans2 = mx + res - 1;
	cout << max(ans1, ans2) << "\n";
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

