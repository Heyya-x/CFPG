/**
  *	 author:  Heyya
  *	 created: 05.06.2022 12:36
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<bool> vis(n + 1,false);
	vector<int> ans;
	for (int i = 0; i < 2 * n; i++) {
		int x; cin >> x;
		if (!vis[x]) {
			ans.push_back(x);
			vis[x] = true;
		}
	}
	for (auto x : ans) {
		cout << x << " ";
	}
	cout << "\n";
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

