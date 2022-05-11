/**
  *	 author:  Heyya
  *	 created: 05.07.2022 23:29
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int n = s.length();
	if (n == 1 || s[0] == '0') {
		cout << "1\n";
	} else {
		int res = 1;
		for (int i = 1; i < n; i++) {
			if (s[i] == '0') {
				cout << res + 1 << "\n";
				return;
			} else if (s[i] == '1') {
				res = 1;
			} else {
				res++;
			}
		}
		cout << res << "\n";
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

