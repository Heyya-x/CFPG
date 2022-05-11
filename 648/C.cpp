/**
  *	 author:  Heyya
  *	 created: 03.13.2022 11:13
**/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	cin >> n;
	map<int, int> mp;
	vector<int> q(n, 0);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		mp[x] = i;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		int move = (mp[x] - i + n) % n;
		q[move]++;
		ans = max(ans, q[move]);
	}
	cout << ans << "\n";
	return;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T = 1; //cin >> T;
	while (T--) {	
		solve();
	}
	return 0;
}

