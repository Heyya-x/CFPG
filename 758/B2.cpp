/**
  *	 author:  Heyya
  *	 created: 04.30.2022 23:31
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	map<char, int> mp;
	int cnt = 0;
	for (auto ch : s) {
		if (mp[ch]++ == 0) cnt++;
	}
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (mp[s[i]] == 1) continue;
		map<char, int> res;
		for (int j = i + 1; j < n; j++) {
			if (s[j] != s[i]) {
				res[s[j]]++;
			}
			if (s[i] == s[j]) {
				if (res.size() < cnt - 1) {
					cout << "NO\n";	
					return;
				}
				break;
			}
		}
	}
	cout << "YES\n";
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

