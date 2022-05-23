/**
  *	 author:  Heyya
  *	 created: 05.13.2022 22:52
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	LL n, m; cin >> n >> m;
	vector<LL> q(n);
	for (int i = 0; i < n; i++) cin >> q[i];
	sort(q.rbegin(), q.rend());
	LL res = q[0] + n;
	for (int i = 0; i < n - 1; i++) res += q[i];
	cout << (res <= m ? "YES\n" : "NO\n");
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

