/**
  *	 author:  Heyya
  *	 created: 11.18.2021 21:26
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int maxn = max(a, max(b, c));
	cout << (a > b && a > c ? 0 : maxn - a + 1) << ' ';
	cout << (b > a && b > c ? 0 : maxn - b + 1) << ' ';
	cout << (c > a && c > b ? 0 : maxn - c + 1) << '\n';
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


