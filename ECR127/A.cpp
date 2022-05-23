/**
  *	 author:  Heyya
  *	 created: 05.11.2022 20:31
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int n = s.length();
	if (n == 1) {
		cout << "NO\n";
		return;
	} else if (s[0] != s[1] || s[n - 2] != s[n - 1]) {
		cout << "NO\n";
		return;
	} else {
		for (int i = 1; i < n - 2; i++) {
			if (s[i - 1] != s[i] && s[i] != s[i + 1]) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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

