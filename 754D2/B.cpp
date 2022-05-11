/**
  *	 author:  Heyya
  *	 created: 11.12.2021 23:09
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int n_1 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') n_1++;
	}
	vector<int> ans;
	int skip = n - n_1;
	int n_0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			if (i >= skip) continue;
			ans.push_back(i + 1);
		}
	}
	if (ans.size()) {
		for (int i = ans.back(); i < n; i++) {
			if (s[i] == '0')
				ans.push_back(i + 1);
		}
	}
	if (ans.size()) {
		cout << 1 << '\n';
		cout << ans.size();
		for (int x : ans) cout << ' ' << x;
	}
	cout << '\n';
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {	
		solve();
	}
	return 0;
}


