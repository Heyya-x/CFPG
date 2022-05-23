/**
  *	 author:  Heyya
  *	 created: 05.08.2022 20:33
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	int m; cin >> m;
	vector<bool> sp(26, false);
	for (int i = 0; i < m; i++) {
		char ch; cin >> ch;
		sp[ch - 'a'] = true;
	}
	int cnt0 = 0, cnt1 = 0;
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (sp[s[i] - 'a']) {
			cnt1++;
			cnt0 = max(cnt0, res);
			res = 0;
		} else {
			res++;
		}
	}
	cout << cnt0 + cnt1 - 1<< "\n";
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
