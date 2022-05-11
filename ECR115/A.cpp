/**
  *	 author:  Heyya
  *	 created: 11.19.2021 22:34
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	bool ok = false;
	for (int i = 0; i < n; i++) {
		ok |= (s1[i] == '1' && s2[i] == '1');
	}
	cout << (ok ? "NO" : "YES") << '\n';
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


