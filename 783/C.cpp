/**
  *	 author:  Heyya
  *	 created: 05.13.2022 22:59
**/
#include <bits/stdc++.h>
using namespace std;
using LL = long long;

void solve() {
	int n; cin >> n;
	vector<LL> q(n + 1, 0);
	for (int i = 1; i <= n; i++) cin >> q[i];
	LL ans = LLONG_MAX;
	for (int i = 1; i <= n; i++) {
		LL pre = 0, sum = 0;
		for (int j = i - 1; j >= 1; j--) {
			pre += q[j] - pre % q[j];
			sum += pre / q[j];
		}
		pre = 0;
		for (int j = i + 1; j <= n; j++) {
			pre += q[j] - pre % q[j];
			sum += pre / q[j];
		}
		ans = min(ans, sum);
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int T;
	T = 1;
	while (T--) {
		solve();
	}
}

