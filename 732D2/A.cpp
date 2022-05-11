/**
  *	 author:  Heyya
  *	 created: 11.18.2021 22:05
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n; cin >> n;
	int a[n], b[n], cnt = 0;
	vector<vector<int>> c(n, vector<int>(2));
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		c[i][0] = a[i] - b[i];
		c[i][1] = i + 1;
		cnt += c[i][0];
	}
	if (cnt != 0) cout << "-1\n"; 
	else {
		sort(c.begin(), c.end());
		int l = 0, r = n - 1;
		vector<pair<int, int> > ans;
		while (l <= r) {
			while (l <= r && l < n && c[l][0] == 0) l++;
			while (l <= r && r >= 0 && c[r][0] == 0) r--;
			if (l > r) break;
			c[l][0]++;
			c[r][0]--;
			ans.push_back({c[r][1], c[l][1]});
		}
		cout << ans.size() << '\n';
		for (auto &p : ans)
			cout << p.first << ' ' << p.second << '\n';
	}
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


