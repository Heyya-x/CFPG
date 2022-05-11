/**
  *	 author:  Heyya
  *	 created: 12.17.2021 12:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s[n - 2];
	for (int i = 0; i < n - 2; i++) cin >> s[i];
	string ans = s[0];
	for (int i = 1; i < n - 2; i++) {
		if (s[i][0] == s[i - 1][1]) ans.push_back(s[i][1]);
		else {
			ans += s[i];
		}
	}
	if (ans.size() < n) ans.push_back(ans[n - 2]);
	cout << ans << '\n';
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


