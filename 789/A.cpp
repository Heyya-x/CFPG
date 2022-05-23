/**
  *	 author:  Heyya
  *	 created: 05.12.2022 20:59
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	map<int, int> mp;
	int same = 0;
	int zero = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		if (x == 0) {
			ans--;
			zero = 1;
		}
		mp[x]++;
		if (mp[x] > 1) same = 1;
	}
	if (zero) {
		ans += n;
	} else {
		ans += n + 1 - same;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}

