/**
  *	 author:  Heyya
  *	 created: 05.16.2022 22:44
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	int mx = 0;
	map<int, int> mp;
	for (int i = 0; i < n - 1; i++) {
		int x; cin >> x;
		mp[x]++;
		mx = max(mp[x], mx);
	}
	int res = 0;
	for (auto [u, v] : mp) {
		if (v == mx) res++;
	}
	int ans1 = mp.size() + 1;
	cout << max(ans1, mx + res - 1) << "\n";
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

