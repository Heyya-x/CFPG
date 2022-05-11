/**
  *	 author:  Heyya
  *	 created: 11.18.2021 19:13
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
	string s;
	cin >> s;
	int ab = 0, ba = 0;
	for (int i = 0; i < s.size() - 1; i++)
		if (s[i] == 'a' && s[i + 1] == 'b') ab++;
		else if (s[i] == 'b' && s[i + 1] == 'a') ba++;
	if (ba > ab) {
		for (int i = s.size() - 1; i >= 0; i--)
			if (s[i] == 'a') {
				s[i] = 'b';
				break;
			}
	} else if (ab > ba) {
		for (int i = 0; i < s.size(); i++)
			if (s[i] == 'a') {
				s[i] = 'b';
				break;
			}
	}
	cout << s << '\n';
	return;
}

signed main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}


