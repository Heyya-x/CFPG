/**
  *	 author:  Heyya
  *	 created: 11.05.2021 12:07
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		string s;
		cin >> s;
		map<char, int> mp;
		for (int i = 0; i < s.size(); i++) {
			mp[s[i]] = i;
		}
		string str; cin >> str;
		int ans = 0;
		for (int i = 1; i < str.size(); i++) {
			ans += abs(mp[str[i]] - mp[str[i - 1]]);
		}
		cout << ans << '\n';
	}
	return 0;
}


