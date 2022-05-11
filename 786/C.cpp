/**
  *	 author:  Heyya
  *	 created: 05.03.2022 18:22
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s, t; cin >> s >> t;
	if (t == "a") {
		cout << 1 << "\n";
	} else {
		bool f = false;
		for (auto ch : t) if (ch == 'a') {
			f = true;
			break;
		}
		if (f) {
			cout << "-1\n";
		} else {
			int k = s.size();
			LL ans = pow(2, k);
			cout << ans << "\n";
		}
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

