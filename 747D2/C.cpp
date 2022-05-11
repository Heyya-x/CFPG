/**
  *	 author:  Heyya
  *	 created: 02.06.2022 15:54
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; char c; string s;
	cin >> n >> c >> s;
	bool ok = true;
	vector<int> ans;
	for (char ch : s) {
		if (ch != c) {
			ok = false;
			break;
		}
	}
	if (!ok) {
		for (int i = 1; i <= n; i++) {
			ok = true;
			for (int j = i; j <= n; j += i) {
				ok &= (s[j - 1] == c);
			}
			if (ok) {
				ans.push_back(i);
				break;
			}
		}
		if(!ok) ans = {n - 1, n};
	}
	cout << ans.size() << "\n";
	for (auto x : ans) {
		cout << x << " ";
	}
	if (ans.size()) cout << "\n";
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


