/**
  *	 author:  Heyya
  *	 created: 05.18.2022 19:02
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	int cnt = 0;
	vector<int> q(n);
	int l = -1, r = -1;
	for (int i = 0; i < n; i++) {
		cin >> q[i];
		if (l == -1 && q[i] == 1) l = i;
		if (q[i] == 1) r = i, cnt++;
	}
	int ans = (r - l + 1 - cnt);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}

