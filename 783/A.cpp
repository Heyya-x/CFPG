/**
  *	 author:  Heyya
  *	 created: 05.13.2022 22:18
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, m; cin >> n >> m;
	if (n > m) swap(n, m);
	int ans = 0;
	if (n == 1 && m >= 3) {
		ans = -1;
	} else {
		ans = 2 * m - 2 - (n + m) % 2;
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

