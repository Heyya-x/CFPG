/**
  *	 author:  Heyya
  *	 created: 11.26.2021 19:19
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int x, y; cin >> x >> y;
	if ((x + y) & 1) {
		cout << "-1 -1\n";
	} else {
		int a = abs(x - y) / 2, b = min(x, y);
		if (a > x) swap(a, b);
		cout << a << ' ' << b << '\n';
	}
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


