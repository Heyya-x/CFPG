/**
  *	 author:  Heyya
  *	 created: 05.12.2022 19:39
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n, x; cin >> n >> x;
	vector<int> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	sort(q.begin(), q.end());
	LL pre = 0;
	LL ans = 0;
	for (int i = 0; i < n; i++) {
		pre += q[i];
		LL k = max(0LL, (x - pre) / (i + 1));
		if (pre <= x) k++;
		ans += k;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int T;
	T = 1;
	cin >> T;
	while (T--) {
		solve();
	}
}

