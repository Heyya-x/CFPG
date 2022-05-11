/**
  *	 author:  Heyya
  *	 created: 05.09.2022 14:53
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int n = s.length();
	map<char, int> mp;
	for (auto ch : s) mp[ch]++;
	int sz = mp.size();
	for (int i = 0; i < n; i++) {
		char ch = s[i];
		if (mp[ch] == 1) continue;
		set<char> st;
		for (int j = i + 1; s[j] != ch; j++) {
			st.insert(s[j]);
		}
		if (st.size() + 1 != sz) {
			cout << "No\n";
			return;
		}
		mp[ch]--;
	}
	cout << "Yes\n";
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

