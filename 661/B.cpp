/**
  *	 author:  Heyya
  *	 created: 05.22.2022 19:18
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<LL> a(n), b(n);
	LL ma = INT_MAX, mb = INT_MAX;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		ma = min(a[i], ma);
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		mb = min(b[i], mb);
	}
	LL ans = 0;
	for (int i = 0; i < n; i++) {
		LL res = 0;
		if (a[i] > ma) res = max(res, a[i] - ma);
		if (b[i] > mb) res = max(res, b[i] - mb);
		ans += res;
	}
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

