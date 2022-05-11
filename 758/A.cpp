/**
  *	 author:  Heyya
  *	 created: 04.30.2022 22:41
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s;
	cin >> s;
	if ((int)s.length() == 1) {
		cout << "Bob " << (s[0] - 'a' + 1) << "\n";
	} else if ((int)s.length() % 2 == 0) {
		int ans = 0;
		for (auto ch : s) ans += ch - 'a' + 1;
		cout << "Alice " << ans << "\n";
	} else {
		int a = 0;
		for (auto ch : s) a += ch - 'a' + 1;	
		int b = min(s[0], s.back()) - 'a' + 1;
		a -= b;
		if (a > b) cout << "Alice " << a - b << "\n";
		else cout << "Bob " << b - a << "\n";
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

