/**
  *	 author:  Heyya
  *	 created: 02.07.2022 14:37
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int a = 0, b = 0, ans = 0;
	string s; cin >> s;
	for (char c : s) {
		if (c == '0') {
			a++;
		} else {
			b++;
		}
		if (a != b) {
			ans = min(a, b);
		}
	}
	cout << ans << "\n";
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


