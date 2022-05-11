/**
  *	 author:  Heyya
  *	 created: 05.04.2022 14:53
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	string s; cin >> s;
	int l = 0, r = s.length() - 1;
	string ans;
	while (l < r) {
		ans.push_back(s[l++]);
		ans.push_back(s[r--]);
		if (l == r) {
			ans.push_back(s[l]);
			break;
		}
	}
	reverse(ans.begin(), ans.end());
	for (int i = (ans[0] !=  'a'); i < (int)ans.size() - 1; i += 2) {
		if (ans[i] > ans[i + 1]) swap(ans[i], ans[i + 1]);
	}
	for (int i = 0; i < (int)ans.size(); i++) {
		if (ans[i] - 'a' != i) {
			cout << "NO\n";
			return;
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

