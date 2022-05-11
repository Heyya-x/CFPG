/**
  *	 author:  Heyya
  *	 created: 05.09.2022 14:40
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int ans = 0; 
	for (auto x : s) ans += x - 'a' + 1;
	int n = s.length();
	if (n % 2 == 0) {
		cout << "Alice " << ans << "\n";
	} else {
		int ans2 = min(s[0], s[n - 1]) - 'a' + 1;
		ans = ans - ans2;
		if (ans < ans2) {
			cout << "Bob " << ans2 - ans<< "\n";
		} else {
			cout << "Alice " << ans - ans2 << "\n";
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

