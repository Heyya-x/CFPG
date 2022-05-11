/**
  *	 author:  Heyya
  *	 created: 04.30.2022 22:50
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s;
	cin >> s;
	map<char, int> mp;
	int cnt = 0;
	int n = s.length();
	for (auto ch : s) {
		if (mp[ch] == 0) cnt++;
		mp[ch]++;
	}
	if (cnt == 1) cout << "YES\n";
	else {
		for (int i = 1; i < n; i++) {
			if (s[i] == s[i - 1]) {
				cout << "NO\n";
				return;
			}
			if (i >= 2 && s[i - 2] == s[i] && cnt >= 3) {
				cout << "NO\n";	
				return;
			}
		}
		cout << "YES\n";
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

